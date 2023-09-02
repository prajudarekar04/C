//File Handling in Java.
//using character strings
import java.io.*;
class WFile3
{
	public static void main(String[]args)throws Exception
	{
		int val=0;
		FileWriter fw=new FileWriter("F3.txt");
		while(true)
		{
			System.out.println("Type Character:");
			System.in.skip(5);
			val=System.in.read();
			if((char)val=='*')
				break;
			fw.write(val);
		}
		fw.close();
	}
}