#include <stdlib.h>


int solution(int A[], int N) 
{
    int result = 0;

    for (unsigned int i=0; i<N; i++)
    {
        result = result ^ A[i]; // using XOR to find odd occurences. even occurences cancel themselves out. e.g: B^B = 0.
    }
    return result;

}

//dont need int main for codility 

int main()
{
    int A []= { 9, 3, 9, 3, 9, 10, 9};

    solution(A, 7);
}
