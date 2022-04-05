import java.util.*;

class Kelp_p2
{
    public static void main(String[] args) 
    {
        Scanner in=new Scanner(System.in);
        int choice, count=0,x=0, ch1,ch2;
        //String s;
        char c='\0';
        int [][] stock= new int[5][5];
        int [][] price= new int[5][5];
        int [] amount= new int[50];
        int [] bill= new int[50];
        String [] address=new String[50];
        String [] name=new String[50];
        String [] bought=new String[50];
        String [][] pname=new String[50][50];
        String [] user=new String[50];

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

        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++){
                stock[i][j]=(int)(Math.random()*1500);
                price[i][j]=(int)(Math.random()*10000);
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
                    System.out.println("\tName : "+ name[i]);
                    for(int j=0;j<5;j++){
                        
                        System.out.println("\nProduct Name : "+ pname[i][j]);
                        System.out.println("Stock Remaining: "+ stock[i][j]);
                        System.out.println("Price: Rs."+ price[i][j]);
                    }

		            System.out.println();
                }
                    
                break;

                case 2:

		        System.out.println();
                System.out.println("\t\t\tMENU");
                System.out.println();
                System.out.println("1. Desk.");
                System.out.println("2. Shirt.");
                System.out.println("3. Mobiles.");
                System.out.println("4. Oven.");
                System.out.println("5. Chips.");
                System.out.println("0. Exit.");
                System.out.println();
                System.out.print("Enter Your Choice : ");
                ch1=in.nextInt();

                switch(ch1)
                {
                    case 1:

                    for(int i=0;i<5;i++){
                        System.out.println();

                        if(stock[0][i]==0){
                            System.out.println(pname[0][i] + " is out of stock.");
                        }

                        else{
                            System.out.println("Name :"+pname[0][i]);
                            System.out.println("Stock Remaining: "+ stock[0][i]);
                            System.out.println("Price: Rs."+ price[0][i]);
                        }
                    }

                    break;

                    case 2:

                    for(int i=0;i<5;i++){
                        System.out.println();

                        if(stock[1][i]==0){
                            System.out.println(pname[1][i] + " is out of stock.");
                        }

                        else{
                            System.out.println("Name :"+pname[1][i]);
                            System.out.println("Stock Remaining: "+ stock[1][i]);
                            System.out.println("Price: Rs."+ price[1][i]);
                        }
                    }

                    break;

                    case 3:

                    for(int i=0;i<5;i++){
                        System.out.println();

                        if(stock[2][i]==0){
                            System.out.println(pname[2][i] + " is out of stock.");
                        }

                        else{
                            System.out.println("Name :"+pname[2][i]);
                            System.out.println("Stock Remaining: "+ stock[2][i]);
                            System.out.println("Price: Rs."+ price[2][i]);
                        }
                    }

                    break;

                    case 4:

                    for(int i=0;i<5;i++){
                        System.out.println();

                        if(stock[3][i]==0){
                            System.out.println(pname[3][i] + " is out of stock.");
                        }

                        else{
                            System.out.println("Name :"+pname[3][i]);
                            System.out.println("Stock Remaining: "+ stock[3][i]);
                            System.out.println("Price: Rs."+ price[3][i]);
                        }
                    }

                    break;

                    case 5:

                    for(int i=0;i<5;i++){
                        System.out.println();

                        if(stock[4][i]==0){
                            System.out.println(pname[4][i] + " is out of stock.");
                        }

                        else{
                            System.out.println("Name :"+pname[4][i]);
                            System.out.println("Stock Remaining: "+ stock[4][i]);
                            System.out.println("Price: Rs."+ price[4][i]);
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
                x++;

                do
                {
                    System.out.println();
                    System.out.println("\t\t\tMENU");
                    System.out.println();
                    System.out.println("1. Desk.");
                    System.out.println("2. Shirt.");
                    System.out.println("3. Mobiles.");
                    System.out.println("4. Oven.");
                    System.out.println("5. Chips.");
                    System.out.println("0. Exit.");
                    System.out.println();
                    System.out.print("Enter Your Choice : ");
                    ch1=in.nextInt();

                    switch(ch1)
                    {
                        case 1:

                        System.out.println("\n\t\t"+name[0]);
                        for(int i=0;i<5;i++)
                        {
                            System.out.println(i+". "+pname[0][i]);
                        }
                        System.out.println("5. Exit.");
                        System.out.print("\nEnter you choice : ");
                        ch2=in.nextInt();

                        switch(ch2)
                        {
                            case 0:
							case 1:
							case 2:
							case 3:
							case 4:

                            if(stock[0][ch2]==0){
                                System.out.println(pname[0][ch2] + " is out of stock.");
                            }

                            else
                            {
                                bought[count]=pname[0][ch2];
                                System.out.println();
                                System.out.print("\nEnter the Amount you want: ");
                                amount[count]=in.nextInt();

                                bill[count]=price[0][ch2]*amount[count];

                                System.out.println("\nThe Bill Amount: Rs."+bill[count]);

                                stock[0][ch2]=stock[0][ch2]-amount[count];
                                count++;

                            }

                            break;
							
                            case 5:
                            System.out.println();
                            System.out.println();
                            System.out.println("Thank You !!");
                            break;
							
							default:
							System.out.println("\n\tEnter a choice 0-5");
							break;
                        }

                        break;

                        case 2:

                        System.out.println("\n\t\t"+name[1]);

                        for(int i=0;i<5;i++)
                        {
                            System.out.println(i+". "+pname[1][i]);
                        }
                        System.out.println("5. Exit.");
                        System.out.print("\nEnter you choice : ");
                        ch2=in.nextInt();

                        switch(ch2)
                        {
                            case 0:
							case 1:
							case 2:
							case 3:
							case 4:

                            if(stock[1][ch2]==0){
                                System.out.println(pname[1][ch2] + " is out of stock.");
                            }

                            else
                            {
                                bought[count]=pname[1][ch2];
                                System.out.println();
                                System.out.print("\nEnter the Amount you want: ");
                                amount[count]=in.nextInt();

                                bill[count]=price[1][ch2]*amount[count];

                                System.out.println("\nThe Bill Amount: Rs."+bill[count]);

                                stock[1][ch2]=stock[1][ch2]-amount[count];
                                count++;

                            }

                            break;

                            case 5:
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

                        System.out.println("\n\t\t"+name[2]);

                        for(int i=0;i<5;i++)
                        {
                            System.out.println(i+". "+pname[2][i]);
                        }
                        System.out.println("5. Exit.");
                        System.out.print("\nEnter you choice : ");
                        ch2=in.nextInt();

                        switch(ch2)
                        {
                            case 0:
							case 1:
							case 2:
							case 3:
							case 4:

                            if(stock[2][ch2]==0){
                                System.out.println(pname[2][ch2] + " is out of stock.");
                            }

                            else
                            {
                                bought[count]=pname[2][ch2];
                                System.out.println();
                                System.out.print("\nEnter the Amount you want: ");
                                amount[count]=in.nextInt();

                                bill[count]=price[2][ch2]*amount[count];

                                System.out.println("\nThe Bill Amount: Rs."+bill[count]);

                                stock[2][ch2]=stock[2][ch2]-amount[count];
                                count++;

                            }

                            break;

                            case 5:
                            System.out.println();
                            System.out.println();
                            System.out.println("Thank You !!");
                            break;
							
							default:
							System.out.println("\n\tEnter a choice 0-5");
							break;
                        }


                        break;

                        case 4:

                        System.out.println("\n\t\t"+name[3]);

                        for(int i=0;i<5;i++)
                        {
                            System.out.println(i+". "+pname[3][i]);
                        }
                        System.out.println("5. Exit.");
                        System.out.print("\nEnter you choice : ");
                        ch2=in.nextInt();

                        switch(ch2)
                        {
                            case 0:
							case 1:
							case 2:
							case 3:
							case 4:

                            if(stock[3][ch2]==0){
                                System.out.println(pname[3][ch2] + " is out of stock.");
                            }

                            else
                            {
                                bought[count]=pname[3][ch2];
                                System.out.println();
                                System.out.print("\nEnter the Amount you want: ");
                                amount[count]=in.nextInt();

                                bill[count]=price[3][ch2]*amount[count];

                                System.out.println("\nThe Bill Amount: Rs."+bill[count]);

                                stock[3][ch2]=stock[3][ch2]-amount[count];
                                count++;

                            }

                            break;

                            case 5:
                            System.out.println();
                            System.out.println();
                            System.out.println("Thank You !!");
                            break;
							
							default:
							System.out.println("\n\tEnter a choice 0-5");
							break;
                        }


                        break;

                        case 5:

                        System.out.println("\n\t\t"+name[4]);

                        for(int i=0;i<5;i++)
                        {
                            System.out.println(i+". "+pname[4][i]);
                        }
                        System.out.println("5. Exit.");
                        System.out.print("\nEnter you choice : ");
                        ch2=in.nextInt();

                        switch(ch2)
                        {
                            case 0:
							case 1:
							case 2:
							case 3:
							case 4:

                            if(stock[4][ch2]==0){
                                System.out.println(pname[4][ch2] + " is out of stock.");
                            }

                            else
                            {
                                bought[count]=pname[4][ch2];
                                System.out.println();
                                System.out.print("\nEnter the Amount you want: ");
                                amount[count]=in.nextInt();

                                bill[count]=price[4][ch2]*amount[count];

                                System.out.println("\nThe Bill Amount: Rs."+bill[count]);

                                stock[4][ch2]=stock[4][ch2]-amount[count];
                                count++;

                            }

                            break;

                            case 5:
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

                break;

                case 4:

                System.out.println();

                if(count==0){
                    System.out.println("There are NO orders.");
                }
                else{
                    System.out.println("\tThe Orders");

                    for(int i=0;i<x;i++){
                        System.out.println("\nUser No."+ (i+1));
                        System.out.println("\nName: "+user[i]);
                        System.out.println("Address: "+address[i]);
                    }

                    for(int i=0;i<count;i++){
                        System.out.println("\n\nOrder No."+ (i+1));
                        System.out.println();
                        System.out.println("Product: "+bought[i]);
                        System.out.println("Amount: "+amount[i]);
                        System.out.println("The Bill Amount: Rs."+bill[i]);
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