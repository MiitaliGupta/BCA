import java.util.*;
class CIA2
{
    int id[],date[],copy[],bdate[],ret[],days[];
    String name[],bookname[],author[];
    long phone[],no[];

    static void sL()
    {
        System.out.println("--------------------------------------------------------------------------------------------------------");
    }//sl

    static input(int y)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("STUDENT "+(y+1));
        System.out.print("ENTER STUDENT ID : ");
        id[y]=sc.nextInt();
        System.out.print("ENTER STUDENT NAME : ");
        name[y]=sc.next();
        System.out.print("ENTER STUDENT DATE OF BIRTH : ");
        date[y]=sc.nextInt();
        System.out.print("ENTER STUDENT PHONE NUMBER : ");
        phone[y]=sc.nextLong();
        System.out.print("ENTER BOOK TO BE ISSUED : ");
        bookname[y]=sc.next();
        System.out.print("ENTER AUTHOR NAME : ");
        author[y]=sc.next();
        //issn
        no[y]=(int)(Math.random()*9876543210);
        //copies of book available
        copy[y]=(int)(Math.random()*10);
        System.out.print("ENTER BORROW DATE : ");
        bdate[y]=sc.nextInt();
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
        System.out.print("ENTER NUMBER OF STUDENTS : ");
        int x = sc.nextInt();
        id[] = new int[x];
        date[] = new int[x];
        name[] = new String[x];
        phone[] = new long[x];
        bookname[] = new String[x];
        author[] = new String[x];
        no[] = new long[x];
        copy[] = new int[x];

        for(int i=0;i<x;i++)
        {
            sL();
            input(i);
            sL();
        }
        StudentReadingHabbit ob = new StudentReadingHabbit(x,id[],date[],name[],phone[],bookname[],author[],no[],copy[],bdate[],ret[],days[]);

        

    }
}//main class

class Student
{
    int stu_id[],dob[];
    String stu_name[];
    long stu_phone[];

    static void sL()
    {
        System.out.println("--------------------------------------------------------------------------------------------------------");
    }//sl

    Student(int x,int id[],int date[],String name[],long phone[])
    {
        for(int i=0;i<x;i++)
        {
        stu_id[i] =id[i];
        dob[i] = date[i];
        stu_name[i] = name[i];
        stu_phone[i] = phone[i];
        }
    }
    void display()
    {
        sL();
        for(int i=0;i<x;i++)
        {
        System.out.println("\nSTUDENT ID\t:\t"+stu_id[i]);
        System.out.println("STUDENT NAME\t:\t"+stu_name[i]);
        System.out.println("STUDENT DATE OF BIRTH\t:\t"+dob[i]);
        System.out.println("STUDENT PHONE NUMBER\t:\t"+stu_phon[i]);
        sL();
        }
    }

}//class student

class Book inherits Student
{
    int no_of_copies[],fineamt[],ret[],b_date[],rdays[],num[];
    String booktitle[],pri_author[];
    long issn[];
    static void sL()
    {
        System.out.println("--------------------------------------------------------------------------------------------------------");
    }//sl

    Book(int x,int id[],int date[],String name[],long phone[],String bookname[],String author[],long no[],int copy[],int bdate[],int ret[],int days[])
    {
        super(x,id[],date[],name[],phone[]);
        for(int i =0;i<this.x;i++)
        {   
        booktitle[i] = bookname[i];
        pri_author[i] = author[i];
        issn[i] = no[i];
        no_of_copies[i] = copy[i];
        b_date[i]=bdate[i];
        ret[i]=ret[i];
        rdays[i]=days[i];
        }

    }
    int borrow(int x)
    {
        int a,b;
        // for(int i=0;i<x;i++)
        // {
            a = stu_id[x];
            b=0;
            for(int j=0;j<x;j++)
            {
                if(a==stu_id[j])
                b++;
            }
            //System.out.println("BOOKS BORROWED BY STUDENT "+(i+1)+" (ID : "+(stu_id[i])+" ) : "+b);
        //}
        return(b);
    }
    void return()
    {
        for(int i=0;i<x;i++)
        {
            num[i]=borrow(x);
            if(rdays[i]>15)
            fineamt[i]=(rdays[i]-15);
        }



    }
    void display()
    {
        sL();
        for(int i=0;i<x;i++)
        {
        System.out.println("\nSTUDENT ID\t:\t"+stu_id[i]);
        System.out.println("STUDENT NAME\t:\t"+stu_name[i]);
        System.out.println("BOOK NAME\t:\t"+booktitle[i]);
        System.out.println("AUTHOR NAME\t:\t"+pri_author[i]);
        System.out.println("ISSN NUMBER\t:\t"+issn[i]);
        System.out.println("COPIES AVAILABLE\t:\t"+no_of_copies[i]);
        sL();
        }
    }


}//class book

class StudentReadingHabbit inherits Book
{
    StudentReadingHabbit(int x,int id,int date,String name,long phone,String bookname,String author,long no,int copy,int bdate[],int ret[],int days[])
    {
        super(x,id[],date[],name[],phone[],bookname[],author[],no[],copy[],bdate[],ret[],days[]);
    }
    void habbit()
    {
        
    }
}//class StudentReadingHabbit

