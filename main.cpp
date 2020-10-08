#include <stdio.h>
#include <mpi.h>

int main(int args, char* argv[]){
    int errCode;

    if((errCode = MPI_Init(&args, &argv)) != 0) {
        return errCode;
    }

    int myRank;

    MPI_Comm_rank(MPI_COMM_WORLD, &myRank);

    if(myRank == 0){
        printf("It work! \n");
    }

    MPI_Finalize();

    return 0;
}