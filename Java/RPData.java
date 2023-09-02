import java.io.*;
import mypkg.Util;
class RPData
{
	public static void main(String[]args)
	{
		DataInputStream dis=null;
		FileInputStream fis=null;
		int no=0;
		String nm=null;
		Double mrk=0.0;
		try
		{
			fis=new FileInputStream("Result.dat");
			dis=new DataInputStream(fis);
		}
		catch(Exception e){}
		while(true)
		{
			try
			{
				no=dis.readInt();
				nm=dis.readUTF();
				mrk=dis.readDouble();
			}
			catch(Exception e){break;}
			String s="\nRoll No.:"+no+"\nName:"+nm+"\nMarks"+mrk;
			Util.display(s);
		}
		try
		{
			dis.close();
			fis.close();
		}
		catch(Exception e){}
	}
}