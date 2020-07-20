class PermMissingElem 
{
    public int solution(int[] A)
    {
        long sum = 0;
        for(int i: A)
        {
            sum += i;
        }
        return (int)((((long)A.length+1)*((long)A.length+2)/2) - sum);
    }
}

