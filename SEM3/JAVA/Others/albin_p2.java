import java.io.*;
public class albin_p2
{
	public static void main(String args[])throws IOException
	{
		int ch,ch1,ch2,ch3;
		char ans,ans1,ans2;
		System.out.println("\n\t\t--WELCOME TO CHRIST UNIVERSITY--");
		do
		{
		System.out.println("--------------------------------------------------------------");
		System.out.println("\n\t\tINTERVIEW REGISTERATION AND RE EXAMAMINATION PROCEDURES");
		System.out.println("\t\t-------------------------------------------------------\n");
		System.out.println("Press 1 TO PRESS TO KNOW MORE ABOUT REGISTERATION AND RE-EXAM PROCEDURES");
		System.out.println("Press 2 TO FIND OUT VARIOUS EVENTS HAPPENING IN CAMPUS");
		System.out.println("Press 3 TO EXIT.");
		System.out.println("--------------------------------------------------------------");
		System.out.println("ENTER YOUR CHOISE ");
		InputStreamReader r=new InputStreamReader(System.in); 
		BufferedReader br=new BufferedReader(r);
		ch=Integer.parseInt(br.readLine());
		switch(ch)
		{	
			case 1:
				System.out.println("\n\t\tPatient-type");
				System.out.println("--------------------------------------------------------------");
				System.out.println("Press 1 IF YOU TO KNOW THE PROCEDURE TO ATTEND AN INTERVIEW");
				System.out.println("Press 2 IF YOU WAN TO KNOW THE PROCEDURE TO ATTEN A RE-EXAM");
				System.out.println("--------------------------------------------------------------");
				System.out.println("ENTER YOUR CHOISE: ");
				ch1=Integer.parseInt(br.readLine());
				switch(ch1)
				{
					case 1:
					    System.out.println("--------------------------------------------------------------");
						System.out.println("\n\t\t---INTERVIEW---");
						System.out.println("REGISTERATION AMOUNT: RS 500");
						System.out.println("BLOCK TO VISIT - 3RD BLOCK");
						System.out.println("\n\t\tDETAILS TO CARRY-");
						System.out.println("*10TH AND PU BOARD MARKS CARD AND CERTIFICATES");
						System.out.println("*DEGREE CERTIFICATES WITH EACH SEMESTER PROJECTS");
						System.out.println("*10TH AND PU BOARD CERTIFICATES");
						System.out.println("*AUTHORISED GOVERNMENT ID");
						System.out.println("--------------------------------------------------------------");


						break;
					case 2:
					System.out.println("--------------------------------------------------------------");
					System.out.println("\n\t\t---RE-EXAMINTAION---");
					System.out.println("1.WRITE A MAIL TO XXX@GAMIL.COM OR FILL FORN NUMBER 28 AND SUBMIT IN THE OFFICE");	
				    System.out.println("2.PAY THE FOLLOWING AMOUNT FOR RESPECTD DISCIPLINE YOU BELONG TO");
				    System.out.println("SCIENCE DIVISION RS:300 FOR EACH SUBJECT");
				    System.out.println("COMMERCE DIVISION RS:250 EACH SUBJECT");
				    System.out.println("ART DIVISION RS:200 EACH SUBJECT");
				    System.out.println("3.YOU WILL RECIEVE A CONFIRMATION MAIL AFTER REGISTERATION");

						break;
				}
				break;
			case 2:
				do
				{
				System.out.println("\n\t\tCURRENT EVENTS");
				System.out.println("--------------------------------------------------------------");
				System.out.println("Press 1 IF YOU WANT TO REGISTER FOR FITNES COMPETETION");
				System.out.println("Press 2 IF YOU WANT TO ENTER THE MUSIC CLUB");
				System.out.println("Press 3 IF YOU WANT TO TAKE PART IN DANCE CLUB");
				System.out.println("Press 4 IF YOU WANT TO BE PART OF STUDENTS COUNCIL");
				System.out.println("--------------------------------------------------------------");
				System.out.println("ENTER YOUR CHOISE: ");
				ch2=Integer.parseInt(br.readLine());
				switch(ch2)
				{
					case 1:

                        System.out.println("--------------------------------------------------------------");
                        System.out.println("\n\t\tFITNESS COMPETETION"); 
						System.out.println("GIVE THE FOLLOWING INFORMATION");
						System.out.println("MENTION YOUR WEIGHT IN KG:");
						double lpower=Double.parseDouble(br.readLine());
						System.out.println("MENTION YOUR HEIGHT IN CM:");
						double rpower=Double.parseDouble(br.readLine());
						if(lpower >=45 && rpower >=140)
							System.out.println("YOU ARE FIT FOR THE COMPETETION");
						else
						{
							do
							{
							System.out.println("You have to undergo treatment");
							System.out.println("\n------------------------------------------------------------------");
							System.out.println("\nWould you wish to undergo treatment(Y/N)?");
							ans2=br.readLine().charAt(0);
							} while(ans2 == 'y' || ans2 == 'Y');
							System.out.println("\n\t\tTreatment");
							System.out.println("--------------------------------------------------------------");
							System.out.println("Press 1  IF YOU WANT TO NOW THE SCHEDULES OF THE FITNESS CLASS");
							System.out.println("Press 2 IF YOU WANT TO TAKE TRAINING FOR NEXT COMPETETION");
							System.out.println("Press 3 IF YOU WANT TO BE PART OF THE SUPPORT CREW");
							System.out.println("--------------------------------------------------------------");
							System.out.println("ENTER YOUR CHOICE: ");
							ch3=Integer.parseInt(br.readLine());
							switch(ch3)
							{
				 				case 1:		
									System.out.println("\n\t\tFITNESS COMPETETION");
									System.out.println("MORNING:9-11 AM \n EVENING: 4-6PM");
									System.out.println("\n\t\tWE WILL BE HAPPYTO WELCOME YOU");
									break;
								case 2:    

									System.out.println("PLEASE ENTER YOU WEIGHT TO CHECK YOUR ELIGIBILITY");
									int weight=Integer.parseInt(br.readLine());
									if(weight>=40)
										System.out.println("YOU ARE ELIGIBLE \n PLEASE APPLY");
									else
										System.out.println("YOU ARE NOT ELIGIBLE PLEASE ATTEND THE TAINING PROGRAM");		
								
										break;
								case 3:
									System.out.println("PLEASE CONTACT OUR SUPPORT LEADER IN OUR OFFICE ");
									
								break;
						}
				}
						break;
					case 2:
						System.out.println("\n\t\tWELCOME TO TO MUSIC CLUB");
						System.out.println(" TO JOIN THE MUSIC CLUB PLEASE FILL FORM 81 AND SUBMIT IN THE OFFICE");
						System.out.println(" TO APPLY ONLINE PLEASE MAIL US AT XXXXXMUSIC@GMAIL.COM");
						System.out.println("\n\t\tWE WILL BE HAPPY TO WELCOME");
						break;
					case 3:
					    System.out.println("\n\t\tWELCOME TO TO DANCE CLUB");
						System.out.println(" TO JOIN THE MUSIC CLUB PLEASE FILL FORM 80 AND SUBMIT IN THE OFFICE");
						System.out.println(" TO APPLY ONLINE PLEASE MAIL US AT XXXXXDANCE@GMAIL.COM");
						System.out.println("\n\t\tWE WILL BE HAPPY TO WELCOME");
						break;
					case 4:
						System.out.println("\n\t\tWELCOME TO TO STUDENT COUNCIL");
						System.out.println(" TO JOIN THE MUSIC CLUB PLEASE FILL FORM 85 N  SUBMIT IN THE OFFICE");
						System.out.println(" TO APPLY ONLINE PLEASE MAIL US AT @GMAIL.COM");
						System.out.println("\n\t\tWE WILL BE HAPPY TO WELCOME");
						break;
					default:
						System.out.println("Invalid Option\nPlease select the correct option to go further");
				}
				System.out.println("\n------------------------------------------------------------------");
				System.out.println("\nWould you like to continue(Y/N)?\n");
				ans1=br.readLine().charAt(0);
				} while(ans1 == 'y' || ans1 == 'Y');
				break;
			case 3:
				System.out.println("You chose to exit: ");				
				break;
			default:
				System.out.println("Invalid Option\nPlease select the correct option to go further");
		}
		System.out.println("\n------------------------------------------------------------------");
		System.out.println("\nWould you like to go back to Menu(Y/N)?\n");
		ans=br.readLine().charAt(0);
		} while(ans == 'y' || ans == 'Y');
	}
}