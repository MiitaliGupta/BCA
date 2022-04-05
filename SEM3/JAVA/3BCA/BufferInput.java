import java.io.*;
class BufferInput
{
	public static void main(String args[])throws IOException
	{
		//InputStreamReader r = new InputStreamReader(System.in);
		//BufferedReader br = new BufferedReader(r);
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter your Class: ");
		String classname=br.readLine();
		System.out.println("Welcome "+classname+ " !");
	}
}

