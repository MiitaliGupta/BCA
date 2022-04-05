import java.util.*;
class CIA2
{
    static int id[],copy[],ret[],days[];
    static String name[],bookname[],author[],date[],bdate[];
    static long phone[],no[];

    static void sL()
    {
        System.out.println("--------------------------------------------------------------------------------------------------------");
    }//sl

    static void input(int y)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("STUDENT "+(y+1));
        System.out.print("\nENTER STUDENT ID : ");
        id[y]=sc.nextInt();
        System.out.print("ENTER STUDENT NAME : ");
        name[y]=sc.next();
        System.out.print("ENTER STUDENT DATE OF BIRTH : ");
        date[y]=sc.next();
        System.out.print("ENTER STUDENT PHONE NUMBER : ");
        phone[y]=sc.nextLong();
        System.out.print("ENTER BOOK TO BE ISSUED : ");
        bookname[y]=sc.next();
        System.out.print("ENTER AUTHOR NAME : ");
        author[y]=sc.next();
        System.out.print("ENTER ISSN NUMBER : ");
        no[y]=sc.nextLong();
        //copies of book available
        copy[y]=(int)(Math.random()*10);
        System.out.print("ENTER BORROW DATE : ");
        bdate[y]=sc.next();
        System.out.print("IF RETURNED PRESS 1 OTHERWISE 0 : ");
        ret[y]=sc.nextInt();
        if(ret[y]==1)
        {
        System.out.print("RETURNED THE BOOK AFTER HOW MANY DAY : ");
        days[y]=sc.nextInt();
        }
        else
        days[y]=0;
    }

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int flag=0;char ch = '\0';
        sL();
        System.out.println("\n\t\t\t\t\t\tLIBRARY DATABASE\n");
        sL();
        
        System.out.println("\nENTER DATA IN DATABASE");
        System.out.print("\nENTER NUMBER OF STUDENTS : ");
        int x = sc.nextInt();
        id = new int[x];
        date = new String[x];
        name = new String[x];
        phone = new long[x];
        bookname = new String[x];
        author = new String[x];
        no = new long[x];
        copy = new int[x];
        bdate = new String[x];
        ret = new int[x];
        days = new int[x];

        for(int i=0;i<x;i++)
        {
            sL();
            input(i);
            sL();
        }
        StudentReadingHabbit ob = new StudentReadingHabbit(x,id,date,name,phone,bookname,author,no,copy,bdate,ret,days);
        flag=1;
        ob.returned();

        do{
            try
            { 
                System.out.println("1. DISPLAY STUDENT DATABASE");
                System.out.println("2. DISPLAY BOOKS ISSUED FROM LIBRARY");
                System.out.println("3. DISPLAY READING HABBITS OF STUDENTS");
                System.out.println("4. EXIT");
                System.out.print("\nYOUR CHOICE : ");
                ch = sc.next().charAt(0);
                switch(ch)
                {
                    // case '1':
                            
                    //     break;
                    case '1':
                            if(flag==1)
                            {
                            sL();
                            System.out.println("\n\t\t\t\t\t STUDENT DATABASE\n");
                            sL();
                            ob.displays();
                            }
                            else
                            System.out.println("FIRST ENTER DATA INTO DATABASE");
                        break;
                    case '2':
                            if(flag==1)
                            {
                            sL();
                            System.out.println("\n\t\t\t\t\t BOOK DATABASE\n");
                            sL();
                            ob.display();
                            }
                            else
                            System.out.println("FIRST ENTER DATA INTO DATABASE");
                        break;
                    case '3':
                            if(flag==1)
                            {
                                sL();
                                System.out.println("\n\t\t\t\t\t READING HABBIT\n");
                                sL();
                                ob.habbit();
                            }
                            else
                            System.out.println("FIRST ENTER DATA INTO DATABASE");
                        break;

                    case '4': 
                            System.out.println("\n\t\t\t\t\t EXITING THE PROGRAM");
                            sL();
                        break;

                    default: System.out.println("\nINVALID INPUT!!\nCHOOSE BETWEEN 1,2,3,4."); 
                }//SWITCH
            }catch (Exception e)
            {
                sL();
                System.out.println("\nINVALID INPUT!!");
                System.out.println("YOU ARE BEING DIRECTED TO MAIN MENU\n");
                sL();
            }//catch
        }while(ch!='4');
        sL();
        System.out.println("\n\t\t\t\t\t END OF LAB CIA 2\n");
        sL();
            
        

    }//MAIN
}//main class

class Student
{
    int stu_id[],x;
    String stu_name[],dob[];
    long stu_phone[];

    static void sL()
    {
        System.out.println("--------------------------------------------------------------------------------------------------------");
    }//sl

    Student(int x,int id[],String date[],String name[],long phone[])
    {
        this.x =x;
        stu_id = new int[x];
        dob = new String[x];
        stu_name = new String[x];
        stu_phone = new long[x];
        for(int i=0;i<x;i++)
        {
        stu_id[i] =id[i];
        dob[i] = date[i];
        stu_name[i] = name[i];
        stu_phone[i] = phone[i];
        }
    }
    void displays()
    {
        sL();
        //System.out.println("class1");
        for(int i=0;i<x;i++)
        {
        System.out.println("\nSTUDENT ID\t\t:\t"+stu_id[i]);
        System.out.println("STUDENT NAME\t\t:\t"+stu_name[i]);
        System.out.println("STUDENT DATE OF BIRTH\t:\t"+dob[i]);
        System.out.println("STUDENT PHONE NUMBER\t:\t"+stu_phone[i]);
        sL();
        }
    }

}//class student

class Book extends Student
{
    int no_of_copies[],fineamt[],ret[],rdays[],num[],x;
    String booktitle[],pri_author[],b_date[];
    long issn[];
    static void sL()
    {
        System.out.println("--------------------------------------------------------------------------------------------------------");
    }//sl

    Book(int x,int id[],String date[],String name[],long phone[],String bookname[],String author[],long no[],int copy[],String bdate[],int ret[],int days[])
    {
        super(x,id,date,name,phone);
        this.x = x;
        booktitle = new String[x];
        pri_author = new String[x];
        issn = new long[x];
        no_of_copies = new int[x];
        b_date = new String[x];
        this.ret = new int[x];
        rdays = new int[x];
        num = new int[x];
        fineamt = new int[x];

        for(int i =0;i<this.x;i++)
        {   
        booktitle[i] = bookname[i];
        pri_author[i] = author[i];
        issn[i] = no[i];
        no_of_copies[i] = copy[i];
        b_date[i]=bdate[i];
        this.ret[i]=ret[i];
        rdays[i]=days[i];
        fineamt[i]=0;
        num[i]=1;
        }

    }
    int borrow(int y)
    {
        int a,b;
        // for(int i=0;i<x;i++)
        // {
            a = stu_id[y];
            b=0;
            for(int j=0;j<this.x;j++)
            {
                
                if(a==stu_id[j] && ret[j]==0)
                b++;
            }
            //System.out.println("BOOKS BORROWED BY STUDENT "+(i+1)+" (ID : "+(stu_id[i])+" ) : "+b);
        //}
        return(b);
    }
    void returned()
    {
        for(int i=0;i<this.x;i++)
        {
            
            num[i]=borrow(i);
            if(rdays[i]!=0 && rdays[i]>15)
            fineamt[i]=(rdays[i]-15);
        }
    }
    void display()
    {
        sL();
       // System.out.println("class2");
        for(int i=0;i<this.x;i++)
        {
        System.out.println("\nSTUDENT ID\t\t:\t"+stu_id[i]);
        System.out.println("STUDENT NAME\t\t:\t"+stu_name[i]);
        System.out.println("BOOK NAME\t\t:\t"+booktitle[i]);
        System.out.println("AUTHOR NAME\t\t:\t"+pri_author[i]);
        System.out.println("ISSN NUMBER\t\t:\t"+issn[i]);
        System.out.println("COPIES AVAILABLE\t:\t"+no_of_copies[i]);
        if(ret[i]==1)
        {
        System.out.println("RETURN STATUS\t\t:\tYES");
        System.out.println("FINE TO BE PAID\t\t:\tRs. "+fineamt[i]);
        }
        else
        System.out.println("RETURN STATUS\t\t:\tNO");
        System.out.println("NUMBER OF BOOKS ISSUED BY SAME STUDENT\t:  "+num[i]);
        sL();
        }
    }


}//class book

class StudentReadingHabbit extends Book
{
    int x;
    StudentReadingHabbit(int x,int id[],String date[],String name[],long phone[],String bookname[],String author[],long no[],int copy[],String bdate[],int ret[],int days[])
    {
        super(x,id,date,name,phone,bookname,author,no,copy,bdate,ret,days);
        this.x=x;
    }
    void habbit()
    {
        //System.out.println("class3");
        for(int i=0;i<this.x;i++)
        {
            System.out.println("\nSTUDENT "+(i+1));
            System.out.println("\nSTUDENT ID\t:\t"+stu_id[i]);
            System.out.println("STUDENT NAME\t:\t"+stu_name[i]);
            if(num[i]>=8)
            System.out.println("READING HABBIT\t:\tGOOD");
            else if(num[i]<8 && num[i]>4)
            System.out.println("READING HABBIT\t:\tAVERAGE");
            else if(num[i]<=4)
            System.out.println("READING HABBIT\t:\tPOOR");
            sL();
        }
        
    }
}//class StudentReadingHabbit

