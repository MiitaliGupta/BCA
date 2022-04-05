import java.io.*;
class DetailsBuff
{
    public static void main(String args[])throws IOException
    {
        String name, reg, address;
        float s=0.0f,area=0.0f,perimeter=0.0f;
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter your name, register number and the city you live in:");
        name=in.readLine();
        reg=in.readLine();
        address=in.readLine();
        System.out.println("\nDETAILS:\n\n");
        System.out.println("NAME: "+name);
        System.out.println("REGISTER NUMBER: "+reg);
        System.out.println("RESIDING CITY: "+address);
    }
}