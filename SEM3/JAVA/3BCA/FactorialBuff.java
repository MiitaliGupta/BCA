import java.io.*;
class FactorialBuff
{
    public static void main(String args[])throws IOException
    {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
            int a,f=1;
            System.out.println("\nEnter a number");
            a=Integer.parseInt(in.readLine());
            System.out.println();
            for(int i=1; i<=a; i++)
            {
	f=f*i;
            }
System.out.println("Factorial of the number "+a+" is "+f);
}
}