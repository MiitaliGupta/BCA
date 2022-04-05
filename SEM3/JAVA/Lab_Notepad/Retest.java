import java.util.*;
abstract class Students
{
    public String name,address;
    public int id,age;
    public double grade;

    Students(String n,String add,int id,int age,double grade)
    {
        name = n;
        address = add;
        this.id = id;
        this.age = age;
        this.grade = grade;
    }

    abstract boolean isPassed(double grade);
    abstract void show(int a);
}//student
final class Undergrad extends Students
{

    Undergrad(String n, String add, int id, int age, double grade) 
    {
        super(n, add, id, age, grade);
    }

    @Override
    boolean isPassed(double grade) 
    {
        if(grade>70.0)
        return true;
        else
        return false;
    }
    @Override
    void show(int a)
    {
        System.out.println("\nName\t: "+name);
        System.out.println("Address\t: "+address);
        System.out.println("Age\t: "+age);
        System.out.println("Grade\t: "+grade);
        if(a==1)
        System.out.println("Result\t: Passed");
        else
        System.out.println("Result\t: Failed");
    }


}//undergrad
final class Postgrad extends Students
{

    Postgrad(String n, String add, int id, int age, double grade)
     {
        super(n, add, id, age, grade);
    }

    @Override
    boolean isPassed(double grade) 
    {
        if(grade>80.0)
        return true;
        else
        return false;
    }
    @Override
    void show(int a)
    {
        System.out.println("\nName\t: "+name);
        System.out.println("Address\t: "+address);
        System.out.println("Age\t: "+age);
        System.out.println("Grade\t: "+grade);
        if(a==1)
        System.out.println("Result\t: Passed");
        else
        System.out.println("Result\t: Failed");
    }

}//Postgrad

public class Retest
{
    static void start()
    {
        System.out.println("\n____________________________________________________________________________________________");
    }
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        Undergrad ob1 = null;
        Postgrad ob2 = null;

        String name="",add="";
        int id=0,age=0;
        double grade=0.0;
        boolean flag;
        char ch='\0';
        do{
            try
            {
                start();
                System.out.print("\n\t\t\t\tCHOOSE STUDENT GRAD TYPE");
                start();
                System.out.println("\n1. UNDERGRAD STUDENT");
                System.out.println("2. POSTGRAD STUDENT");
                System.out.println("3. EXIT");
                System.out.print("YOUR CHOICE : ");
                ch = sc.next().charAt(0);

                if(ch=='1'||ch=='2')
                {
                    System.out.println("\nEnter Details of the Student");
                    System.out.print("\nName : ");
                    name = sc.next();
                    System.out.print("Address : ");
                    add = sc.next();
                    System.out.print("Age : ");
                    age = sc.nextInt();
                    System.out.print("Id : ");
                    id = sc.nextInt();
                    System.out.print("Grade : ");
                    grade = sc.nextInt();
                }

                switch(ch)
                {
                    case '1':
                            ob1 = new Undergrad(name,add,id,age,grade);
                            flag = ob1.isPassed(grade);
                                start();
                                System.out.print("\n\t\t\t\tResult of Undergrad Student");
                                start();
                            if(flag==true)
                            ob1.show(1);
                            else
                            ob1.show(0);

                        break;

                    case '2':
                            ob2 = new Postgrad(name,add,id,age,grade);
                            flag = ob2.isPassed(grade);
                                start();
                                System.out.print("\n\t\t\t\tResult of Postgrad Student");
                                start();
                            if(flag==true)
                            ob2.show(1);
                            else
                            ob2.show(0);

                        break;

                    case '3':
                        System.out.println("\n\t\t\t\tEnd of Program");
                        break;

                    default :
                        System.out.println("Invalid Input.\nChoose Among 1,2 & 3.");
                }//switch
            }//try
            catch(Exception e)
            {
                System.out.println("Invalid Input\nYou are being directed to the main menu");
            }
        }while(ch!='3');

        sc.close();
    }
}
