import java.util.*;
import java.io.*;

class IamHealed
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        GoodHealth obj = new GoodHealth();
        char ch ='\0';
        do
        {
            try{
                System.out.println("\n\nCHOOSE PATIENT TYPE\n\n");
                System.out.println("1. INPATIENT");
                System.out.println("2. OUTPATIENT");
                System.out.println("3. EXIT");
                System.out.print("YOUR CHOICE: ");
                 ch = br.readLine().charAt(0);
                switch(ch)
                {
                    case '1':
                        obj.inputIn();
                        GoodHealth obj1 = new GoodHealth(obj.pid,obj.pname,obj.specialities,obj.x,obj.fee,obj.problem,obj.y,obj.ndays,obj.bill);
                    break;
                    case '2':
                        obj.inputOut();
                        GoodHealth obj2 = new GoodHealth(obj.pid,obj.pname,obj.name,obj.fee,obj.issue,obj.visit,obj.bill);
                    break;
                    case '3':
                    break;
                    default:
                    System.out.println("CHOOSE BETWEEN 1 AND 2");
                }
            }catch (Exception e)
            {
                System.out.println("\nINVALID INPUT!!");
                System.out.println("YOU ARE BEING DIRECTED TO MAIN MENU\n");
            }//catch
        }while(ch!='3');
        System.out.println("\n\t\t\t\t\t\tEND OF CIA1\n");
    }
}

class GoodHealth
{
    int pid;
    String pname;
    char ptype;

    String name,issue,visit;
    float fee;

    String specialities[] = new String[50];
    String problem[]  = new String[50];
    int ndays,x,y;

    float bill;
    GoodHealth()
    {
        //DEFAULT CONSTRUCTOR
    }
    GoodHealth( int pid,String pname,String name,float fee,String issue,String visit,float bill)
    {
        //outpatient
        System.out.println("\n\nOUTPATIENT DETAILS\n");
        System.out.println("PATIENT ID\t:\t"+pid);
        System.out.println("PATIENT NAME\t:\t"+pname);
        System.out.println("DOCTOR'S NAME\t:\t"+name);
        System.out.println("DOCTOR'S FEE\t:\tRs. "+fee);
        System.out.println("DIAGNOSED ISSUE\t:\t"+issue);
        System.out.println("DATE OF VISIT\t:\t"+visit);
        System.out.println("BILL\t\t:\tRs. "+bill);
        
    }
    GoodHealth(int pid,String pname,String specialities[],int x,float fee,String problem[],int y,int ndays,float bill)
    {
        //inpatient
        System.out.println("\n\nINPATIENT DETAILS\n");
        System.out.println("PATIENT ID\t:\t"+pid);
        System.out.println("PATIENT NAME\t:\t"+pname);
        System.out.print("SPECIALITIES\t:\t");
        for(int i=0;i<x;i++)
        System.out.print(specialities[i]+"\t");
        System.out.print("\nPROBLEMS\t:\t");
        for(int i=0;i<y;i++)
        System.out.print(problem[i]+"\t");
        System.out.println("\nDOCTOR'S FEE\t:\t"+fee);
        System.out.println("NO. OF DAYS ADMITTED\t:\t"+ndays);
        System.out.println("BILL\t:\t"+bill);
    }
    void inputIn()throws IOException
    {
        

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("\n\nENTER DETAILS OF INPATIENT\n");        
        System.out.print("PATIENT ID :");       
        pid=Integer.parseInt(br.readLine());
        System.out.print("PATIENT NAME :");       
        pname=br.readLine();
        System.out.print("DOCTOR'S FEE :");       
        fee=Float.parseFloat(br.readLine());
        System.out.print("NO. OF DAYS ADMITTED :");       
        ndays=Integer.parseInt(br.readLine());
        System.out.print("NO. OF SPECIALITIES REQUIRED :");       
        x=Integer.parseInt(br.readLine());
        System.out.println("ENTER SPECIALITIES :");
        for(int i=0;i<x;i++)
        specialities[i]=br.readLine();
        System.out.print("NO. OF PROBLEMS DIAGNOSED :");       
        y=Integer.parseInt(br.readLine());
        System.out.println("ENTER PROBLEMS :");
        for(int i=0;i<y;i++)
        problem[i]=br.readLine();

        bill = fee*ndays+500;


    }
    void inputOut()throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("\n\nENTER DETAILS OF OUTPATIENT\n");        
        System.out.print("PATIENT ID :");       
        pid=Integer.parseInt(br.readLine());
        System.out.print("PATIENT NAME :");       
        pname=br.readLine();
        System.out.print("DOCTOR'S NAME :");       
        name=br.readLine();
        System.out.print("DOCTOR'S FEE :");       
        fee=Float.parseFloat(br.readLine());
        System.out.print("DIAGNOSED ISSUE :");
        issue=br.readLine();
        System.out.print("DATE OF VISIT :");
        visit =br.readLine();

        bill = fee+500;

        
    }

}

