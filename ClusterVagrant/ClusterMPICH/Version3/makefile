#https://makefiletutorial.com/
C = mpicc
RUN = mpirun
all: compile run
run: compiletest
	./connection.out
	$(RUN) -np 10 ./connection.out

runcluster: compiletest
	$(RUN) -np 10 -f machinefile ./connection.out

compiletest: mpi_hello.c
	$(C) mpi_hello.c -o connection.out
testonemachine : 
	time $(RUN) -np 200 ./connection.out 
	echo ""
testcluster: 
	time $(RUN) -np 200 -f machinefile ./connection.out 
	echo ""
clean :
	rm -rf connection.ou
