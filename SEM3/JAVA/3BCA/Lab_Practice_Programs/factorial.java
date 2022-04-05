import java.util.*;
public class factorial
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int n,f=1;
        System.out.print("\n\nTHIS PROGRAM PRINTS FACTORIAL\n");
        System.out.print("Enter Number : ");
        n=sc.nextInt();
        for(int i=1; i<=n; i++)
        { 
        f=f*i;
        }
        System.out.println("Factorial of the "+n+" is "+f);
    }
}