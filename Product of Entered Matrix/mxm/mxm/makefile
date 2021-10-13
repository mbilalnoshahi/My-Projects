CC      = gcc
CPP 	= g++
LFLAGS  = -L.
LIBS    = -fopenmp -lm
CFLAGS  = -fopenmp -O3 -Wfatal-errors
INCS    = -I.

CSRCS	= mxm.c timer.c
CPPSRCS = 
EXEC    = TEST
RUN_CMD	=OMP_NUM_THREADS=8 ./$(EXEC)
OBJS	=$(CSRCS:%.c=%.o)
OBJS   +=$(CPPSRCS:%.cpp=%.o)

all: $(EXEC)

$(EXEC) : $(OBJS)
	$(CPP) $(OBJS) -o $(EXEC) $(LFLAGS) $(LIBS)

%.o : %.cpp
	$(CPP) $(CFLAGS) $(INCS) -c $< -o $@

%.o : %.c
	$(CC) $(CFLAGS) $(INCS) -c $< -o $@

run: $(EXEC)
	$(RUN_CMD)

# to take average, copy paste the following
# for i in {1..10} ; do OMP_NUM_THREADS=1 ./TEST; done | awk '{sum=sum+$4} END {print sum/NR}'

clean:
	rm -f $(EXEC) $(OBJS) *~ 

.PHONY: clean run all

