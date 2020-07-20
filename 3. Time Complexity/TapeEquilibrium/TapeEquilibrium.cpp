#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>


using namespace std;

int solution(vector<int> &A)
{

    long diff = 0;
    int suml = A[0];
    int sumr = accumulate(A.begin()+1, A.end(), 0);
    long tape = abs(suml - sumr);

    for(unsigned int i=1; i<A.size()-1; i++)
    {
        suml += A[i];
        sumr -= A[i];
        diff = abs(suml - sumr);
        if(diff<=tape)
        {
            tape = diff;
        }
    }
    return tape;
}

int main()
{
    vector<int> A = {3,1,2,4,3};
    solution(A);
}
