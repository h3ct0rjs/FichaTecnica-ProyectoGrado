C=mpicc
RUN=mpirun
all: mpicluster-contest run clean

mpicluster-contest :
	$(C) mpi_hello.c -o connection.out 
	
run:
	time ./connection.out 
	time $(RUN) -np 10 ./connection.out 
	time $(RUN) -np 10 -f machinefile ./connection.out 
