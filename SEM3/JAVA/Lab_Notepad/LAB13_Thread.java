
import java.util.Random;
import java.util.Scanner;

class T1 extends Thread {
    Random r = new Random();

    public int run(int rounds, int b)
     {
        int b1 = b;
        try {
            T1.sleep(400);
            b1 += r.nextInt(20);
            System.out.println("\nDog 1's course completion time\t: " + b1+" day(s)");
        } catch (Exception e) {
            System.out.println(e);
        }
        return b1;
    }

    public int getB1(int b1) 
    {
        return b1;
    }
}//Class T1

class T2 extends Thread 
{
    Random r = new Random();

    public int run(int rounds, int b2) {
        try {
            T2.sleep(500);
            b2 += r.nextInt(20);
            System.out.println("Dog 2's course completion time\t: " + b2+" day(s)");
        } catch (Exception e) {
            System.out.println(e);
        }
        return b2;
    }
}//Class T2

class T3 extends Thread
{
    Random r = new Random();

    public int run(int rounds, int b3)
     {
        try {
            T3.sleep(100);
            b3 += r.nextInt(20);
            System.out.println("Dog 3's course completion time\t: " + b3+" day(s)");
        } catch (Exception e) {
            System.out.println(e);
        }
        return b3;
    }
}//Class T3

class Rounds extends Thread 
{
    public int run(int rounds) 
    {
        try {
            Rounds.sleep(500);
            rounds += 1;
            System.out.println("\nRound finished! Current round: " + rounds);
        } catch (Exception e) {
            System.out.println(e);
        }
        return rounds;
    }
}

public class LAB13_Thread {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        T1 t1 = new T1();
        t1.setPriority(1);
        T2 t2 = new T2();
        t2.setPriority(1);
        T3 t3 = new T3();
        t3.setPriority(1);
        Rounds r = new Rounds();
        r.setPriority(2);
        int b1;
        int b2;
        int b3;
        int rounds;
        System.out.println("\n---Dog Training Centre---\n1.Start Training\n2.Exit");
        System.out.print("Your Choice : ");
        int menu = s.nextInt();
        System.out.print("How many rounds do you want to conduct for your dog? : ");
        int mrounds = s.nextInt();
        switch (menu) {
        case 1:
            b1 = 0;
            b2 = 0;
            b3 = 0;
            rounds = 0;
            while (rounds != mrounds) {
                b1 = t1.run(rounds, b1);
                b2 = t2.run(rounds, b2);
                b3 = t3.run(rounds, b3);
                rounds = r.run(rounds);
            }
            System.out.println("\nMaximum no. of days taken by each dog");
            System.out.println("Dog 1: " + b1);
            System.out.println("Dog 2: " + b2);
            System.out.println("Dog 3: " + b3);
            System.out.println("\nCongrats! training of all dogs completed in " + Math.max(Math.max(b1, b2), b3) + " days");
            break;
        case 2:
            System.out.println("Ok , thank you.");
            break;

        }
        s.close();
    }
}