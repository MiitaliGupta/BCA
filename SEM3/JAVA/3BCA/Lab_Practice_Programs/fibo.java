import java.util.*;
public class fibo
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int a,b,c,n;
        System.out.print("\n\nTHIS PROGRAM PRINTS TERMS OF FIBONACCI SERIES\n");
        System.out.print("Enter Number of Terms : ");
        n=sc.nextInt();
        a=0;b=1;
        System.out.print("Fibonacci Series : "+a);
        System.out.print(" "+b);
        for(int i=3;i<=n;i++)
        {
            c=a+b;
            a=b;
            b=c;
        System.out.print(" "+c);
    }
  }
}