#include <iostream>
#include <vector>
#include <algorithm>
#include<numeric>


using namespace std;

int solution(vector<int> &A)
{
    return (((A.size()+1)*(A.size()+2)/2) - (accumulate(A.begin(),A.end(),0)));
}

int main()
{
    vector<int> A = {2,3,1,5};
    solution(A);
}
