import java.io.*;
import java.Util;
import mypkg.Student;
import mypkg.Util;
class StudentAMD
{
	Student obj;
	LinkedList<Student>ls;
	StudentAMD()
	{
		ls=new LinkedList<Student>();
		obj=null;
	}
	void open()
	{
		FileInputStream fis=null;
		ObjectInputStream ois=null;
		try
		{
			fis=new FileInputStream("stu.dat");
			ois=new ObjectInputStream(fis);
			ls=(LinkedList<Student>)
			  ois.readObject();
			  ois.close();
			  fis.close();
		}
		catch(Exception e){}
	}
	void save()
	{
		FileOutputStream fos=null;
		ObjectOutputStream oos=null;
		try
		{
			fos=new FileOutputStream("stu.dat");
			oos=new ObjectOutputStream(fos);
			oos.writeObject(ls);
	        	oos.close();
			fos.close();
		}
		catch(Exception e){}
	}
     	boolean search(int no)
	 {
		 int i=0,n=ls.size();
		 while(i<n)
		 {
			 obj=(Student)ls.get(i);
			 if(obj.getNo()==no)
				 break;
			 i++;
		 }
		 if(i==n)
			 return false;
		 else
			 return true;
	 }
	 void add()
	 {
		 int no=Util.iInput("Roll no:");
		 if(search(no)==true)
		 {
			 Util.display("Record exists");
		     return;
		 }
		 obj=new Student();
		 obj.setData(no);
		 ls.add(obj);
	 }
	 void modify()
	 {
   		int no=Util.iInput("Roll no:");
		 if(search(no)==false)
		 {
			 Util.display("Record not exists");
		     return;
		 }
		
		 obj.setData(no);
	 }
	 void del()
	 {
		 int no=Util.Input("Roll no");
		 if(search(no)==false)
		 {
			 Util.display("Record not exists");
			 return;
		 }
		 ls.remove(obj);
	 }
	void displayAll()
	{
		int i=0,n=ls.size();
		while(i<n)
		{
			obj=(Student)ls.get(i);
			obj.display();
			i++;
		}
	}
	void menu()
	{
		String[]choice=new String[]{"Add","Mod","Del","Display","Exit"};
		open();
		while(true)
		{
			int opt=Util.oInput("Choose Option","Menu",choice);
			if(opt==4)
				break;
			switch(opt)
			{
				case 0:
					add();
					break;
				case 1:
					mod();
					break;
				case 2:
					del();
					break;
				case 3:
					displayAll();
					break;
			}
			save();
		}
	}
	public static void main(String[]args)
	{
		StudentAMD a=new StudentAMD();
		a.menu();
	}
}
	