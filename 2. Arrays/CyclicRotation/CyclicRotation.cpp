#include <stdlib.h>
#include <vector>
#include <iostream>


using namespace std;


vector <int> solution(vector<int> &A, int K)
{
    if(!A.empty())
    {
            int swap;
        for ( int i=0; i<K; i++)
        {
            for (unsigned int j=A.size()-1; j>0; j--)
            {
                swap = A[j];
                A[j] = A[j-1];
                A[j-1] = swap;
            }   
        }
        return A;
    }
    
    return {};
}

//dont need int main for codility 

int main()
{
    vector <int> A = {3, 8, 9, 7, 6};

    solution(A, 3);
}