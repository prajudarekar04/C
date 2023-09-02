//File Handling
//Program to creat a file using byte stream classes.(Using Util pkg)
import mypkg.Util;
import java.io.*;
class WFile2
{
	public static void main(String[]args)throws Exception
	{
		FileOutputStream fos=new FileOutputStream("message.dat");
		byte[]b=null;
		while(true)
		{
			String str=Util.sInput("Message");
			if(str.equals("bye"))
				break;
			b=str.getBytes();
			fos.write(b);
		}
		fos.close();
	}
}