#include <stdlib.h>


struct Results
{
    int * A;
    int N; // Length of the array
};


struct Results solution(int A[], int N, int K)
{
    struct Results result;
    result.N = N;

    if(N == 0)
    {
        result.A = A;
    }
    else
    {
        int swap;
        int *solution = (int*)malloc(N *sizeof(int));
        solution = A;
        
        for ( int i=0; i<K; i++)
        {
            for (unsigned int j=N-1; j>0; j--)
            {
                swap = solution[j];
                solution[j] = solution[j-1];
                solution[j-1] = swap;
            }   
        }
        result.A = solution;
        return result;
    }
    return result;
}
