//File Handling in Java.
//Program to read a file (using Character Strings).
import java.io.*;
class RFile3
{
	public static void main(String[]args)throws Exception
	{
		FileReader fr=new FileReader("F3.txt");
		int val=0;
		while(true)
		{
			val=fr.read();
			if(val==-1)
				break;
			System.out.print((char)val);
		}
		fr.close();
	}
}