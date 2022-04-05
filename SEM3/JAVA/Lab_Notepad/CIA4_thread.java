class Reserve implements Runnable{
    int available = 1 ;
    int wanted;

    Reserve()
    {
        wanted = 1;
    }

    synchronized public void run()
    {
        
        String name =Thread.currentThread().getName();
        if(available >= wanted)
        {
            System.out.println("SEAT(S) AVAILABLE\t: "+available);
            System.out.println("\n");
            System.out.println(name+"\t:\t"+wanted +" Seat reserved" );

            try{
                Thread.sleep(1500);
                available = available - wanted;
            }

            catch (InterruptedException e)
            {
                System.out.println("Error in Thread Syncronisation");
            }
        }

        else
        System.out.println("\n"+name+"\t:\tSorry, No seats Available, Better Luck Next Time!\n");
    }
}

class CIA4_thread
{
    static void sL()
    {
        System.out.println("______________________________________________________________________________________________\n");
    }
        public static void main(String[] args) 
        {
            Reserve obj = new Reserve();

            Thread t1=new Thread(obj);
            Thread t2=new Thread(obj);

            t1.setName("First Person");
            t2.setName("Second Person");
            sL();
            System.out.println("\t\t\t\t\tSPICE JET");
            sL();
            System.out.println("\nFROM\t:\tBANGALORE");
            System.out.println("TO\t:\tDELHI\n");
            t1.start();
            t2.start();
            
        }//void main
}//main class