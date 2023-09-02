import java.io.*;
import mypkg.Util;
class WPData
{
	public static void main(String[]args)
	{
		DataOutputStream dos=null;
		FileOutputStream fos=null;
		int no=0;
		String nm=null;
		Double mrk=0.0;
		try
		{
			fos=new FileOutputStream("Result.dat");
			dos=new DataOutputStream(fos);
		}
		catch(Exception e){}
		while(true)
		{
			no=Util.iInput("Enter Roll No.:");
			if(no==0)	break;
			nm=Util.sInput("Enter Name:");
			mrk=Util.dInput("Enter Marks:");
			try
			{
				dos.writeInt(no);
				dos.writeUTF(nm);
				dos.writeDouble(mrk);
			}
			catch(Exception e){}
		}
		try
		{
			dos.close();
			fos.close();
		}
		catch(Exception e){}
	}
}