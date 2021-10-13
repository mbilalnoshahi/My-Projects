CC      = gcc
LFLAGS  = -L.
LIBS    = -fopenmp -lm
CFLAGS  = -fopenmp -O3 -Wfatal-errors
INCS    = -I.

CSRCS	= test.c timer.c
CPPSRCS = 
EXEC    = TEST
RUN_CMD	=OMP_NUM_THREADS=8 ./$(EXEC)
OBJS	=$(CSRCS:%.c=%.o)

all: $(EXEC)

$(EXEC) : $(OBJS)
	$(CC) $(OBJS) -o $(EXEC) $(LFLAGS) $(LIBS)

%.o : %.cpp
	$(CC) $(CFLAGS) $(INCS) -c $< -o $@
	@cp $*.d $*.P; \
	sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
	-e '/^$$/ d' -e 's/$$/ :/' < $*.d >> $*.P; \
	rm -f $*.d

-include *.P

format:
	astyle --style=allman *.h *.cpp
	rm -f *.orig

run: $(EXEC)
	$(RUN_CMD)
	@echo "converting generated julia_image.tga  to  julia_image.png ..."
	convert julia_image.tga julia_image.png

# to take average, copy paste the following
# for i in {1..10} ; do OMP_NUM_THREADS=1 ./TEST; done | awk '{sum=sum+$4} END {print sum/NR}'

gprof: CFLAGS=-O1 -g -pg -fno-inline -fno-omit-frame-pointer -Wall -Wfatal-errors
gprof: LDFLAGS=-pg
gprof: clean $(EXEC) 
	    $(RUN_CMD)
	gprof -b $(EXEC) > profile-gprof.txt
	bash ./gprof2pdf.sh profile-gprof.txt

perf: CFLAGS=-O2 -g -fno-omit-frame-pointer -Wall -Wfatal-errors
perf: clean $(EXEC)
	perf record $(RUN_CMD)
	perf report --stdio > profile-perf.txt





clean:
	rm -f $(EXEC) $(OBJS) *~ *.P perf.data gmon.out profile-gprof.* profile-perf.*

.PHONY: clean run all



