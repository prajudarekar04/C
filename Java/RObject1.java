//Read Object(RObject)
import java.io.*;
import mypkg.Student;
import mypkg.Util;
class RObject1
{
	public static void main(String[]args)
	{
		FileInputStream fis= null;
		ObjectInputStream ois=null;
		Student s=null;
		try
		{
			fis=new FileInputStream("Student.dat");
			ois=new ObjectInputStream(fis);
		}
		catch(Exception e){}
		while(true)
		{
			try
			{
				s=(Student)ois.readObject();
			}
			catch(Exception e){break;}
			s.display();
		}
		try
		{
			fis.close();
			ois.close();
		}
		catch(Exception e)
	}
}
