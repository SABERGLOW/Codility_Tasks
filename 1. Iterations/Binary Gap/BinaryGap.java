import java.util.Scanner; //...The scanner class is used to get USER INPUT...//

public class BinaryGap
{

    public static int solution(int N)
    {
        String binary = Integer.toBinaryString(N);
        int s_gap = 0;
        for(int x=0; x<binary.length(); x++)
        {
            if(binary.charAt(x) == '1')
            {
                for(int y=x+1; y<binary.length(); y++)
                {
                    if(binary.charAt(y) == '1')
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
    
    public static void main (String []args)
    {
        int N = 529;
        solution(N);
    }
}

