import java.util.*;
public class Prime
{
    public static void main(String sharika[])
    {
            Scanner sc = new Scanner(System.in);
            int n,c=0;
            System.out.print("\n\nTHIS PROGRAM CHECKS IF A NUMBER IS PRIME OR NOT\n");
            System.out.print("Enter Number : ");
            n=sc.nextInt();
        for(int i=1; i<=n; i++)
        { 
            if((n%i)==0)
            c++;
        }
        if(c==2)
            System.out.println("The Number is Prime");
            else
            System.out.println("The Number is not Prime");
    }
}