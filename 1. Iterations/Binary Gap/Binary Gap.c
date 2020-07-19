#include <stdlib.h>

int solution(int N)
{
    int ARRAY_SIZE = 0;
    int *binary = (int*)malloc(ARRAY_SIZE*sizeof(int));
    while (N > 0) 
    {
        binary = (int*)realloc(binary, (ARRAY_SIZE+1)*sizeof(int));
        binary[ARRAY_SIZE] = N % 2; 
        N = N / 2; 
        ARRAY_SIZE++; 
    }
        unsigned int s_gap = 0;
        unsigned int x,y;

        for(x=0; x<ARRAY_SIZE; x++)
        {
            if(binary[x] == 1)
            {
                for(y=x+1; y<ARRAY_SIZE; y++)
                {
                    if(binary[y] == 1)
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
