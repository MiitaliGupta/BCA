// import java.io.*;
// import java.util.*;

abstract class Students
{
    public String name;
    public int id;

    abstract boolean isPassed(double grade);

}
final class Postgrads extends Students
{
    boolean flag;
    boolean isPassed(double grade)
    {
        if(grade>80.0)
        {
            flag=true;
            //System.out.println("Student has passed");
        }
        else
        {
            flag=false;

            //System.out.println("Student has not passed");
        }
        return flag;
    }

}
final class Undergrads extends Students
{
    boolean flag;
    boolean isPassed(double grade)
    {
        //super.isPassed(double grade);
        if(grade>70.0)
        {
            flag=true;
            //System.out.println("Student has passed");
        }
        else
        {
            flag=false;

            //System.out.println("Student has not passed");
        }
        return flag;
    }
}

class Copy
{

    public static void main()
    {
        boolean flag2,flag3;
        Postgrads obj=new Postgrads();
        flag2=obj.isPassed(60.0);
        if(flag2==true)
        {
            System.out.println("Student has passed");
        }
        else
        {
            System.out.println("Student has not passed");
        }

        Undergrads obj1=new Undergrads();
        flag3=obj1.isPassed(60.0);
        if(flag3==true)
        {
            System.out.println("Student has passed");
        }
        else
        {
            System.out.println("Student has not passed");
        }
    }

}

