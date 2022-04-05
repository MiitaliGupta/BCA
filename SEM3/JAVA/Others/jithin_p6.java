import java.io.*;
class Warehouses
{
    double brands,Stock_Left;
  
    public Warehouses(double b,double s)
    {
        this.brands = b;
        this.Stock_Left = s;
    }

}
class Prices extends Warehouses
{
    double W_Price, S_Price;

 public Prices(double brands,double Stock_Left,double W_Price, double S_Price)
    {
    super(brands,Stock_Left);
	this.W_Price= W_Price;
	this.S_Price= S_Price;
    }
}

class Bill extends Prices
{
    String name,location;
    Bill(double brands,double Stock_Left,double W_Price, double S_Price,String n, String l)
	{
	super(brands,Stock_Left,W_Price,S_Price);
	name=n;
	location=l;   
	}
	void display()
	{
	System.out.println("Owner name: " +name);
	System.out.println("Warehouse Location: " +location);
	System.out.println("Brands Available: " +brands);
	System.out.println("Stock Left: " +Stock_Left);
	System.out.println("Wholesale price EST: " +W_Price);
	System.out.println("Retail price EST: " +S_Price);
	double Profit = S_Price - W_Price;
	System.out.println("EST Profit: " +Profit);
	}
}

public class jithin_p6
{
	public static void main(String args[])throws IOException
	{
	String name,location;
	Double brands ,Stock_Left, W_Price ,S_Price;
	int option,n,j=0,choice;
	do
	{ 
	InputStreamReader r=new InputStreamReader(System.in); 
	BufferedReader br=new BufferedReader(r);
	System.out.println("\n\t\t\t\t======Program to demonstrate multilevel inheritance======");
	System.out.println("1.Warehouse stock Entry\n2. Exit\n");
	System.out.println("Please enter your choice:");
	option=Integer.parseInt(br.readLine());
	switch(option)
	{
		case 1: 
		{
		System.out.println("\n============================\n");	
		System.out.println("\nEnter the Owner name:");
		name = br.readLine();
		System.out.println("\nEnter the Warehouse location:");
		location = br.readLine();
		System.out.println("\nEnter the number of brands available:");
		brands= Double.parseDouble(br.readLine());
		System.out.println("\nEnter the Stock Left:");
		Stock_Left= Double.parseDouble(br.readLine());
		System.out.println("\nEnter the Wholesale price:");
		W_Price = Double.parseDouble(br.readLine());
		System.out.println("\nEnter the Retail price:");
		S_Price = Double.parseDouble(br.readLine());
		//Prices P = new Prices(brands,Stock_Left,W_Price,S_Price);
		Bill Invoice = new Bill(brands,Stock_Left,W_Price,S_Price,name,location);
		Invoice.display();		
		}	
		break;
         	
		case 2: System.out.println("Thank You!Have a nice day");
			break;
		default: System.out.println("Wrong choice");
			break;
}
System.out.println("Do you wish to execute again?Enter 1 if yes");
	choice = Integer.parseInt(br.readLine());
	}
	while(choice==1);
	}
}