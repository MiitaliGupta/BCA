import java.util.*;
public class shivanshi_p2
{
    static int i,c1,c2,c3,n;
    static String[] name=new String[50];
    static int[] id=new int[50];
    static int[] marks1 = new int[50];
    static int[] marks2 = new int[50];
    static char[] res = new char[50];
    static int[] total=new int[50];
    static float[] per =new float[50];
    Scanner sc = new Scanner(System.in);

    public void input(int m)
    {
        for(i=0;i<m;i++)
        {
            System.out.println("Enter ID of student" +(++i));
            id[i] = sc.nextInt();

            System.out.println("Enter name of student" +(++i));
            name[i] = sc.next();
            System.out.println("Enter marks1 of student" +(++i));
            marks1[i] = sc.nextInt();
            System.out.println("Enter marks2 of student" +(++i));
            marks2[i] = sc.nextInt();
        }
    }

    public void display(int m)
    {
        int a;
        for( i =0; i< m;i++)
            {

                total[i] = marks1[i]+marks2[i];
                per[i]= (total[i]/200)*100;
                if(total[i]> 100)
                    {
                        res[i] = 'P';
                    }
                    else
                    {
                        res[i] = 'F';
                    } 
            }
        System.out.println("Press 1 to display the result of a particular student");
        System.out.println("Press 2 to display the result of a all the students");
        System.out.println("Enter your choice");
        c1 = sc.nextInt();
        switch(c1)
        {
            case '1':
                System.out.println("Enter the ID of the student. \tTotal students=" +m);
                a = sc.nextInt();
                System.out.println("ID   "+"\tNAME   "+"\tMARKS1    "+"\tMARKS2  "+"\tTOTAL(200) "+"\tPERCENTAGE \n");
                System.out.println(id[m]+"\t\t "+name[m]+"\t\t "+marks1[m]+"\t "+marks2[m]+"\t\t"+total[m]+"\t\t"+per[m]+"\n");
                System.out.println("\t\t\t\t\t\t\tResult");
                System.out.println("\t\t\t\t\t\t\t"+res[m]);

            break;
            case '2':
                for(i=0;i<m;i++)
                {
                    System.out.println("ID   "+"\tNAME   "+"\tMARKS1    "+"\tMARKS2  "+"\tTOTAL(200) "+"\tPERCENTAGE \n");
                    System.out.println(id[i]+"\t\t "+name[i]+"\t\t "+marks1[i]+"\t "+marks2[i]+"\t\t"+total[i]+"\t\t"+per[i]+"\n");  
                    System.out.println("\t\t\t\t\t\t\tResult");
                    System.out.println("\t\t\t\t\t\t\t"+res[i]);
                }
            break;
        }
    }

    public static void main(String args[])
    {
        //int n,c2,c3;
        Scanner sc = new Scanner(System.in);
        shivanshi_p2 obj = new shivanshi_p2();
        do
        {
                System.out.println("\t\t STUDENT DETAILS");
                System.out.println("Enter 1 for Christ University");
                System.out.println("Enter 2 for Jain University");
                System.out.println("Enter 3 to exit");
                System.out.println("Enter your choice");
                c2 = sc.nextInt();
                switch(c2)
                {
                    case 1:
                    System.out.println(" Christ University");
                    System.out.println("Enter 1 for Computer Science Department");
                    System.out.println("Enter 2 for Bussiness Department");
                    System.out.println("Enter your choice");
                    c3=sc.nextInt();
                    switch(c3)
                    {
                        case 1:
                        System.out.println(" \t\t\tChrist University");
                        System.out.println("\t\tComputer Science Department");
                        System.out.println("Enter the number of students");
                        n = sc.nextInt();
                        obj.input(n);
                        obj.display(n);
                        break;

                        case 2:
                        System.out.println(" \t\t\tChrist University");
                        System.out.println("\t\tBussiness Department");
                        obj.input(n);
                        obj.display(n);
                        break;
                    }break;

                    case 2:
                    System.out.println("\t\t\tJain University");
                    System.out.println("\t\t\tComputer Science Department");
                    obj.input(n);
                    obj.display(n);
                    break;

                    case 3:
                    System.out.println("\t\tThank you !!!");
                    break;

                    default:
                    System.out.println("invalid option!!! choose between 1 and 2");
                }
        }while(c2!=3);
    }
}

