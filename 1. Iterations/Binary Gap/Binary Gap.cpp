#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int solution(int N)
{
    string binary = bitset<32>(N).to_string(); //to binary
        unsigned int s_gap = 0;

        for(unsigned int x=0; x<binary.length(); x++)
        {
            if(binary[x] == '1')
            {
                for(unsigned int y=x+1; y<binary.length(); y++)
                {
                    if(binary[y] == '1')
                    {
                        if(s_gap < (y-x-1))
                        {
                            s_gap = y-x-1;
                        }
                        x=y;
                    }
                }
            }
        }
        return s_gap;
}


//dont need int main for codility 

int main()
{
    int x = 9;
    solution(x);
}
