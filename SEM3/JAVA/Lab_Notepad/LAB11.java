package animalalcove;
import java.io.*;

interface Entry
{
    
    public String Animal[] = new String[10];
    public int Price[] = new int[10];
    public String tier[]= new String[10];
    public int id[] = new int[10];
    public double time[] = new double[10];

    public void details()  throws IOException  ;
    public void Vaccination();
    public void setgrade();

}

interface Display
{
    public void show();
}

public class LAB11 implements Entry,Display
//class LAB11 implements Entry,Display
{
    public int x;
    public LAB11(int s)
    {
        x=s;
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