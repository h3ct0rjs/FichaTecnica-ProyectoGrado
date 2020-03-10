EXECS=mpi_hello_world
MPICC?=mpicc
MPICR?=mpirun

all: ${EXECS}

mpi_hello_world: /home/vagrant/cloud/mpi_hello_world.c
    ${MPICC} -o mpi_hello mpi_hello_world.c

run : 
	${MPICC} -np 2 -hosts master-vm, slave1-vm, slave2-vm, slave3-vm, slave4-vm

clean:
    rm ${EXECS}