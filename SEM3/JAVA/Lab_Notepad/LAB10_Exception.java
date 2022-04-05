import java.io.*;
import java.util.*;

class InvalidMenuChoice extends Exception
{
    public InvalidMenuChoice() 
    {
        System.out.print("\n INVALID INPUT, CHOOSE FROM 1 to 4: ");
    }
}//CUSTOM EXCEPTION 1

class InvalidQty extends Exception 
{
    public InvalidQty(String message) 
    {
        super(message);
    }
}//CUSTOM EXCEPTION 2

class P10AClass 
{

    String[] menuArray;
    int[][] priceArray;

    public P10AClass(String welcomeMessage) 
    {
        System.out.println(welcomeMessage);
    }

    public int pets() throws InvalidMenuChoice, IOException 
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int mainMenu = 0;
        System.out.print("\n WHAT PET WOULD YOU LIKE?\n 1. SELECT A DOGS\n 2. SELECT A CATS\n 3. LET'S BUY 'EM!!\n 4. EXIT\n YOUR CHOICE : ");
        do {
            try {
                mainMenu = Integer.parseInt(br.readLine());
                if(mainMenu < 1 || mainMenu > 4)
                    throw new InvalidMenuChoice();
                }//TRY BLOCK
                catch (InvalidMenuChoice e) 
                {
                    //CUSTOM EXCEPTION 1
                }
        }while(mainMenu < 1 || mainMenu > 4);
        System.out.println("--------------------------------------------------------------------------------------------");
        return mainMenu;
    }//MAIN MENU CHOICE

    public int menuDisplay(String[] menuArray, int[][] priceArray) throws IOException 
    {
		int choice = 0;
		System.out.println("\n BREED\t\t\t\t|\t\tPRICE\t\t|\t\tQUANTITY LEFT\n ----\t\t\t\t|\t\t-----\t\t|\t\t-------------");
		for(int i = 0; i < 4; i++) 
        {
			if(i < 2)
				System.out.println(" "  + (i + 1) + ") " + menuArray[i] + "\t\t\t|\t\t" + priceArray[i][0] + "\t\t|\t\t\t" + priceArray[i][1]);
			else
				System.out.println(" "  + (i + 1) + ") " + menuArray[i] + "\t\t\t|\t\t" + priceArray[i][0] + "\t\t|\t\t\t" + priceArray[i][1]);
		}//for
        choice = takeOrder(menuArray);
		return choice;
	}//menuDisplay

    public int takeOrder(String[] menuArray) throws IOException 
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int order = 0;
        try {
            System.out.print("\n What would you like to order(1-4): ");
            order = Integer.parseInt(br.readLine());
            order--;
            String demo =  menuArray[order];
        }
        catch(ArrayIndexOutOfBoundsException e) {
            order = takeOrder(menuArray);
            //INBUILT EXCEPTION 1
        }
        return order;
    }//To choose the breed

    public int inputQty(String[] menuArray, int[][] priceArray, int menuChoice) throws IOException, InvalidQty 
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int qty = 0;
        if(priceArray[menuChoice][1] == 0)
			System.out.println(" WE HAVE 0 " + menuArray[menuChoice] + ", CHOOSE ANOTHER PET.");
		else 
        {
			System.out.print(" ENTER QUANTITY: ");
			do 
            {
                try 
                {
                    qty = Integer.parseInt(br.readLine());
                    if(qty < 1)
                        throw new InvalidQty(" YOU NEED TO ORDER ATLEAST 1 QUANTITY : ");
                    if(qty > priceArray[menuChoice][1]) {
                        String message = " WE ONLY HAVE " + priceArray[menuChoice][1] + " "  + menuArray[menuChoice] +  " IN STOCK, SELECT QUANTITY ACCORDINGLY : ";
                        throw new InvalidQty(message);
                    }
                }//try
                catch(InvalidQty e) 
                {
                    System.out.print(e.getMessage());
                    //CUSTOM EXCEPTION 2
                }//catch
			}while(qty < 1 || qty > priceArray[menuChoice][1]);
		}//else
        System.out.println("--------------------------------------------------------------------------------------------");
		return qty;
	}//to choose qty

    public int displayBill(int billNo, int finalPrice, int finalQty) 
    {
        try{
            int demo = 2/finalQty;
            int counter = (int)(Math.random()*10);
            System.out.println("\t\t\t\t  YOUR BILL\n\t\t\t\t  ---------\n ORDER I'D : " + billNo + "\n TOTAL BILL: RS. " + finalPrice + "\n TOTAL QUANTITY : " + finalQty + "\n\n YOU CAN COLLECT YOUR PET(s) FROM COUNTER "  + counter + "\n\t THANK YOU, VISIT AGAIN!");
            return 3;
            }//try
            catch(ArithmeticException e) {
                System.out.println("\n YOU NEED TO CHOOSE ATLEAST 1 PET TO BUY.");
                return 1;
                //INBUILT EXCEPTION 2
            }//catch 
            finally {
                System.out.println("--------------------------------------------------------------------------------------------");
            }
    }//displayBill
}//P10AClass

public class LAB10_Exception extends P10AClass 
{

    public LAB10_Exception(String welcomeMessage) 
    {
        super(welcomeMessage);
    }

    public static void main(String args[]) throws IOException, InvalidMenuChoice, InvalidQty 
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String[] dog = {"PITBULL", "LABRADOR", "HUSKY", "POODLE"};
	    int[][] dogPrice = {{10000, 3}, {12000, 10}, {15000, 5}, {11000, 0}};
        String[] cat = {"PERSIAN", "SIAMESE", "MUNCHKIN", "BENGAL"};
	    int[][] catPrice = {{6000, 4}, {10000, 10}, {13000, 2}, {12000, 1}};
        int menuChoice = 0, sMenuChoice = 0, qty = 0, totalQty = 0, totalAmount = 0;

        LAB10_Exception class2 = new LAB10_Exception("--------------------------------------------------------------------------------------------\n\t\t\t\t  WELCOME TO ANIMAL ALCOVE");

        do{
            menuChoice = class2.pets();
            switch(menuChoice) 
            {
                case 1: sMenuChoice = class2.menuDisplay(dog, dogPrice);
                        qty = 0;
                        qty = class2.inputQty(dog, dogPrice, sMenuChoice);
                        if(qty > 0) 
                        {
					    	dogPrice[sMenuChoice][1] -= qty;
					    	totalAmount = totalAmount + (qty * dogPrice[sMenuChoice][0]);
					    	totalQty += qty;
					    }
                        break;

                case 2: sMenuChoice = class2.menuDisplay(cat, catPrice);
                        qty = 0;
                        qty = class2.inputQty(cat, catPrice, sMenuChoice);
                        if(qty > 0) 
                        {
					    	catPrice[sMenuChoice][1] -= qty;
					    	totalAmount = totalAmount + (qty * catPrice[sMenuChoice][0]);
					    	totalQty += qty;
					    }
                        break;

                case 3: menuChoice = class2.displayBill(102, totalAmount, totalQty);
                        break;

                case 4: break;
            }//switch
        }while(menuChoice < 3);
        System.out.println("\n\n\t\t\t\tEND OF LAB 10\n");
    }//MAIN
}//MAIN CLASS