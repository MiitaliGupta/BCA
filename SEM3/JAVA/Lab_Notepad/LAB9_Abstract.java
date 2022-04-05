import java.io.*;

abstract class Menu1
{
    public void main_menu()throws IOException
	 {
	 
		System.out.println("\n\t\t****Welcome to MyNeeds SUPER MARKET****");
		System.out.println("Enter 1 to see the items available with their price ");
		System.out.println("Enter 2 to place order ");
		System.out.println("Enter 3 to exit.");
		System.out.println("Enter your choice: ");
		
	}
}



class Menu2 extends Menu1
{
public void store_menu()throws IOException
	     {
            
			final int m= 2;
			final int n= 7;
			String[][] ii={{"Pen" , "Rs 10"},{"Paper", "Rs 5"} ,{ "Pencil", "Rs 7"},{ "water" , "Rs 30" },{ "cream" , "Rs 70"},{ "f.wash", "Rs 55"},{ "perfume" , "Rs 80"}};
		           System.out.println("\n\n");
		
		        System.out.println("\n\t\t\t***ITEM NAME AND THEIR PRICES***\n");
				System.out.println("------------------------------\n");
				for(int k=0;k<n;k++)
				{
					for(int l=0;l<m;l++)
					{
					System.out.print(ii[k][l]+"\t\t");
					}
					System.out.println();
				}
				
				System.out.println("------------------------------\n");
		}	
		
}

 class order extends Menu2		
{
      public void your_order()throws IOException
	  {   
	  
		  
		  int n,i=1,j=0;
		  int [] itemQuan=new int[50];
		  String[] itemname=new String[50];
		  
       
		  
		  InputStreamReader r=new InputStreamReader(System.in); 
	      BufferedReader br=new BufferedReader(r);
		  
		  System.out.println("How many items do you want to purchase?");
		   n= Integer.parseInt(br.readLine());
		  
		  System.out.println("------------------------------------------------------------------\n");
				System.out.println("\n **YOUR ORDER**\n\n");
				while(i<=n)
				{
					System.out.println("\nEnter name of item "+i+": ");
					itemname[j]=br.readLine();
					System.out.println("Enter quantity of item: "+i+": ");
					itemQuan[j]=Integer.parseInt(br.readLine());
					
					i++;
					j++;
					
				}
        System.out.println("\n\n\n\t**Your Order Details~~~**\n\n");
				System.out.println("ITEM NAME"+"\t\t\tQUANTITY\n");
				System.out.println("------------------------------\n");
				
				for(int m=0;m<n;m++)
				{
			
					System.out.println(itemname[m]+"\t\t\t"+itemQuan[m]+"\n");
				}
				System.out.println("------------------------------\n");
				System.out.println("\n***Have a Wonderful Day***");
			}	

}
				
				
				
final class LAB9_Abstract
{
    static public void main(String args[])throws IOException	
      {
	  
	  {  
      int ch;
	  order o= new order();
	  
	  do
		{
		o.main_menu();
		InputStreamReader r=new InputStreamReader(System.in); 
		BufferedReader br=new BufferedReader(r);
		ch=Integer.parseInt(br.readLine());
		
		switch(ch)
		   {
			case 1: 
			o.store_menu();
			break;
			
			case 2:
			o.your_order();
			break;
			
			case 3:
			thankyou();
			break;
			
			
			default:
			System.out.println("\n Invalid Choice!!");
			
			
		   }
		
		}while(ch!=3);
		
	}
	
}
	final static void thankyou()throws IOException
	{
       System.out.println("\n***THANK YOU. VISIT AGAIN!***");
        System.out.println("\n--------------------------------------------------------------------------------------------------------------------------------------------\n");
    }
}	
	    
	
				