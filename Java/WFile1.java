//File Handling
//Program to creat a file using byte stream classes.
import java.io.*;
class WFile1
{
	public static void main(String[]args)throws Exception
	{
		FileOutputStream fos=new FileOutputStream("abc.dat");
		int no=0;
		while(true)
		{
			System.out.println("Type a character:");
			System.in.skip(5);
			no=System.in.read();
			if((char)no=='*')
				break;
			fos.write(no);
		}
		fos.close();
	}
}