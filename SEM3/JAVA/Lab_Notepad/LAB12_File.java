import java.io.*;
//import java.io.FileOutputStream; 
//import java.io.FileInputStream;
 
  class FileOutputStreamExample //TO WRITE INTO THE FILE
   {  
     static String name,ph_num;

     void sL()
    {
        System.out.println("--------------------------------------------------------------------------------------------------------");
    }//sl

     void CustomerDetails(String animal,String breed)throws IOException
       {    
           
             InputStreamReader r=new InputStreamReader(System.in);
             BufferedReader br=new BufferedReader(r);
             File file = new File("OurCustomers.txt");
             //FileOutputStream fout=new FileOutputStream("OurCustomers.txt");
             RandomAccessFile fout = new RandomAccessFile(file, "rwd");

            sL();
            System.out.println("\n\t\t\t\t\t\tENTER CUSTOMER DETAILS");
            sL();
             System.out.print("Enter Name:");
             name=br.readLine();
             System.out.print("Enter Phone Number:");
             ph_num=br.readLine(); 
             
             String s1="\n\nNAME\t\t:\t";
             String s2="\nCONTACT NO.\t:\t";
             String s3="\nANIMAL\t\t:\t";
             String s4="\nBREED\t\t:\t";
             String s5= "\n";

             long size = file.length();
             fout.seek(size-1);

             byte a[]=s1.getBytes(); 
             byte b[]=name.getBytes(); 
             byte c[]=s2.getBytes(); 
             byte d[]=ph_num.getBytes();
             byte e[]=s3.getBytes(); 
             byte f[]=animal.getBytes(); 
             byte g[]=s4.getBytes(); 
             byte h[]=breed.getBytes();
             byte i[]=s5.getBytes();

             fout.write(a);
             fout.write(b); 
             fout.write(c); 
             fout.write(d);
             fout.write(e);
             fout.write(f); 
             fout.write(g); 
             fout.write(h);
             fout.write(i);

   
             fout.close();    
         
        }    
    }  

   class FileInputStreamExample //TO READ FROM THE FILE
{  
    int animal,breed;
    void sL()
    {
        System.out.println("--------------------------------------------------------------------------------------------------------");
    }//sl

    void menu()throws IOException
    {
        InputStreamReader r=new InputStreamReader(System.in);
        BufferedReader br=new BufferedReader(r);
         
        FileInputStream fin=null;
        
        int content;
        try
        {
            sL();
            System.out.println("\n\t\t\t\t\t\tANIMAL ALCOVE");
            sL();
            System.out.println("\n1. DOGS");
            System.out.println("2. CAT");
            System.out.println("3. RABBITS");
            System.out.print("Your Choice : ");
            animal=Integer.parseInt(br.readLine());
            switch(animal)
            {
                case 1 :
                    fin = new FileInputStream("dogs.txt");

                    while ((content = fin.read()) != -1) 
                    {
                        System.out.print((char)content);
                    }

                    System.out.print("\nYour Choice: ");
                    breed=Integer.parseInt(br.readLine());
                    break;
                case 2 :
                    fin = new FileInputStream("cats.txt");
                    
                    while ((content = fin.read()) != -1) 
                    {
                        System.out.print((char)content);
                    }

                    System.out.print("\nYour Choice: ");
                    breed=Integer.parseInt(br.readLine());
                    break;
                case 3 :
                    fin = new FileInputStream("rabbits.txt");
                    
                    while ((content = fin.read()) != -1) 
                    {
                        System.out.print((char)content);
                    }

                    System.out.print("\nYour Choice: ");
                    breed=Integer.parseInt(br.readLine());
                    break;
                default:
                    System.out.println("Invalid Input");   

            }//switch
        }
        catch(IOException e)
        {
            System.out.println("INVALID INPUT");   
        }
        finally
        {
            fin.close();
        }

           
    }//menu

    void Details()
    {  
        FileInputStream fin= null;
        try
        {
        fin=new FileInputStream("OurCustomers.txt");
        int content;    
        sL();
        System.out.println("\n\t\t\t\t\t\tANIMAL ALCOVE");
        sL();
        while ((content = fin.read()) != -1) 
        {
            System.out.print((char)content);
        }
        fin.close();
        }
        catch(Exception e)
        {
            System.out.println("INVALID INPUT"); 
        }
        finally
        {
            //fin.close();
        }

      }    
}//FileInputStreamExample   

public class LAB12_File
{
       static int ch;
       static String animal,breed;

       static void sL()
        {
            System.out.println("\n--------------------------------------------------------------------------------------------------------");
        }//sl
       public static void main(String args[])throws IOException
        {
                InputStreamReader r=new InputStreamReader(System.in);
                BufferedReader br=new BufferedReader(r);

                FileOutputStreamExample f1=new FileOutputStreamExample();
                FileInputStreamExample f2=new FileInputStreamExample();
            do
            {
                try{
                sL();
                System.out.println("\n\t\t\t\tWELCOME TO ANIMAL ALCOVE");
                sL();
                System.out.println("1...SELECT PET");
                System.out.println("2...ENTER THE CUSTOMER DETAILS");
                System.out.println("3...DISPLAY DETAILS OF ALL CUSTOMERS");
                System.out.println("4...EXIT");
                System.out.print("\nYour Choice: ");
                ch=Integer.parseInt(br.readLine());
                switch(ch)
                {
                    case 1:
                    //FileOutputStreamExample f=new FileOutputStreamExample();
                    f2.menu();
                    switch(f2.animal)
                    {
                        case 1:
                        
                            animal="Dog";
                            switch(f2.breed)
                            {
                                case 1:
                                        breed =  "German Sheperd";
                                        break;
                                case 2:
                                        breed =  "Labrador";
                                        break;
                                case 3:
                                        breed =  "Pug";
                                        break;
                                case 4:
                                        breed =  "Indian Mastiff";
                                        break;
                                case 5:
                                        breed =  "Husky";
                                        break;
                            }//dogs
                            
                        break;
                        case 2:
                        
                            animal="Cat";
                            switch(f2.breed)
                            {
                                case 1:
                                        breed =  "Persian";
                                        break;
                                case 2:
                                        breed =  "Maine Coon";
                                        break;
                                case 3:
                                        breed =  "Siamese";
                                        break;
                                case 4:
                                        breed =  "Munchkin";
                                        break;
                                case 5:
                                        breed =  "British Shorthair";
                                        break;
                            }//cata
                        break;
                        case 3:
                        
                            animal="Rabbit";
                            switch(f2.breed)
                            {
                                case 1:
                                        breed =  "Rex";
                                        break;
                                case 2:
                                        breed =  "Flemish Giant";
                                        break;
                                case 3:
                                        breed =  "English Spot";
                                        break;
                                case 4:
                                        breed =  "American Fuzzy Lop";
                                        break;
                                case 5:
                                        breed =  "Golden Glavcot";
                                        break;
                            }//rabbits
                        break;

                    }//animals
                    break;

                    case 2:
                    f1.CustomerDetails(animal,breed);
                    break;

                    case 3:
                    f2.Details();
                    break;

                    case 4:
                    break;

                    default:
                    System.out.println("Invalid Input\nChoose between 1-4");

                }
                }
                catch(Exception e)
                {
                    System.out.println("INVALID INPUT\nRedirecting to Main Menu");
                }
            } while(ch!=4);
            System.out.println("\n\n\t\t\t\tEND OF LAB 12\n");
    }
}

