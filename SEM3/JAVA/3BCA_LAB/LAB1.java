//Program to demonstrate entry and exit controlled loop using JAVA
import java.io.*;
//import java.util.*;
import java.lang.*;
class LAB1
{

public static void main(String args[])throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    System.out.println("\n\n\t\tProgram to Demonstrate Entry and Exit Controlled Loop using JAVA\n\n");
        String[] name = new String[100];
        String[] date = new String[100];
        int[] session= new int[100];
        int[] ticket = new int[100];
        int j=0,x;
        char ch;
        double rand;

        do
        {
            System.out.println("\n\t\t\t\tWELCOME TO ANIMAL ALCOVE");
            System.out.println("\n1. Booking Dashboard");
            System.out.println("2. Know Your Shelter");
            System.out.println("3. Contact Us");
            System.out.println("4. Exit.");
            System.out.print("Your Choice: ");
            ch=br.readLine().charAt(0);

            switch(ch)
            {
                case '1': 
                    System.out.println("\n\n\t\t\t\t\tBOOKING DASHBOARD\n\n");
                    System.out.print("\nENTER NO. OF VISITORS : ");
                    int n=Integer.parseInt(br.readLine());
                    if(n<=0)
                    System.out.println("\nINVALID VISITOR NO.");
                    else
                    {
                        System.out.println("\n\nFor Session :\n\tPress 1 for Morning Session\n\tPress 2 for Evening Session");
                        System.out.println("For Date :\n\tEnter Date in dd/mm/yyyy Format\n\n");
                        x=j;
                        for(int i=1;i<=n;i++)
                        {
                            System.out.print("\nName of Visitor "+i+" : ");
                            name[j]=br.readLine();
                            System.out.print("Date : ");
                            date[j]=br.readLine();
                            System.out.print("Session : ");
                            session[j]=Integer.parseInt(br.readLine());
                            /*Random r = new Random( System.currentTimeMillis() );
                           ticket[j] = ((1 + r.nextInt(2)) * 10000 + r.nextInt(10000));*/
                            rand = Math.random();
                            ticket[j] = (int)(rand * 100000 );
                            j+=1;
                        }

                        System.out.println("\n\n\tBooking Details\n");
                        for(int i=1;i<=n;i++)
                        {
                            System.out.println("\n\nVisitor "+i);
                            System.out.println("\nName\t:\t"+name[x]);
                            System.out.println("Date\t:\t"+date[x]);
                            if(session[x]==1)
                            System.out.println("Session\t:\tMorning (9:00a.m. to 1:00p.m.)");
                            else if(session[x]==2)
                            System.out.println("Session\t:\tEvening (1:00p.m. to 5:00p.m.)");
                            else
                            {System.out.println("\nINVALID SESSION NO. ENTERED\nSESSION AUTOMATICALLY SET TO MORNING\n");
                            System.out.println("Session\t:\tMorning (9:00a.m. to 1:00p.m.)");}
                            System.out.println("Ticket No. :\t"+ticket[x]);
                            System.out.println("Ticket fare:\t50");
                            x+=1;
                        }
                        
                        
                        System.out.println("\nTotal ticket fare: "+(n*50));
                        System.out.println("\n\n");
                    }
                    break;

                case '2': 
                     System.out.println("\n\n\t\t\t\t\tABOUT US\n\n");

                    System.out.println("We are a team of animal lovers that stand up for stricter laws for animal rights, cruelty & soon on abuse cases, and issues faced by stray animal feeders and animal lovers.");
                    System.out.println("If you’ve been on the search of a truly beautiful and adorable furred pet, then look no further. At Animal Alcove, we strive to provide the best traits and nature of pets, and for us, each animal is unique and to be loved specially");
                    break;

                case '3':
                System.out.println("\n\n\t\t\t\t\tCONTACT US\n\n");
                System.out.println("\nADDRESS\t:\t Hans Khera, Lucknow, Uttar Pradesh 226009\n");
                System.out.println("\nPHONE\t:\t099356 29315\n");
                System.out.println("\nFAX\t:\t2236538\n");
                System.out.println("\nEMAIL\t:\tanimalalcove@gmail.com\n");

                    break;

                case '4': 
                System.out.println("\n\t\t\t\tTHANK YOU. VISIT AGAIN!");
                        break;
                default: System.out.println("\nINVALID INPUT!!\nCHOOSE BETWEEN 1,2,3,4.");
            }
            
	    }while(ch!='4');
		System.out.println("\n\n\n\t\t\t\t\tEND OF LAB 1");
	
    }
}