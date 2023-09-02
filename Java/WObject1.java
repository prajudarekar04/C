// Write Object(WObject)
import java.io.*;
import mypkg.Student;
import mypkg.Util;
class WObject1
{
	public static void main(String[]args)throws Exception
	{
		FileOutputStream fos= new FileOutputStream("Student.Dat");
		ObjectOutputStream oos=new ObjectOutputStream(fos);
		int no=0;
		while(true)
		{
			no=Util.iInput("Enter RollNo:");
			if(no==0)
				break;
			Student s=new Student();
			s.setData(no);
			oos.writeObject(s);
		}
		fos.close();
		oos.close();
	}
}
