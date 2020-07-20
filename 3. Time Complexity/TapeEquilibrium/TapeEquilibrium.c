int solution(int A[], int N) 
{
    int diff = 0;
    int suml = A[0];
    int sumr = 0;
    for( int i=1; i<N; i++)
    {
        sumr += A[i];
    }
    
    int tape = abs(suml - sumr);
    for(unsigned int i=1; i<N-1; i++)
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