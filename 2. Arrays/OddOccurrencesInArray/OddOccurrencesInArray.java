public class OddOccurrencesInArray
{

    public static int solution(int []A)
    {
        int result = 0;
        for(int i=0; i<A.length; i++)
        {
            result = result ^ A[i];
        }
        return  result;
    }

    public static void main (String []args)
    {
        int []A= { 9, 3, 9, 3, 9, 10, 9};

        solution(A);
    }
}