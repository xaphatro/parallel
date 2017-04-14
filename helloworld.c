#include <stdio.h>
#include "omp.h"    //The magic import that brings in the openmp library

int main()
{
    #pragma omp parallel    //This is the declaration that tells openmp to parallelize this bit
    {
        int id = omp_get_thread_num();
        printf("Hello #%d", id);
        printf("world #%d\n", id);
    }
    return 0;
}
