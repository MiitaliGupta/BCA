import java.io.*;
class AddNumbers
{
    public static void main(String args[])throws IOException
    {
        int a,b,c,sum=0;
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter 3 numbers:");
        a=Integer.parseInt(in.readLine());
        b=Integer.parseInt(in.readLine());
        c=Integer.parseInt(in.readLine());
        sum = a+b+c;
        System.out.println("Sum of the given 3 numbers: "+sum);
        
    }
}