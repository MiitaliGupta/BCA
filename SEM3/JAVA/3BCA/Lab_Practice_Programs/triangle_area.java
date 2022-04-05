import java.util.*;
public class triangle_area
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        float h,b,a;
        System.out.print("\n\nTHIS PROGRAM PRINTS AREA OF TRIANGLE\n");
        System.out.print("Enter Height of Triangle : ");
        h=sc.nextFloat();
        System.out.print("Enter Base of Triangle : ");
        b=sc.nextFloat();
        a=0.5f*h*b;
        System.out.print("Area of Triangle : "+a);
    }
}