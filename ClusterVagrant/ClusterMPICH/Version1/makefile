EXECS=mpi_hello_world
MPICC?=mpicc
MPICR?=mpirun

all: ${EXECS}

mpi_hello_world: /home/vagrant/cloud/mpi_hello_world.c
    ${MPICC} -o mpi_hello mpi_hello_world.c

clean:
    rm ${EXECS}