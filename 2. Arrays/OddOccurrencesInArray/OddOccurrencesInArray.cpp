#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>


using namespace std;


////////////////////////////////// METHOD 1 : USING HASH MAP ( TIME COMPLEXITY: O(N) )/////////////////////////////////
int solution(vector<int> &A) 
{
    unordered_map <int, int> hash;

    for (unsigned int i=0; i<A.size(); i++)
    {
        hash[A[i]]++;
    }

    for (auto i : hash)
    {
        if(( i.second%2) != 0) 
        {
            return i.first;
        }
    }
    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
////////////////////////////////// METHOD 2 : USING XOR ( TIME COMPLEXITY: O(N) )/////////////////////////////////////
int solution(vector<int> &A) 
{
    int result = 0;

    for (unsigned int i=0; i<A.size(); i++)
    {
        result = result ^ A[i]; // using XOR to find odd occurences. even occurences cancel themselves out. e.g: B^B = 0.
    }
    return result;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
*/

//dont need int main for codility 

int main()
{
    vector<int> A = { 9, 3, 9, 3, 9, 10, 9};

    solution(A);
}
