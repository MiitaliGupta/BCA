import java.util.*;
public class javaver
{
    public static void main(String args[])
    {
        System.out.print("\n\nTHIS PROGRAM PRINTS JAVA VERSION\n");
        String ver = System.getProperty("java.version");
        System.out.print("Java Version : "+ver);
    }
}