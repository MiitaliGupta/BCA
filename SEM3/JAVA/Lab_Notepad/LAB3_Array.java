//Program to demonstrate nested switch statements using JAVA
import java.util.*;
import java.io.*;
class LAB3_Array
{
    static String animals[]= new String[3];
    static String breeds[][]= new String[3][5];
    static int num[][]=new int[3][5];

    static String booking[][][]= new String [100][100][100];
    static String owner[]=new String[100];
    static Long contact[]=new Long[100];
    static String address[]=new String[100];
    static String adopted[]=new String[100];

    static char ch='\0',c='\0';
    static int x=0,y=0,a1=0,z=0;
   // BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        static void start()
        {
            System.out.println("________________________________________________________________________________________________________");
            System.out.println("\n\t\t\t\t\tWELCOME TO ANIMAL ALCOVE\n");
            System.out.println("________________________________________________________________________________________________________");
        }
        static void sL()
        {
            System.out.println("--------------------------------------------------------------------------------------------------------");
        }
        static void adopt()throws IOException
        {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            do {
                start();
                System.out.println("\n\t\t\t\t  ADOPT PET OF YOUR CHOICE FOR FREE");
                sL();
                System.out.println("\n1. DOGS");
                System.out.println("2. CATS");
                System.out.println("3. RABBITS");
                System.out.println("4. EXIT.");
                System.out.print("YOUR CHOICE: ");
                c=br.readLine().charAt(0);
            
                    switch(c)
                    {
                        case '1':
                            sL();
                            System.out.println("\t\t\t\t\t\t"+animals[0]);
                            sL();
                            System.out.println();
                            for(int i=0;i<5;i++)
                            {
                                System.out.println((i+1)+". "+breeds[0][i]);
                            }
                            System.out.println("6. EXIT.");
                            System.out.print("\nENTER YOU CHOICE : ");
                            a1=Integer.parseInt(br.readLine());
                            switch(a1)
                            {
                                case 1:
                                case 2:
                                case 3:
                                case 4:
                                case 5:
                                    a1=a1-1;
                                    if(num[0][a1]==0)
                                    System.out.println("\nSORRY THAT BREED IS UNAVAILABLE AT THE MOMENT.");
                                    else
                                    {
                                        System.out.println("\nCONGRATULATIONS!!\nYOU HAVE BECOME PROUD OWNER OF A "+breeds[0][a1]);
                                        num[0][a1]-=1;
                                        adopted[y]= animals[0]+" -> "+breeds[0][a1];
                                        y+=1;
                                    }
                                case 6:
                                    break;
                                default: System.out.println("INVALID INPUT.\nCHOOSE AMONGST 1,2,3,4,5,6.");
                            }
                            break;
                        case '2':
                            sL();
                            System.out.println("\t\t\t\t\t\t"+animals[1]);
                            sL();
                            System.out.println();
                            for(int i=0;i<5;i++)
                            {
                                System.out.println((i+1)+". "+breeds[1][i]);
                            }
                            System.out.println("6. EXIT.");
                            System.out.print("\nENTER YOU CHOICE : ");
                            a1=Integer.parseInt(br.readLine());
                            switch(a1)
                            {
                                case 1:
                                case 2:
                                case 3:
                                case 4:
                                case 5:
                                    a1=a1-1;
                                    if(num[1][a1]==0)
                                    System.out.println("\nSORRY THAT BREED IS UNAVAILABLE AT THE MOMENT.");
                                    else
                                    {
                                        System.out.println("\nCONGRATULATIONS!!\nYOU HAVE BECOME PROUD OWNER OF A "+breeds[1][a1]);
                                        num[1][a1]-=1;
                                        adopted[y]= animals[1]+" -> "+breeds[1][a1];
                                        y+=1;
                                    }
                                case 6:
                                    break;
                                default: System.out.println("INVALID INPUT.\nCHOOSE AMONGST 1,2,3,4,5,6.");
                            }
                            break;
                        case '3':
                            sL();
                            System.out.println("\t\t\t\t\t\t"+animals[2]);
                            sL();
                            System.out.println();
                            for(int i=0;i<5;i++)
                            {
                                System.out.println((i+1)+". "+breeds[2][i]);
                            }
                            System.out.println("6. EXIT.");
                            System.out.print("\nENTER YOU CHOICE : ");
                            a1=Integer.parseInt(br.readLine());
                            switch(a1)
                            {
                                case 1:
                                case 2:
                                case 3:
                                case 4:
                                case 5:
                                    a1=a1-1;
                                    if(num[2][a1]==0)
                                    System.out.println("\nSORRY THAT BREED IS UNAVAILABLE AT THE MOMENT.");
                                    else
                                    {
                                        System.out.println("\nCONGRATULATIONS!!\nYOU HAVE BECOME PROUD OWNER OF A "+breeds[2][a1]);
                                        num[2][a1]-=1;
                                        adopted[y]= animals[2]+" -> "+breeds[2][a1];
                                        y+=1;
                                    }
                                case 6:
                                    break;
                                default: System.out.println("INVALID INPUT.\nCHOOSE AMONGST 1,2,3,4,5,6.");
                            }
                            break;
                        case '4':
                            break;
                        default: System.out.println("\nINVALID INPUT!!\nCHOOSE BETWEEN 1,2,3,4 and 5.");
                    }
                        if(c!='4')
                        {
                            System.out.println("\nDO YOU WANT TO ADOPT ANOTHER PET?\nFOR YES PRESS ANY KEY\nFOR NO PRESS n/N\n");
                            System.out.print("YOUR CHOICE: ");
                            c=br.readLine().charAt(0);
                        }
                        
                        if(c!='4' && c!='n' && c!='N')
                        {
                            owner[x]=owner[x-1];
                            contact[x]=contact[x-1];
                            address[x]=address[x-1];
                            x+=1;
                        }
                    
            }
            while(c!='4' && c!='n' && c!='N');
        }


public static void main(String args[])throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("\n\n\t\t\t\tPROGRAM TO DEMOSTRATE IMPLEMENTATION OF ARRAYS\n\n");
        sL(); 

         animals[0]="DOGS";
         animals[1]="CATS";
         animals[2]="RABBITS";

         breeds[0][0]="CARAVAN HOUND";
         breeds[0][1]="RAJAPALAYAM";
         breeds[0][2]="COMBAI";
         breeds[0][3]="INDIAN MASTIFF";
         breeds[0][4]="MUDHOL HOUND";

         breeds[1][0]="INDIAN LYNX";
         breeds[1][1]="BENGAL CAT";
         breeds[1][2]="PALLAS'S CAT";
         breeds[1][3]="THE CARACAL";
         breeds[1][4]="HIMMIE";

         breeds[2][0]="REX";
         breeds[2][1]="SATIN";
         breeds[2][2]="FLEMISH GIANT";
         breeds[2][3]="HIMALAYAN";
         breeds[2][4]="SOVIET CHINCILLA";

         for(int i=0;i<3;i++)
             for(int j=0;j<5;j++)
                 num[i][j]=(int)(Math.random()*100);
         
 
         do
        {
            try{
                    start();
                    System.out.println("\n0. BOOKING DASHBOARD");
                    System.out.println("1. AVAILABLE ANIMALS");
                    System.out.println("2. ADOPT A PET");
                    System.out.println("3. PETS ADOPTED TODAY");
                    System.out.println("4. CONTACT US");
                    System.out.println("5. EXIT.");
                    System.out.print("YOUR CHOICE: ");
                    ch=br.readLine().charAt(0);

                    switch(ch)
                    {  
                        case '0': 
                            System.out.println("\n\n\t\t\t\t\tBOOKING DASHBOARD\n\n");
                            sL();
                            System.out.print("\nENTER NO. OF VISITORS : ");
                            int n=Integer.parseInt(br.readLine());
                            if(n<=0)
                            System.out.println("\nINVALID VISITOR NO.");
                            else
                            {
                                System.out.println("For Date :\n\tEnter Date in dd/mm/yyyy Format\n\n");
                                
                                System.out.print("\nDate of Visit : ");
                                booking[0][0][0] =br.readLine();
                                for(int i=0;i<1;i++)
                                for(int j=0;j<n;j++)
                                {   
                                    booking[0][i][j]=booking[0][0][0];
                                    System.out.print("Name of Visitor "+(j+1)+" : ");
                                    booking[1][i][j] =br.readLine();
                                    booking[2][i][j] = Integer.toString((int)(Math.random()* 100000 ));
                                }
                                
                                sL();
                                System.out.println("\n\n\t\t\t\t\tBooking Details\n");
                                sL();
                                for(int i=0;i<1;i++)
                                { int j=0;
                                    System.out.println("Date of Visit\t:\t"+booking[0][i][j]);
                                    for(j=0;j<n;j++)
                                    {
                                    System.out.println("\n\nVisitor "+(i+1));
                                    System.out.println("\nName\t:\t"+booking[1][i][j]);
                                    System.out.println("Ticket No. :\t"+booking[2][i][j]);
                                    System.out.println("Ticket fare:\t50");
                                    }
                                }
                                
                                System.out.println("\nTotal ticket fare: "+(n*50));
                                System.out.println("\n\n");
                                
                                // System.out.println("Trail");
                                // for(int i=0;i<1;i++)
                                // for(int j=0;j<n;j++)
                                // {
                                // System.out.println("i: "+i+" j: "+j);
                                // System.out.println(booking[0][i][j]);
                                // System.out.println(booking[1][i][j]);
                                // System.out.println(booking[2][i][j]);
                                // }
                                
                            }
                        break;

                        case'1':
                                System.out.println("\n\t\t\t\t\tANIMALS AVAILABLE");
                            for(int i=0;i<3;i++)
                            {
                                sL();
                                System.out.println("\t\t\t\t\t\t"+animals[i]);
                                sL();
                                System.out.println();
                                for(int j=0;j<5;j++)
                                {
                                    System.out.println("\nBREED : "+breeds[i][j]);
                                    System.out.println("AVAILABLE : "+num[i][j]);
                                    System.out.println();

                                }
                            }
                            break;
                        case'2':
                            System.out.println();
                            sL();
                            System.out.print("ENTER YOUR NAME: ");
                            owner[x]=br.readLine();
            
                            System.out.print("\nENTER YOUR CONTACT NUMBER: ");
                            contact[x]=Long.parseLong(br.readLine());
            
                            System.out.print("\nENTER YOUR ADDRESS: ");
                            address[x]=br.readLine();
            
                            x+=1;
                            sL();
                            adopt();
                        
                            break;
                        case'3':
                            System.out.println("\n\t\t\t\t\t  PETS ADOPTED TODAY");
                            sL();
                            if(y==0)
                            {
                            System.out.println("\n\t\t\t\t\tSADLY NO PET GOT ADOPTED TODAY =(");
                            sL();
                            }
                            else
                            {
                            for(int i=0;i<y;i++)
                            {
                                System.out.println("\nANIMAL\t\t:\t"+adopted[i]);
                                System.out.println("ADOPTED BY\t:\t"+owner[i]);
                                System.out.println("CONTACT\t\t:\t"+contact[i]);
                                System.out.println("ADDRESS\t\t:\t"+address[i]);
                                System.out.println();
                                sL();
                            }
                            }
                            break;
                        case '4':
                        System.out.println("\n\n\t\t\t\t\tCONTACT US");
                        sL();
                        System.out.println("\nADDRESS\t:\tHans Khera, Lucknow, Uttar Pradesh 226009\n");
                        System.out.println("\nPHONE\t:\t099356 29315\n");
                        System.out.println("\nFAX\t:\t2236538\n");
                        System.out.println("\nEMAIL\t:\thelp@animalalcove.com\n");

                            break;

                        case '5': 
                        System.out.println("\n\t\t\t\t\t  THANK YOU. VISIT AGAIN!");
                        sL();
                                break;
                        default: System.out.println("\nINVALID INPUT!!\nCHOOSE BETWEEN 1,2,3,4 and 5.");
                    }
                }catch (Exception e)
                    {
                        sL();
                        System.out.println("\nINVALID INPUT!!");
                        System.out.println("YOU ARE BEING DIRECTED TO MAIN MENU\n");
                        sL();
                    }
	    }while(ch!='5');
        sL();
		System.out.println("\n\t\t\t\t\t\tEND OF LAB 3\n");
        sL();
    }
}