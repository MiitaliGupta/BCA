import java.io.*;
class TriangleBuff
{
    public static void main(String args[])throws IOException
    {
        int a,b,c;
        float s=0.0f,area=0.0f,perimeter=0.0f;
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter sides of the triangle:");
        a=Integer.parseInt(in.readLine());
        b=Integer.parseInt(in.readLine());
        c=Integer.parseInt(in.readLine());
        s=(a+b+c)/2;
        area = (float) Math.sqrt(s*(s-a)*(s-b)*(s-c));
        perimeter=a+b+c;
        System.out.println("Area of the given triangle: "+area);
        System.out.println("Perimeter of the given triangle: "+perimeter);
    }
}