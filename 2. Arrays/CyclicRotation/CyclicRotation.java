class CyclicRotation
{
    public int[] solution(int[] A, int K) 
    {
        if(A.length == 0)
        {
            return A;
        }
        else
        {
            int swap = 0;
            for(int i=0; i<K; i++)
            {
                for(int j=A.length-1; j>0; j--)
                {
                    swap = A[j];
                    A[j] = A[j-1];
                    A[j-1] = swap;
                }
            }
        }
        return A;
    }
}