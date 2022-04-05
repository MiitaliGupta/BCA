//2041064_VIDHI_CIA1_LABEXAM.java
import java.io.*;
import java.util.regex.Pattern; 
import java.util.regex.Matcher;
import java.util.Calendar;


public class vd_cia1
{
	public static boolean isValidDate(String d)
    {
        String regex = "^(1[0-2]|0[1-9])/(3[01]"
                       + "|[12][0-9]|0[1-9])/[0-9]{4}$";
        Pattern pattern = Pattern.compile(regex);
        Matcher matcher = pattern.matcher((CharSequence)d);
        return matcher.matches();
    }
	
	public static void s1()
	{
		System.out.println("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
	}
	
	public static void s2()
	{
		System.out.println("______________________________________________________________________");
	}
    public static void main(String argrs[])throws IOException
    {
	BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		{ 
			int Pat_ID,diagnosed_issue;
			String Pat_name, Dname, dateofvist;
			String special[];
			float amt;
			String Diag_Issue;
			String prob[];
			int days;
			System.out.println("\nCHOOSE THE PATIENT TYPE.\n");
			System.out.println("\nO or o : OUTPATIENT\nI or i : INPATIENT\nX or x : EXIT.\n");
			System.out.print("\nYOUR CHOICE : ");
			char Ptype=br.readLine();
			String Doc_name;
			String Diag_Issue;
			Float Doc_fee;
			String Date;
			int diagnosed_issue;
			
			switch(Ptype)
			{
				case 'O':
				case 'o':
				{
					
					int f=0;
					float fee;
					System.out.print("\nOUTPATIENT DETAILS\n");
					
					
					System.out.print("\nENTER DOCTOR'S NAME\n");
					Doc_name=br.readLine();
					System.out.print("\nDOCTOR'S FEE = 500 + diagnosed issue Fee");
					//Doc_fee=500.0;
					System.out.print("\nENTER DIAGNOSED ISSUE\n");
					System.out.println("\n1 : HYPERTENSION.\n2 : CANCER.\3 : DIABETES.\n4 : BACK PAIN.\n5 : THYROID.\n6: ANXIETY.\n7 : ASTHAMA.\n8: TUMOR.");
					diagnosed_issue=Integer.parseInt(br.readLine());
					if(diagnosed_issue==1)
					{
						Diag_Issue="HYPERTENSION";
						fee = 5000.0;
						Doc_fee= fee +500.0;
					}
					else if(diagnosed_issue==2)
					{
						Diag_Issue="CANCER";
						fee = 8000.0;
						Doc_fee= fee +500.0;
					}
					else if(diagnosed_issue==3)
					{
						Diag_Issue="DIABETES";
						fee = 7000.0;
						Doc_fee= fee +500.0;
					}
					else if(diagnosed_issue==4)
					{
						Diag_Issue="BACK PAIN";
						fee = 3000.0;
						Doc_fee= fee +500.0;
					}
					else if(diagnosed_issue==5)
					{
						Diag_Issue="THYROID";
						fee = 5000.0;
						Doc_fee= fee +500.0;
					}
					else if(diagnosed_issue==6)
					{
						Diag_Issue="ANXIETY";
						fee = 4000.0;
						Doc_fee= fee +500.0;
					}
					else if(diagnosed_issue==7)
					{
						Diag_Issue="ASTHAMA";
						fee = 5000.0;
						Doc_fee= fee +500.0;
					}
					else if(diagnosed_issue==8)
					{
						Diag_Issue="TUMOR";
						fee = 10000.0;
						Doc_fee= fee +500.0;
					}
					
					System.out.print("\nENTER DATE OF VISIT IN THE FORMAT MM/DD/YYYY   :");
					Date=br.readLine();
					while(f=0)
					{
					if (isValidDate(Date)) 
					{
						f=1;
					}
					else    
					{   
						f=0;			
						System.out.println(Date+ " is an invalid date. Try Again!");
					} 
					}
					
					
					
				}
				break;
				
				case 'I':
				case 'i':
				{
					System.out.println("\nINPATIENT DETAILS\n");
					System.out.print("\nENTER DOCTOR'S NAME\n");
					Doc_name=br.readLine();
					System.out.print("\nENTER THE NO. OF DAYS ADMITTED\n");
					ndays=Integer.parseInt(br.readLine());
					System.out.print("\nDOCTOR'S FEE = 500 + diagnosed issue Fee");
					System.out.print("\nENTER DIAGNOSED ISSUE\n");
					System.out.println("\n1 : HYPERTENSION.\n2 : CANCER.\3 : DIABETES.\n4 : BACK PAIN.\n5 : THYROID.\n6: ANXIETY.\n7 : ASTHAMA.\n8: TUMOR.");
					System.out.print("\nyour choice.");
					diagnosed_issue=Integer.parseInt(br.readLine());
					if(diagnosed_issue==1)
					{
						Diag_Issue="HYPERTENSION";
						fee = 5000.0;
						Doc_fee= fee +500.0;
					}
					else if(diagnosed_issue==2)
					{
						Diag_Issue="CANCER";
						fee = 8000.0;
						Doc_fee= fee +500.0;
					}
					else if(diagnosed_issue==3)
					{
						Diag_Issue="DIABETES";
						
					}
					else if(diagnosed_issue==4)
					{
						Diag_Issue="BACK PAIN";
						
					}
					else if(diagnosed_issue==5)
					{
						Diag_Issue="THYROID";
					
					}
					else if(diagnosed_issue==6)
					{
						Diag_Issue="ANXIETY";
					
					}
					else if(diagnosed_issue==7)
					{
						Diag_Issue="ASTHAMA";
					
					}
					else if(diagnosed_issue==8)
					{
						Diag_Issue="TUMOR";
						
					}
					
					System.out.print("\nENTER SPECIALIZATION.\n");
					String special[]={"1. Cardiology.","2. Corneal Transplant.","3. General Surgery.","4. Infectious Diseases.","5. In-Vitro Fertilisation (IVF).","6. Laboratory Medicine.","7. Liver Transplant.","8. Hepatic Surgery.","9. Medical Gastroenterology"};
					int choice,fee;
					System.out.print("\nyour choice.");
					choice = Integer.parseInt(br.readLine());
					if(choice==0)
					{
						Diag_Issue="Cardiology";
						fee = 5000.0*ndays;
						Doc_fee= fee +500.0;
					}
					else if(choice==0)
					{
						Diag_Issue="Corneal Transplant.";
						fee = 5000.0*ndays;
						Doc_fee= fee +500.0;
					}
					else if(choice==0)
					{
						Diag_Issue="General Surgery.";
						fee = 8000.0*ndays;
						Doc_fee= fee +500.0;
					}
					else if(choice==0)
					{
						Diag_Issue="In-Vitro Fertilisation (IVF).";
						fee = 7000.0*ndays;
						Doc_fee= fee +500.0;
					}
					else if(choice==0)
					{
						Diag_Issue="Laboratory Medicine.";
						fee = 3000.0*ndays;
						Doc_fee= fee +500.0;
					}
					else if(choice==0)
					{
						Diag_Issue="Liver Transplant.";
						fee = 5000.0*ndays;
						Doc_fee= fee +500.0;
					}
					else if(choice==0)
					{
						Diag_Issue="Hepatic Surgery.";
						fee = 4000.0*ndays;
						Doc_fee= fee +500.0;
					}
					else if(choice==0)
					{
						Diag_Issue="Medical Gastroenterology";
						fee = 5000.0*ndays;
						Doc_fee= fee +500.0;
					}
				
					System.out.println("Name of the Patient = " + Pat_name);
					System.out.println("Name of the Doctor  = " + Dname);
					System.out.println("Patient ID          = " + Pat_ID);
					System.out.println("Doctor fees         = " + Dname);
					System.out.println("Diagnosed Issue     = " + Diag_Issue);
					System.out.println("Specialization     = " + special[choice]);
					
					
					
				}
				break;
				
				case 'X':
				case 'x':
				{
					System.exit(0);
				}
				break;
				
				default:
				{
					System.out.println("Invalid Input!");
					
				}
				break;
            }
        }
    }
}


public class GoodHealth
{
	
	int Pid;
	String Pname;
	String Ptype;
	String Doc_name;
	String Diag_Issue;
	Float Doc_fee;
	String Date;
	String specialities[];
	String problem[];
	int ndays;
	
	GoodHealth(int Pat_ID, String Pat_name, String Dname, String dateofvist)
	{
		//outpatient
		int Pid=Pat_ID;
		String Pname[] = Pat_name;
		String Doc_name[] = Dname;
        String problem[] = prob;
        String Date = dateofvisit;
	}
	
	GoodHealth(int Pat_ID, String Pat_name, String Dname, String special[], float amt, float Diag_Issue,String prob[], int days)
	{
		//inpatient
		int Pid=Pat_ID;
		String Pname[] = Pat_name;
		String Doc_name[] = Dname;
        //String specialities[] = String special[];
        String problem[] = prob;
        int ndays = days;
	}
	
	
}

