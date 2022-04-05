//Program to demonstrate String Methods in JAVA
import java.util.*;
class LAB8_StringMethods
{
    String animals[]= new String[5];
    String breeds[][]= new String[3][5];
    int num[][]=new int[3][5];


    void start()
    {
        System.out.println("________________________________________________________________________________________________________");
        System.out.println("\n\t\t\t\t\tWELCOME TO ANIMAL ALCOVE");
        System.out.println("________________________________________________________________________________________________________");
    }//start
    void sL()
    {
        System.out.println("--------------------------------------------------------------------------------------------------------");
    }//sl

    LAB8_StringMethods()
    {
        animals[0]="DOGS";
         animals[1]="CATS";
         animals[2]="RABBITS";
         animals[3]="HAMSTERS";
         animals[4]="RATS";

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
    }
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        LAB8_StringMethods obj = new LAB8_StringMethods();
        System.out.println("\n\n\t\t\t\tPROGRAM TO DEMOSTRATE STRING METHODS\n\n");
        obj.sL(); 
        char ch='\0';
        String in = "", out ;
        int x=1;
        do
        {
             try{
                obj.start();
                System.out.println("\n1. TO SEARCH ANIMAL NAME WITH SEQUENCE OF CHARACTERS");
                System.out.println("2. TO SEARCH ANIMAL NAME WITH COMPLETE NAME");
                System.out.println("3. TO SEARCH BREED NAME WITH SEQUENCE OF CHARACTERS");
                System.out.println("4. TO SEARCH BREED NAME WITH COMPLETE NAME");
                System.out.println("5. EXIT.");
                System.out.print("YOUR CHOICE : ");
                ch=sc.next().charAt(0);
                switch(ch)
                { 
                    case '1':
                        System.out.println("\n\n\t\t\t\t\tSEARCH ANIMALS NAME WITH SEQUENCE OF CHARACTERS\n\n");
                        obj.sL();
                        System.out.print("\nENTER THE SEQUENCE : ");
                        in=sc.next();
                        out = "";
                        for(int i=0;i<5;i++)
                        {
                          if(obj.animals[i].contains(in))
                          {
                           out = out+obj.animals[i]+"\n";
                             //out.concat(obj.animals[i]);
                             // out.concat("\n");
                          }
                        }
                        if(out.isEmpty())
                        System.out.println("\nANIMAL NOT FOUND");
                        else
                        {
                            System.out.println("\n\t\t\t\t\t\tANIMALS");
                            obj.sL();
                            System.out.println(out);
                        }
                    break; 
                    
                    case '2':
                    System.out.println("\n\n\t\t\t\t\tSEARCH ANIMAL NAME WITH COMPLETE NAME\n\n");
                        obj.sL();
                        System.out.print("\nENTER THE NAME : ");
                        in=sc.next();
                        for(int i=0;i<5;i++)
                        {
                            x = obj.animals[i].compareToIgnoreCase(in);
                          if(x==0)
                          {
                            System.out.println("\nANIMAL FOUND");
                            break;
                          }
                        }
                        if(x!=0)
                        System.out.println("\nANIMAL NOT FOUND");
                        
                    break; 

                    case '3':
                    System.out.println("\n\n\t\t\t\t\tSEARCH BREED NAME WITH SEQUENCE OF CHARACTERS\n\n");
                        obj.sL();
                        System.out.print("\nENTER THE SEQUENCE : ");
                        in=sc.next();
                        out = "";
                        for(int i=0;i<3;i++)
                        {
                            for(int j=0;j<5;j++)
                            {
                                if(obj.breeds[i][j].contains(in))
                                {
                                    out = out+obj.breeds[i][j]+"\n";
                                    //   out.concat(obj.breeds[i][j]);
                                    //   out.concat("\n");
                                }
                            }
                        }
                        if(out.isEmpty())
                        System.out.println("\nBREEDS NOT FOUND");
                        else
                        {
                            System.out.println("\n\t\t\t\t\t\tBREEDS");
                            obj.sL();
                            System.out.println(out);
                        }
                    break; 

                    case '4':
                    System.out.println("\n\n\t\t\t\t\tSEARCH BREED NAME WITH COMPLETE NAME\n\n");
                    obj.sL();
                    System.out.print("\nENTER THE NAME : ");
                    in=sc.next();
                    for(int i=0;i<3;i++)
                        {
                            for(int j=0;j<5;j++)
                            {
                                    x = obj.breeds[i][j].compareToIgnoreCase(in);
                                if(x==0)
                                {
                                    System.out.println("\nBREED FOUND");
                                    break;
                                }
                            }
                        }
                    if(x!=0)
                    System.out.println("\nBREED NOT FOUND");
                    
                    break;

                    case '5': 
                        System.out.println("\n\t\t\t\t\t  THANK YOU. VISIT AGAIN!");
                        obj.sL();
                    break;

                    default: System.out.println("\nINVALID INPUT!!\nCHOOSE BETWEEN 1,2,3,4 and 5.");
                }

                }catch (Exception e)
                {
                    obj.sL();
                    System.out.println("\nINVALID INPUT!!");
                    System.out.println("YOU ARE BEING DIRECTED TO MAIN MENU\n");
                    obj.sL();
                }//catch
        }while(ch!='5');
        obj.sL();
		System.out.println("\n\t\t\t\t\t\tEND OF LAB 4\n");
        obj.sL();
    }
}