//Program to demonstrate Arrays in JAVA

// import java.util.*;
import java.io.*;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

class LAB4_Overloading
{
    int y=0,x=0,z=1,start=0;

    //DATE VALIDATOR
 
    boolean dateValidator(String date)
    {
        final String Date_REGEX =
                    "^(?:(?:(?:0?[13578]|1[02])(\\/|-|\\.)31)\\1|" +
                    "(?:(?:0?[1,3-9]|1[0-2])(\\/|-|\\.)(?:29|30)\\2))" +
                    "(?:(?:1[6-9]|[2-9]\\d)?\\d{2})$|^(?:0?2(\\/|-|\\.)29\\3" +
                    "(?:(?:(?:1[6-9]|[2-9]\\d)?(?:0[48]|[2468][048]|" +
                    "[13579][26])|(?:(?:16|[2468][048]|[3579][26])00))))$|" +
                    "^(?:(?:0?[1-9])|(?:1[0-2]))(\\/|-|\\.)(?:0?[1-9]|1\\d|" +
                    "2[0-8])\\4(?:(?:1[6-9]|[2-9]\\d)?\\d{2})$";
 
    
                    final Pattern Date_PATTERN = Pattern.compile(Date_REGEX);

        Matcher matcher = Date_PATTERN.matcher(date);
        return matcher.matches();
    }//END OF DATE VALIDATOR

    //FORMATTING
    void start()
    {
        System.out.println("________________________________________________________________________________________________________");
        System.out.println("\n\t\t\t\t\tWELCOME TO ANIMAL ALCOVE\n");
        System.out.println("________________________________________________________________________________________________________");
    }//start
    void sL()
    {
        System.out.println("--------------------------------------------------------------------------------------------------------");
    }//sl

    //CASE 2 -> ADOPTION
    // void adopt()throws IOException
    // {
    //     data d = new data();
    //     char c='\0';
    //     int a1=0;
    //     BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    //     do {
    //         start();
    //         System.out.println("\n\t\t\t\t  ADOPT PET OF YOUR CHOICE FOR FREE");
    //         sL();
    //         System.out.println("\n1. DOGS");
    //         System.out.println("2. CATS");
    //         System.out.println("3. RABBITS");
    //         System.out.println("4. EXIT.");
    //         System.out.print("YOUR CHOICE: ");
    //         c=br.readLine().charAt(0);
        
    //             switch(c)
    //             {
    //                 case '1':
    //                     sL();
    //                     System.out.println("\t\t\t\t\t\t"+d.animals[0]);
    //                     sL();
    //                     System.out.println();
    //                     for(int i=0;i<5;i++)
    //                     {
    //                         System.out.println((i+1)+". "+d.breeds[0][i]);
    //                     }//for
    //                     System.out.println("6. EXIT.");
    //                     System.out.print("\nENTER YOU CHOICE : ");
    //                     a1=Integer.parseInt(br.readLine());
    //                     switch(a1)
    //                     {
    //                         case 1:
    //                         case 2:
    //                         case 3:
    //                         case 4:
    //                         case 5:
    //                             a1=a1-1;
    //                             if(d.num[0][a1]==0)
    //                             System.out.println("\nSORRY THAT BREED IS UNAVAILABLE AT THE MOMENT.");
    //                             else
    //                             {
    //                                 System.out.println("\nCONGRATULATIONS!!\nYOU HAVE BECOME PROUD OWNER OF A "+d.breeds[0][a1]);
    //                                 d.num[0][a1]-=1;
    //                                 d.adopted[obj.y]= d.animals[0]+" -> "+d.breeds[0][a1];
    //                                 obj.y+=1;
    //                             }//else
    //                         case 6:
    //                             break;
    //                         default: System.out.println("INVALID INPUT.\nCHOOSE AMONGST 1,2,3,4,5,6.");
    //                     }//switch a1 1
    //                     break;
    //                 case '2':
    //                     sL();
    //                     System.out.println("\t\t\t\t\t\t"+d.animals[1]);
    //                     sL();
    //                     System.out.println();
    //                     for(int i=0;i<5;i++)
    //                     {
    //                         System.out.println((i+1)+". "+d.breeds[1][i]);
    //                     }//for
    //                     System.out.println("6. EXIT.");
    //                     System.out.print("\nENTER YOU CHOICE : ");
    //                     a1=Integer.parseInt(br.readLine());
    //                     switch(a1)
    //                     {
    //                         case 1:
    //                         case 2:
    //                         case 3:
    //                         case 4:
    //                         case 5:
    //                             a1=a1-1;
    //                             if(d.num[1][a1]==0)
    //                             System.out.println("\nSORRY THAT BREED IS UNAVAILABLE AT THE MOMENT.");
    //                             else
    //                             {
    //                                 System.out.println("\nCONGRATULATIONS!!\nYOU HAVE BECOME PROUD OWNER OF A "+d.breeds[1][a1]);
    //                                 d.num[1][a1]-=1;
    //                                 d.adopted[obj.y]= d.animals[1]+" -> "+d.breeds[1][a1];
    //                                 obj.y+=1;
    //                             }//else
    //                         case 6:
    //                             break;
    //                         default: System.out.println("INVALID INPUT.\nCHOOSE AMONGST 1,2,3,4,5,6.");
    //                     }//switch a1 2
    //                     break;
    //                 case '3':
    //                     sL();
    //                     System.out.println("\t\t\t\t\t\t"+d.animals[2]);
    //                     sL();
    //                     System.out.println();
    //                     for(int i=0;i<5;i++)
    //                     {
    //                         System.out.println((i+1)+". "+d.breeds[2][i]);
    //                     }//for
    //                     System.out.println("6. EXIT.");
    //                     System.out.print("\nENTER YOU CHOICE : ");
    //                     a1=Integer.parseInt(br.readLine());
    //                     switch(a1)
    //                     {
    //                         case 1:
    //                         case 2:
    //                         case 3:
    //                         case 4:
    //                         case 5:
    //                             a1=a1-1;
    //                             if(d.num[2][a1]==0)
    //                             System.out.println("\nSORRY THAT BREED IS UNAVAILABLE AT THE MOMENT.");
    //                             else
    //                             {
    //                                 System.out.println("\nCONGRATULATIONS!!\nYOU HAVE BECOME PROUD OWNER OF A "+d.breeds[2][a1]);
    //                                 d.num[2][a1]-=1;
    //                                 d.adopted[obj.y]= d.animals[2]+" -> "+d.breeds[2][a1];
    //                                 obj.y+=1;
    //                             }//else
    //                         case 6:
    //                             break;
    //                         default: System.out.println("INVALID INPUT.\nCHOOSE AMONGST 1,2,3,4,5,6.");
    //                     }//switch a1 3
    //                     break;
    //                 case '4':
    //                     break;
    //                 default: System.out.println("\nINVALID INPUT!!\nCHOOSE BETWEEN 1,2,3,4 and 5.");
    //             }// switch c
    //                 if(c!='4')
    //                 {
    //                     System.out.println("\nDO YOU WANT TO ADOPT ANOTHER PET?\nFOR YES PRESS ANY KEY\nFOR NO PRESS n/N\n");
    //                     System.out.print("YOUR CHOICE: ");
    //                     c=br.readLine().charAt(0);
    //                 }//if
                    
    //                 if(c!='4' && c!='n' && c!='N')
    //                 {
    //                     d.owner[obj.x]=d.owner[obj.x-1];
    //                     d.contact[obj.x]=d.contact[obj.x-1];
    //                     d.address[obj.x]=d.address[obj.x-1];
    //                     obj.x+=1;
    //                 }//if
                
    //     }while(c!='4' && c!='n' && c!='N');
    // }//void adopt

    public static void main(String args[])throws IOException
    {
        LAB4_Overloading obj = new LAB4_Overloading();
        data d = new data();
        show m1 = new show();
        char ch='\0';
        char c='\0';
        int a1=0;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("\n\n\t\t\t\tPROGRAM TO DEMOSTRATE IMPLEMENTATION OF ARRAYS\n\n");
        obj.sL(); 
         do
        {
            try{
                    obj.start();
                    System.out.println("\n0. BOOKING DASHBOARD");
                    System.out.println("1. AVAILABLE ANIMALS");
                    System.out.println("2. ADOPT A PET");
                    //System.out.println("3. VISTORS FOR TODAY");
                    System.out.println("3. PETS ADOPTED TODAY");
                    System.out.println("4. CONTACT US");
                    System.out.println("5. EXIT.");
                    System.out.print("YOUR CHOICE: ");
                    ch=br.readLine().charAt(0);

                    switch(ch)
                    {  
                        case '0': 
                            System.out.println("\n\n\t\t\t\t\tBOOKING DASHBOARD\n\n");
                            obj.sL();
                            System.out.print("\nENTER NO. OF VISITORS : ");
                            int n=Integer.parseInt(br.readLine());
                            if(n<=0)
                            System.out.println("\nINVALID VISITOR NO.");
                            else
                            {
                                System.out.println("FOR DATE :\n\tENTER DATE IN MM/DD/YYYY FORMAT\n");
                                int k=1;
                                for(int i=obj.z-1;i<obj.z;i++)
                                {
                                    for(int j=obj.start;j<(obj.start+n);j++)
                                    {   
                                        do
                                        {
                                        System.out.print("\nDATE OF VISIT : ");
                                        d.booking[0][i][j] =br.readLine();
                                        if(!obj.dateValidator(d.booking[0][i][j]))
                                        System.out.println("\nINVALID DATE.ENTER A VALID DATE");
                                        }while(!obj.dateValidator(d.booking[0][i][j]));
                                        
                                        System.out.print("NAME OF VISITOR "+(k++)+" : ");
                                        d.booking[1][i][j] =br.readLine();
                                        d.booking[2][i][j] = Integer.toString((int)(Math.random()* 100000 ));//ticket no.
                                    }
                                }
                                System.out.println("\n");
                                obj.sL();
                                System.out.println("\t\t\t\t\tBOOKING DETAILS\n");
                                obj.sL();
                                 k=1;
                                for(int i=(obj.z-1);i<obj.z;i++)
                                {
                                    for(int j=obj.start;j<(obj.start+n);j++)
                                    {
                                        data s2=new data(d.booking[0][i][j], d.booking[1][i][j], d.booking[2][i][j]);
                                        System.out.println("\n\nVISITOR "+(k++));
                                        // System.out.println("\nDATE OF VISIT :\t"+s2.da);
                                        // System.out.println("NAME\t:\t"+s2.na);
                                        // System.out.println("TICKET NO. :\t"+s2.tick);
                                        
                                        m1.display(s2.da,s2.na,s2.tick);
                                        System.out.println("TICKET FARE:\t50");
                                    }
                                }
                                obj.z+=1;
                                obj.start=+n;
                                System.out.println("\nTOTAL TICKET FARE: "+(n*50));
                                System.out.println("\n\n");
                                 
                                
                            }
                        break;

                        case'1':
                                System.out.println("\n\t\t\t\t\tANIMALS AVAILABLE");
                            for(int i=0;i<3;i++)
                            {
                                obj.sL();
                                System.out.println("\t\t\t\t\t\t"+d.animals[i]);
                                obj.sL();
                                System.out.println();
                                for(int j=0;j<5;j++)
                                {
                                    m1.display(d.breeds[i][j],d.num[i][j]);
                                    // System.out.println("\nBREED : "+d.breeds[i][j]);
                                    // System.out.println("AVAILABLE : "+d.num[i][j]);
                                    System.out.println();

                                }
                            }
                            break;
                        case'2':
                            System.out.println();
                            obj.sL();
                            System.out.print("ENTER YOUR NAME: ");
                            d.owner[obj.x]=br.readLine();
            
                            System.out.print("\nENTER YOUR CONTACT NUMBER: ");
                            d.contact[obj.x]=Long.parseLong(br.readLine());
            
                            System.out.print("\nENTER YOUR ADDRESS: ");
                            d.address[obj.x]=br.readLine();
            
                            obj.x+=1;
                            obj.sL();
                            do {
                                obj.start();
                                System.out.println("\n\t\t\t\t  ADOPT PET OF YOUR CHOICE FOR FREE");
                                obj.sL();
                                System.out.println("\n1. DOGS");
                                System.out.println("2. CATS");
                                System.out.println("3. RABBITS");
                                System.out.println("4. EXIT.");
                                System.out.print("YOUR CHOICE: ");
                                c=br.readLine().charAt(0);
                            
                                    switch(c)
                                    {
                                        case '1':
                                        obj.sL();
                                            System.out.println("\t\t\t\t\t\t"+d.animals[0]);
                                            obj.sL();
                                            System.out.println();
                                            for(int i=0;i<5;i++)
                                            {
                                                System.out.println((i+1)+". "+d.breeds[0][i]);
                                            }//for
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
                                                    if(d.num[0][a1]==0)
                                                    System.out.println("\nSORRY THAT BREED IS UNAVAILABLE AT THE MOMENT.");
                                                    else
                                                    {
                                                        System.out.println("\nCONGRATULATIONS!!\nYOU HAVE BECOME PROUD OWNER OF A "+d.breeds[0][a1]);
                                                        d.num[0][a1]-=1;
                                                        d.adopted[obj.y]= d.animals[0]+" -> "+d.breeds[0][a1];
                                                        obj.y+=1;
                                                    }//else
                                                case 6:
                                                    break;
                                                default: System.out.println("INVALID INPUT.\nCHOOSE AMONGST 1,2,3,4,5,6.");
                                            }//switch a1 1
                                            break;
                                        case '2':
                                        obj.sL();
                                            System.out.println("\t\t\t\t\t\t"+d.animals[1]);
                                            obj.sL();
                                            System.out.println();
                                            for(int i=0;i<5;i++)
                                            {
                                                System.out.println((i+1)+". "+d.breeds[1][i]);
                                            }//for
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
                                                    if(d.num[1][a1]==0)
                                                    System.out.println("\nSORRY THAT BREED IS UNAVAILABLE AT THE MOMENT.");
                                                    else
                                                    {
                                                        System.out.println("\nCONGRATULATIONS!!\nYOU HAVE BECOME PROUD OWNER OF A "+d.breeds[1][a1]);
                                                        d.num[1][a1]-=1;
                                                        d.adopted[obj.y]= d.animals[1]+" -> "+d.breeds[1][a1];
                                                        obj.y+=1;
                                                    }//else
                                                case 6:
                                                    break;
                                                default: System.out.println("INVALID INPUT.\nCHOOSE AMONGST 1,2,3,4,5,6.");
                                            }//switch a1 2
                                            break;
                                        case '3':
                                        obj.sL();
                                            System.out.println("\t\t\t\t\t\t"+d.animals[2]);
                                            obj.sL();
                                            System.out.println();
                                            for(int i=0;i<5;i++)
                                            {
                                                System.out.println((i+1)+". "+d.breeds[2][i]);
                                            }//for
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
                                                    if(d.num[2][a1]==0)
                                                    System.out.println("\nSORRY THAT BREED IS UNAVAILABLE AT THE MOMENT.");
                                                    else
                                                    {
                                                        System.out.println("\nCONGRATULATIONS!!\nYOU HAVE BECOME PROUD OWNER OF A "+d.breeds[2][a1]);
                                                        d.num[2][a1]-=1;
                                                        d.adopted[obj.y]= d.animals[2]+" -> "+d.breeds[2][a1];
                                                        obj.y+=1;
                                                    }//else
                                                case 6:
                                                    break;
                                                default: System.out.println("INVALID INPUT.\nCHOOSE AMONGST 1,2,3,4,5,6.");
                                            }//switch a1 3
                                            break;
                                        case '4':
                                            break;
                                        default: System.out.println("\nINVALID INPUT!!\nCHOOSE BETWEEN 1,2,3,4 and 5.");
                                    }// switch c
                                        if(c!='4')
                                        {
                                            System.out.println("\nDO YOU WANT TO ADOPT ANOTHER PET?\nFOR YES PRESS ANY KEY\nFOR NO PRESS n/N\n");
                                            System.out.print("YOUR CHOICE: ");
                                            c=br.readLine().charAt(0);
                                        }//if
                                        
                                        if(c!='4' && c!='n' && c!='N')
                                        {
                                            d.owner[obj.x]=d.owner[obj.x-1];
                                            d.contact[obj.x]=d.contact[obj.x-1];
                                            d.address[obj.x]=d.address[obj.x-1];
                                            obj.x+=1;
                                        }//if
                                    
                            }while(c!='4' && c!='n' && c!='N');
                            break;
                        
                        case'3':
                            System.out.println("\n\t\t\t\t\t  PETS ADOPTED TODAY");
                            obj.sL();
                            if(obj.y==0)
                            {
                            System.out.println("\n\t\t\t\t\tSADLY NO PET GOT ADOPTED TODAY =(");
                            obj.sL();
                            }
                            else
                            {
                            for(int i=0;i<obj.y;i++)
                            {
                                data s1=new data(d.adopted[i], d.owner[i], d.contact[i], d.address[i]);
                                // System.out.println("\nANIMAL\t\t:\t"+s1.adopt);
                                // System.out.println("ADOPTED BY\t:\t"+s1.own);
                                // System.out.println("CONTACT\t\t:\t"+s1.cont);
                                // System.out.println("ADDRESS\t\t:\t"+s1.addr);
                                m1.display(s1.adopt,s1.own,s1.cont,s1.addr);
                                System.out.println();
                                obj.sL();
                            }
                            }
                            break;
                        case '4':
                            System.out.println("\n\n\t\t\t\t\tCONTACT US");
                            obj.sL();
                            System.out.println("\nADDRESS\t:\tHans Khera, Lucknow, Uttar Pradesh 226009\n");
                            System.out.println("\nPHONE\t:\t099356 29315\n");
                            System.out.println("\nFAX\t:\t2236538\n");
                            System.out.println("\nEMAIL\t:\thelp@animalalcove.com\n");

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
    }//void main

}//class lab4

//CONSTRUCTOR OVERLOADING
class data
{
    String animals[]= new String[3];
    String breeds[][]= new String[3][5];
    int num[][]=new int[3][5];

    String booking[][][]= new String [100][100][100];
    String owner[]=new String[100];
    Long contact[]=new Long[100];
    String address[]=new String[100];
    String adopted[]=new String[100];

        String adopt,own,addr;
        Long cont;

        String da,na,tick;

    //int y=0,x=0,z=1,start=0;

    data()
    {
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
    }
    data(String a, String b, Long c, String d)
    {
         adopt=a;
         own=b;
         cont=c;
         addr=d;
    }
    
    data(String a, String b, String c)
    {
         da=a;
         na=b;
         tick=c;
    }
}//class data

//METHOD OVERLOAD
class show
{
 void display(String a, String b, Long c, String d)
 {
    System.out.println("\nANIMAL\t\t:\t"+a);
    System.out.println("ADOPTED BY\t:\t"+b);
    System.out.println("CONTACT\t\t:\t"+c);
    System.out.println("ADDRESS\t\t:\t"+d);
     
 }
 void display(String a, String b, String c)
 {
    
    System.out.println("\nDATE OF VISIT :\t"+a);
    System.out.println("NAME\t:\t"+b);
    System.out.println("TICKET NO. :\t"+c);
 }

 void display(String a, int b)
 {
    
    System.out.println("\nDATE OF VISIT :\t"+a);
    System.out.println("NAME\t:\t"+b);
 }
}//class display
