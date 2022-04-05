//package animalalcove;

//import animalalcove.*;
import animalalcove.LAB11;
import java.io.*;

public class LAB11_Interface_Package 
{
    public static void main(String[] args)throws IOException 
	{
        InputStreamReader sap = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(sap);
        sL();
        System.out.println("\n\t\t\t\tAnimal Shelter");
        sL();
        System.out.print("\n\nEnter Total No. of Animals: ");
        int s = Integer.parseInt(br.readLine());
        LAB11 obj = new LAB11(s);
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
    static void sL()
    {
        System.out.println("--------------------------------------------------------------------------------------------------------");
    }//sl
}
