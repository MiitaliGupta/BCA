import java.util.*;

class prg1_loops
{
    public static void main(String[] args) 
    {
        Scanner in=new Scanner(System.in);
        int choice, count=0;
        String s;
        char c = '\0' ;
        int [] stock= new int[5];
        String [] address=new String[50];
        String [] name=new String[50];
        String [] bought=new String[50];
        String [] pname=new String[5];

        pname[0]="Desk";
        stock[0]=36;

        pname[1]="Shirts";
        stock[1]=41;

        pname[2]="Mobiles";
        stock[2]=23;

        pname[3]="Oven";
        stock[3]=9;

        pname[4]="Chips";
        stock[4]=48;

        do
        {
            System.out.println("\t\t\t\tMENU");
            System.out.println();
            System.out.println("1. Display the Stock Item.");
            System.out.println("2. Avalibility of a Product.");
            System.out.println("3. Order the Product.");
            System.out.println("0. Exit.");
            System.out.println();
            System.out.println("Enter Your Choice : ");
            choice=in.nextInt();

            switch(choice)
            {
                case 1:
                
                for(int i=0;i<5;i++)
                {
                    System.out.println("Name : "+ pname[i]);
                    System.out.println("Stock Remaining: "+ stock[i]);
                    System.out.println();
                }
                    
                break;

                case 2:

                System.out.println("Enter the Name of the Product: ");
                s=in.next();

                for(int i=0;i<5;i++)
                {
                    if(s.equalsIgnoreCase(pname[i]))
                    {
                        System.out.println("Stock Remaining: "+ stock[i]);
                    }
                    else
                    {
                        System.out.println(pname[i] + " is out of stock.");
                    }                    
                }
                    break;

                case 3:

                System.out.println("Enter the name of the Product: ");
                s=in.next();

                for(int i=0;i<5;i++)
                {
                    if(s.equalsIgnoreCase(pname[i]))
                    {
                        bought[count]=pname[i];
                        System.out.println("Enter your Name: ");
                        name[count]=in.next();

                        System.out.println("Enter your Address: ");
                        address[count]=in.next();

                        count++;
                        stock[i]--;
                    }
                    else
                    {
                        System.out.println(pname[i] + "is out of stock.");
                    }                    
                }
                    break;

                case 0:
                    System.out.println();
                    System.out.println();
                    System.out.println("Thank You !!");
                    break;
                    
                default:
                    System.out.println("Enter a choice 0-3");
                    break;
            }
            if(choice!=0){
                System.out.println("Do you want to redo the program(y/n) : ");
                c = in.next().charAt(0);
   	c=Character.toLowerCase(c); 
            }
        }
        while((choice != 0) && (c=='y'));
        System.out.println("Exiting the Program.");
        in.close();
    }
}