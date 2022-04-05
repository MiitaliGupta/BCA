import java.io.*;
public class FiboBuff
{
    public static void main(String args[]) throws IOException
    {
         BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int a,b,c,n;
        System.out.print("\n\nTHIS PROGRAM PRINTS TERMS OF FIBONACCI SERIES\n");
        System.out.print("Enter Number of Terms : ");
        n= Integer.parseInt(in.readLine());
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
System.out.println();
  }
}