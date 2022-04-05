import java.util.*;
import java.util.regex.Pattern;

public class Kelp_p4
{
    public static boolean isValid(String email) 
    { 
           String emailRegex = "^[a-zA-Z0-9_+&*-]+(?:\\.[a-zA-Z0-9_+&*-]+)*@" +  //part before @
        "(?:[a-zA-Z0-9-]+\\.)+[a-zA-Z]{2,7}$"; 
 
            Pattern pat = Pattern.compile(emailRegex); 
           if (email == null) 
                   return false; 
        return pat.matcher(email).matches(); 
    }
    public static void main(String[] args)
    {
        //method overloading//
        logic obj =new logic();
        Scanner in=new Scanner(System.in);
        int choice, count=0,x=0, ch1,ch2;
        double total=0.0;
        char c='\0';
        int [] z=new int[50];
        int [][] stock= new int[5][5];
        double [][] price= new double[5][5];
        int [][] amount= new int[50][50];
        double[][] bill= new double[50][50];
        int [] phone= new int[50];
        String [] address=new String[50];
        String [] email=new String[50];
        String [][] bought=new String[50][50];
        String [] user=new String[50];

        data s=new data();
        
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++){
                stock[i][j]=(int)(Math.random()*1500);
                price[i][j]=(Math.random()*10000);
            }
        }

        do
        {
			System.out.println("\n\t******** E-Commerce *********");
            System.out.println();
            System.out.println("\t\tMAIN MENU");
            System.out.println();
            System.out.println("1. Display the Stock Items.");
            System.out.println("2. Avalibility of a Product.");
            System.out.println("3. Order the Product.");
            System.out.println("4. Orders.");
            System.out.println("0. Exit.");
            System.out.println();
            System.out.print("Enter Your Choice : ");
            choice=in.nextInt();

            switch(choice)
            {
                case 1:
                
                for(int i=0;i<5;i++)
                {
		            System.out.println();
                    System.out.println("\tName : "+ s.name[i]);
                    for(int j=0;j<5;j++){
                        
                        System.out.println("\nProduct Name : "+ s.pname[i][j]);
                        System.out.println("Stock Remaining: "+ stock[i][j]);
                        System.out.format("Price: Rs. %.2f", price[i][j]);
                        System.out.println();

                    }

		            System.out.println();
                }
                    
                break;

                case 2:

		        System.out.println();
                System.out.println("\t\t\tMENU");
                System.out.println();

                for(int i=0;i<5;i++)
                {
                    System.out.println(i+1+". "+s.name[i]);
                }

                System.out.println("0. Exit.");
                System.out.println();
                System.out.print("Enter Your Choice : ");
                ch1=in.nextInt();

                switch(ch1)
                {
                    case 1:
                    case 2:
                    case 3:
                    case 4:
                    case 5:

                    System.out.println("\n\n\t\t"+s.name[ch1-1]);
                    System.out.println();

                    for(int i=0;i<5;i++){
                        System.out.println();

                        if(stock[ch1-1][i]==0){
                            System.out.println(s.pname[ch1-1][i] + " is out of stock.");
                        }

                        else{
                            System.out.println("Name :"+s.pname[ch1-1][i]);
                            System.out.println("Stock Remaining: "+ stock[ch1-1][i]);
                            System.out.format("Price: Rs. %.2f", price[ch1-1][i]);
                            System.out.println();
                        }
                    }

                    break;

                    case 0:
                    System.out.println();
                    System.out.println();
                    System.out.println("Thank You !!");
                    break;
                    
                    default:
                    System.out.println("\n\tEnter a choice 0-5");
                    break;
                }
                    
                break;

                case 3:

                System.out.println();

                System.out.print("Enter your Name: ");
                user[x]=in.next();

                System.out.println();
                System.out.print("Enter your Address: ");
                address[x]=in.next();

                System.out.print("\nEnter your Phone No.: ");
                phone[x]=in.nextInt();

                int length = String.valueOf(phone[x]).length();

                do
                {
                    if (length==10)
                    {
                        //System.out.print("It is valid"); 
                        break;
                    }
                    else    
                    {    
                        System.out.println(phone[x]+ " is an invalid phone no. Please Try Again!");
                        System.out.print("\nEnter your Phone no. again: ");
                        phone[x] = in.nextInt();
                        length = String.valueOf(phone[x]).length();
                    }
                }while(length!=10);

                System.out.println();
                System.out.print("Enter your Email ID: ");
                email[x]=in.next();

                do
                {
                    if (isValid(email[x])) 
                    {
                        //System.out.print("It is valid"); 
                        break;
                    }
                    else    
                    {    
                        System.out.println(email[x]+ " is an invalid email. Please Try Again!");
                        System.out.print("\nEnter your Email ID again: ");
                        email[x] = in.next();
                    }
                }while(isValid(email[x])==false);

                count=0;

                do
                {
                    System.out.println();
                    System.out.println("\n\t\t\tMENU");
                    System.out.println();

                    for(int i=0;i<5;i++)
                    {
                        System.out.println(i+1+". "+s.name[i]);
                    }
                    
                    System.out.println("0. Exit.");
                    System.out.println();
                    System.out.print("Enter Your Choice : ");
                    ch1=in.nextInt();

                    switch(ch1)
                    {
                        case 1:
                        case 2:
                        case 3:
                        case 4:
                        case 5:

                        System.out.println("\n\t\t"+s.name[ch1-1]);

                        for(int i=0;i<5;i++)
                        {
                            System.out.println(i+1+". "+s.pname[ch1-1][i]);
                        }
                        System.out.println("0. Exit.");
                        System.out.print("\nEnter you choice : ");
                        ch2=in.nextInt();

                        switch(ch2)
                        {
                            case 1:
							case 2:
							case 3:
							case 4:
							case 5:

                            if(stock[ch1-1][ch2-1]==0){
                                System.out.println(s.pname[ch1-1][ch2-1] + " is out of stock.");
                            }

                            else
                            {
                                bought[x][count]=s.pname[ch1-1][ch2-1];
                                System.out.println();
                                System.out.print("\nEnter the Amount you want: ");
                                amount[x][count]=in.nextInt();

                                bill[x][count]=obj.cal(price[ch1-1][ch2-1],amount[x][count]);
                                //bill[x][count]=price[ch1-1][ch2-1]*amount[x][count];

                                System.out.format("\nThe Bill Amount: Rs. %.2f", bill[x][count]);
                                System.out.println();

                                if(amount[x][count]>10)
                                {
                                    System.out.println("\n\tWHOLESALE DISCOUNT APPLIED!!!");
                                    System.out.println("We will apply a discount of 10% on the item purchased.");

                                    double discount=obj.cal(bill[x][count]);
                                    //double discount= (10*(bill[x][count]))/100;

                                    System.out.format("\nDiscount: Rs. %.2f", discount);
                                    System.out.println();

                                    bill[x][count]=obj.cal(bill[x][count], discount);
                                    //bill[x][count]=bill[x][count]-discount;

                                    System.out.format("\nThe Bill Amount after discount: Rs. %.2f", bill[x][count]);
                                    System.out.println();
                                }

                                stock[ch1-1][ch2-1]=obj.cal(stock[ch1-1][ch2-1], amount[x][count]);
                                //stock[ch1-1][ch2-1]=stock[ch1-1][ch2-1]-amount[x][count];
                                count++;
                            }

                            break;

                            case 0:
                            System.out.println();
                            System.out.println();
                            System.out.println("Thank You !!");
                            break;
							
							default:
							System.out.println("\n\tEnter a choice 0-5");
							break;
                        }
                    
                        break;

                        case 0:
                        System.out.println();
                        System.out.println();
                        System.out.println("Thank You !!");
                        break;
                    
                        default:
                        System.out.println("\n\tEnter a choice 0-5");
                        break;
                    }
                    if(choice!=0){
                        System.out.println("\nDo you want to buy another item(y/n) : ");
                        c=in.next().charAt(0);
                    }
                }
                while(choice != 0 && (c=='y' || c=='Y'));
                z[x]=count;
                x++;

                break;

                case 4:

                System.out.println();

                if(count==0){
                    System.out.println("There are NO orders.");
                }
                else{
                    System.out.println("\n\tThe Orders");

                    for(int i=0;i<x;i++){
                        System.out.println("\nUser No."+ (i+1));
                        data s1=new data(user[i], address[i], phone[i], email[i]);
                        System.out.println("\nName: "+s1.user);
                        System.out.println("Address: "+s1.address);
                        System.out.println("Phone No.: "+s1.phone);
                        System.out.println("Address: "+s1.email);
                        System.out.println("\n-----------------------------------");

                        for(int j=0;j<z[i];j++){
                            System.out.println("\nOrder No."+ (j+1));
                            System.out.println();
                            data s2=new data(bought[i][j], amount[i][j], bill[i][j]);
                            System.out.println("Product: "+s2.item);
                            System.out.println("Amount: "+s2.num);
                            System.out.format("The Bill Amount: Rs. %.2f", s2.bill);
                            System.out.println();
                            total=total+bill[i][j];
                        }
                        System.out.format("\n\nThe Total Bill Amount: Rs. %.2f", total);
                        System.out.println();
                        System.out.println("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
                    }
                }

                break;

                case 0:
                    System.out.println();
                    System.out.println();
                    System.out.println("Thank You !!");
                    break;
                    
                default:
                    System.out.println("Enter a choice 0-4");
                    break;
            }
        }
        while(choice != 0);
        System.out.println("\nExiting the Program.");
        in.close();
    }
}

//constructor overloading
class data
{
    int phone,num;
    double bill;
    String user, address, email,item;
    String [] name=new String[50];
    String [][] pname=new String[50][50];

    data()
    {
        name[0]="Desk";
        name[1]="Shirts";
        name[2]="Mobiles";
        name[3]="Oven";
        name[4]="Chips";

        pname[0][0]="White Desk";
        pname[0][1]="Brown Desk";
        pname[0][2]="Blue Desk";
        pname[0][3]="Black Desk";
        pname[0][4]="Glass Desk";

        pname[1][0]="White Shirt";
        pname[1][1]="Black Shirt";
        pname[1][2]="Blue Shirt";
        pname[1][3]="Brown Shirt";
        pname[1][4]="Stripes Shirt";

        pname[2][0]="iPhone";
        pname[2][1]="Oneplus";
        pname[2][2]="Samsung";
        pname[2][3]="Google";
        pname[2][4]="Mi";

        pname[3][0]="Samsung";
        pname[3][1]="LG";
        pname[3][2]="Whirpool";
        pname[3][3]="Morphy Richard";
        pname[3][4]="Philips";

        pname[4][0]="Blue Lays";
        pname[4][1]="Orange Lays";
        pname[4][2]="Green Lays";
        pname[4][3]="Yellow Lays";
        pname[4][4]="Red Lays";
    }

    data(String a, String b, int c, String d)
    {
        user=a;
        address=b;
        phone=c;
        email=d;
    }
    
    data(String a, int b, double c)
    {
        item=a;
        num=b;
        bill=c;
    }
    
}

//method overloading
class logic 
{
    double cal(double a, int b)
    {
        return a*b;
    }
    double cal (double a)
    {
        return (10*(a))/100;
    }
    double cal (double a, double b)
    {
        return a-b;
    }
    int cal (int a, int b)
    {
        return a-b;
    }
}