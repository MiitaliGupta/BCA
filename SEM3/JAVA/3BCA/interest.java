import java.util.*;
public class interest
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        float p,r,t,si,ci;
        System.out.print("\n\nTHIS PROGRAM PRINTS SIMPLE AND COMPOUND INTEREST\n\n");
        System.out.print("Enter Principle Amount : ");
        p=sc.nextFloat();
        System.out.print("Enter Rate per Annum : ");
        r=sc.nextFloat();
        System.out.print("Enter Time in Years : ");
        t=sc.nextFloat();
        si=(float)((p*r*t)/100);
        ci=(float)((p*Math.pow((1+(r/100)),t))-p);
        System.out.println("Simple Interest : Rs "+si);
        System.out.println("Compound Interest : Rs "+ci);
    }
}