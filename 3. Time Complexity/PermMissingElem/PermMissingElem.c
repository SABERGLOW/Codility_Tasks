#include <stdlib.h>


int solution(int A[], int N)
{
    
    
    long long sum = 0;
    for(unsigned int i = 0; i<N; i++)
    {
        sum += A[i];
    }
    long long len = N;
    return (((len+1)*(len+2)/2) - sum);
}

