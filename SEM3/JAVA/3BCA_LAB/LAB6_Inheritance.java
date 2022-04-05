import java.io.*;

public class LAB6_Inheritance
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
        System.out.println("\n\t\t\t\tAnimal Shelter");
        sL();
        System.out.print("\n\nEnter Total No. of Animals: ");
        int s = Integer.parseInt(br.readLine());
        Three obj = new Three(s);
        int option=0,count =0;
        do 
		{
            try{
            System.out.println("\t\t\t\t\t\t\tMENU");
            sL();
            System.out.println("\n1. Enter Animal data \n2. Get Vaccination slots\n3. Set Animal Status\n4. Display details\n5. Exit");
            System.out.println("========================================================================================================");
            System.out.println("Do not repeat the options in input just after each option has successfully run");
            System.out.println("========================================================================================================");
            System.out.print("\nEnter your choice : ");
            option =Integer.parseInt(br.readLine());
            if(option==1)
			{
                obj.details();
                count=1;

            }
            else if(option==3)
			{
                if(count!=1)
                {
                    sL();
                    System.out.println("1st enter Animal data");
                    sL();
                }
                else
				{
                    obj.setgrade();
                    count=5;
                }

            }
            else if(option==2)
			{
                if(count!=5)
                {
                    sL();
                    System.out.println("1st set Animal Status");
                    sL();
                }
                else
				{
                    obj.Vaccination();
                    count=10;
                }

            }
            else if(option==4)
			{
                if(count!=10)
                {
                    sL();
                    System.out.println("1st get Vaccination slots for Animals");
                    sL();
                }
                else
				{
                    obj.show();
                }

            }
            else if(option==5)
            {
                sL();
                System.out.println("\n\t\t\t\t\t\tEND OF LAB 4\n");
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
        }while(option!=5);
    }
}

class One
{
    public int x;
    public String Animal[] = new String[10];
    public int Price[] = new int[10];
    public String tier[]= new String[10];
    public int id[] = new int[10];
    public double time[] = new double[10];
    public One()
    {
        System.out.println("\nThis is constructor");
    }
    public One(int x)
    {
        //System.out.println(x);
        System.out.println("\n\nThis is Parameterised constructor of class One\n");
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
            System.out.print("\nEnter Animal ID : ");
            id[i]=Integer.parseInt(br.readLine());
            System.out.print("\nEnter Name : ");
            Animal[i]=br.readLine();
            System.out.print("\nEnter the Price : ");
            Price[i]=Integer.parseInt(br.readLine());
        }
        sL();
        System.out.println("\n*Input successful");
        System.out.println("\n\nNext go ahead with Animal Status**");
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
    public void setgrade()
	{
        for (int j = 0; j < x; j++)
        {
              if (Price[j]>15000 )
			  {
                  tier[j]="Platinum";
              }
            else if (Price[j]>10000 && Price[j]<=15000)
			{
                tier[j]="Elite";
            }
            else if (Price[j]>5000 && Price[j]<=10000)
			{
                tier[j]="Pro";
            }
            else if (Price[j]>3000 && Price[j]<=5000)
			{
                tier[j]="Essential";
            }
              else if (Price[j]>2000 && Price[j]<=3000)
			  {
                  tier[j]="Plus";
              }
              else if (Price[j]>1000 && Price[j]<=2000)
			  {
                  tier[j]="Mini";
              }
              else {
                  tier[j]="Basic";
              }
        }
        
        sL();
        System.out.println("\nAnimal Status setting successfull\n\nNext go ahead with Vaccination slots");
        
        sL();
    }
}
class Two extends One
{
    public int y;
    Two(int y)
    {
        super(y);
        System.out.println("This is Two class parameterised constructor");
        System.out.println("Your input "+y+" has been sent successfully \n");
        
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
        System.out.println("This is Three class parameterised constructor");
        System.out.println("Your input "+z+" has been sent successfully\n ");
        sL();
    }
    public void show()
    {
        for (int i = 0; i < x; i++)
		{
            System.out.println("\n--------------------------------------------------------");
            System.out.println("\nPET "+ (i+1));
            System.out.println("\nNAME\t\t:\t"+Animal[i]);
            System.out.println("PRICE\t\t:\t"+Price[i]);
            System.out.println("TIER\t\t:\t"+tier[i]);
            System.out.println("PRICE TIMING\t:\t"+time[i]+" in the morning");
        }
        sL();
    }
    
}
