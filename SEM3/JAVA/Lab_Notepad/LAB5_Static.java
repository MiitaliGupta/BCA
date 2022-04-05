import java.util.*;

public class LAB5_Static
{

    public static int plat;

    static void sL()
    {
        System.out.println("--------------------------------------------------------------------------------------------------------");
    }//sl

    static 
    {
        Scanner sc = new Scanner(System.in);
        sL();
        System.out.println("\n\t\t\t\t\t\tANIMAL SHELTER\n");
        sL();
        System.out.println("\n1. ANIMAL HOUSE");
        System.out.println("2. ANGEL ANINALS");
        System.out.print("\nCHOOSE SHELTER : ");
        plat = sc.nextInt();

        //sc.close();
    }

    public static String line = "\nCHOOSE WHICH ANIMAL YOU WANT TO ADOPT \n\n1. DOGS\n2. CATS\n3. RABBIT\n4. FISH";
    //sL();

    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        while (true) 
        {
            if (plat < 1 || plat > 2) 
            {
                System.out.print("\nENTER ANIMAL SHELTHER AGAIN : ");
                plat = sc.nextInt();
            } 
            else 
                break;
            
        }
        System.out.println(line);
        System.out.print("YOUR CHOICE: ");
        int menu = sc.nextInt();
        while (true) 
        {
            if (menu < 1 || menu > 4) 
            {
                System.out.print("\nENTER WHICH ANIMAL YOU WANT TO ADOPT AGAIN : ");
                menu = sc.nextInt();
            } 
            else 
                break;
            
        }
        display(menu);
        sL();
		System.out.println("\n\t\t\t\t\t\tEND OF LAB 4\n");
        sL();
        //sc.close();
    }

    public static void display(int n) 
    {
        if (n == 1)
         {
            sL();
            System.out.println("\t\t\t\t\t\t\tDOGS");
            sL();
            if (plat == 1) 
                System.out.println("\n1. GERMAN SHEPARD\n2. LABRADOR\n3. HUSKY\n\n");
            else if (plat == 2) 
                System.out.println("\n1. GOLDEN RETRIEVER\n2. BULLDOG\n3. POODLE\n\n");
        }
        else if (n == 2)
        {
            sL();
            System.out.println("\t\t\t\t\t\t\tCATS");
            sL();
            if (plat == 1) 
                System.out.println("\n1. PERSIAN\n2. SIAMESE\n3. BENGAL\n\n");
            else if (plat == 2) 
                System.out.println("\n1. BRITISH SHORTHAIR\n2. MAINE COON\n3. MUNCHKIN\n\n");
        }
        else if (n == 3) 
        {
            sL();
            System.out.println("\t\t\t\t\t\t\tRABBITS");
            sL();
            if (plat == 1) 
                System.out.println("\n1. REX\n2. TEDDY\n3. POLISH\n\n");
            else if (plat == 2) 
                System.out.println("\n1. FRENCH LOP\n2. ANGORA\n3. DRAWF HOTOT\n\n");    
        }
        else if (n == 4) 
        {
            sL();
            System.out.println("\t\t\t\t\t\t\tFISH");
            sL();
            if (plat == 1) 
                System.out.println("\n1. Koi\n2. Comet\n3. Veiltail\n\n");
            else if (plat == 2) 
                System.out.println("\n1. BLACK MOOR\n2. GOLDFISH\n3. PEARLSCALE\n\n");
        }
    }
}