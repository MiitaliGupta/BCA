import java.io.*;

public class vansh_p7
{
    static void sL()
    {
        System.out.println("--------------------------------------------------------------------------------------------------------");
    }//sl

    public static void main(String[] args) throws IOException 
	{
        InputStreamReader sap = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(sap);
        sL();
        System.out.println("\n\t\t\t\tVaccination Portal");
        sL();
        System.out.print("\n\nEnter Total No. of Players: ");
        int s = Integer.parseInt(br.readLine());
        Three obj = new Three(s);
        int option=0,count =0;
        do 
		{
            try{
            System.out.println("\t\t\t\t\t\t\tMENU");
            sL();
            System.out.println("\n1. Enter Player data \n2. Get Vaccination slots\n3. Display details\n4. Exit");
            System.out.println("========================================================================================================");
            System.out.println("Do not repeat the options in input just after each option has successfully run");
            System.out.println("========================================================================================================");
            System.out.print("\nEnter your choice : ");
            option =Integer.parseInt(br.readLine());
            if(option==1)
			{
                obj.details();
                count=5;

            }
            else if(option==2)
			{
                if(count!=5)
                {
                    sL();
                    System.out.println("1st enter Player data");
                    sL();
                }
                else
				{
                    obj.Vaccination();
                    count=10;
                }

            }
            else if(option==3)
			{
                if(count!=10)
                {
                    sL();
                    System.out.println("1st get Vaccination slots for Players");
                    sL();
                }
                else
				{
                    obj.show();
                }

            }
            else if(option==4)
            {
                sL();
                System.out.println("\n\t\t\t\t\t\tEND OF LAB 7\n");
                sL();
            }
            else
			{
                sL();
                System.out.println("Wrong choice");
                sL();
            }

        }catch (Exception e)
        {
            sL();
            System.out.println("\nINVALID INPUT!!");
            System.out.println("YOU ARE BEING DIRECTED TO MAIN MENU\n");
            sL();
        }//catch
        }while(option!=4);
    }
}

class One
{
    public int x;
    public String Player[] = new String[10];
    public int Price[] = new int[10];
    //public String tier[]= new String[10];
    public int id[] = new int[10];
    public double time[] = new double[10];
    public One()
    {
        //System.out.println("\nThis is constructor");
    }
    public One(int x)
    {
        //System.out.println(x);
        //System.out.println("\n\nThis is Parameterised constructor of class One\n");
        this.x=x;
    }
    void sL()
    {
        System.out.println("--------------------------------------------------------------------------------------------------------");
    }//sl

    public void details()  throws IOException  
	{
        InputStreamReader sap = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(sap);
        sL();
        for (int i = 0; i <x ; i++)
        {
            System.out.println("\n\nEnter details of Animal No. "+(i+1));
            System.out.print("\nEnter Jersey No. : ");
            id[i]=Integer.parseInt(br.readLine());
            System.out.print("\nEnter Name : ");
            Player[i]=br.readLine();
            
        }
        sL();
        System.out.println("\n*Input successful");
        System.out.println("\n\nNext go ahead with Vaccination slot Booking**");
        sL();
    }
    public void Vaccination()
	{
        double count=10.0;
        for (int i = 0; i < x; i++) 
		{
            time[i]=count;
            count=count+0.15;
        }
        
        sL();
        System.out.println("\n**Vaccination slots set successfully\n*Next go ahead with display**");
        sL();
    }

}
class Two extends One
{
    public int y;
    Two(int y)
    {
        super(y);
        // System.out.println("This is Two class parameterised constructor");
        // System.out.println("Your input "+y+" has been sent successfully \n");
        
    }

    
    
}
class Three extends Two
{
    public int z;
    void sL()
    {
        System.out.println("--------------------------------------------------------------------------------------------------------");
    }//sl

    Three(int z)
    {
        super(z);
        // System.out.println("This is Three class parameterised constructor");
        // System.out.println("Your input "+z+" has been sent successfully\n ");
        // sL();
    }
    public void show()
    {
        for (int i = 0; i < x; i++)
		{
            System.out.println("\n--------------------------------------------------------");
            System.out.println("\nPLAYER "+ (i+1));
            System.out.println("\nNAME\t\t:\t"+Player[i]);
            System.out.println("JERSEY NO.\t:\t"+id[i]);
            System.out.println("PRICE TIMING\t:\t"+time[i]+" in the morning");
        }
        sL();
    }
    
}
