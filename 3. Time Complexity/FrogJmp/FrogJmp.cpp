#include <iostream>

using namespace std;


int solution(int X, int Y, int D)
{
    if(X<Y)
    {
        if((Y-X)%D != 0)
        {
            return ((Y-X)/D)+1;
        }
        return ((Y-X)/D);
    }
        return 0;
}



int main()
{
    int JUMP = solution(10, 85, 30);
    cout<<JUMP;
}
