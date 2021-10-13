CC      = g++
# CC      = clang++
LFLAGS  = -L. 
LIBS    = -lm
CFLAGS  = -O3 -MD -O2 -Wall -Wfatal-errors
INCS    = -I.
LDFLAGS = 

SRCS	= test.cpp 
EXEC    = test
RUN_CMD	=./$(EXEC)
OBJS	=$(SRCS:%.cpp=%.o)

all: clean $(EXEC) run


$(EXEC) : $(OBJS)
	$(CC) $(OBJS) -o $(EXEC) $(LFLAGS) $(LIBS) $(LDFLAGS)

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

