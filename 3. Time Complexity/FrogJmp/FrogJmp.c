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