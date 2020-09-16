#include <stdio.h>
#include <mpi.h>

int main(int argc, char** argv) {
    int myrank, nprocs;

    MPI_Init(&argc, &argv);     // Null Values, This will create the basic allocation for vars
    MPI_Comm_size(MPI_COMM_WORLD, &nprocs); //Get the Communicator Size
    MPI_Comm_rank(MPI_COMM_WORLD, &myrank); //For each instance we setup the Rank id
    
    // Get the name of the processor
    char processor_name[MPI_MAX_PROCESSOR_NAME];
    int name_len;
    MPI_Get_processor_name(processor_name, &name_len);

    printf("Hello world from processor %s, rank %d out of %d processors\n",
         processor_name, myrank, nprocs);
    MPI_Finalize();     //garbage collection of all MPI vars. 
    return 0;
}
