class TapeEquilibrium
{
    public int solution(int[] A) 
    {
        int diff = 0;
        int suml = A[0];
        int sumr = 0;
        for( int i=1; i<A.length; i++)
        {
            sumr += A[i];
        }
        
        int tape = Math.abs(suml - sumr);
    
        for( int i=1; i<A.length-1; i++)
        {
            suml += A[i];
            sumr -= A[i];
            diff = Math.abs(suml - sumr);
            if(diff<=tape)
            {
                tape = diff;
            }
        }
        return tape;
    }
}