//Student package using Util package of same folder
/*
Path Instruction for command Prompt:
d:\java23\mypkg>set CLASSPATH=d:\java23\;
*/
package mypkg;
import java.io.*;
import mypkg.Util;
public class Student implements Serializable
{
	int no;
	String nm;
	double mrk;
	public Student()
	{
		no=0;
		mrk=0.0;
		nm=new String();
	}
	public int getNo(){return no;}
	public String getName(){return nm;}
	public double getMarks(){return mrk;}
	public String toString()
	{
		String s="RollNo:"+no+"Name:"+nm+"Marks:"+mrk;
		return s;
	}
	public void setData(int n)
	{
		no=n;
		nm=Util.sInput("Name");
		mrk=Util.dInput("Marks");
	}
	public void setData()
	{
		int n=Util.iInput("RollNo");
		setData(n);
	}	
	public void display()
	{
		Util.display(toString());
	}
}
/*
import java.io.*;
import mypkg.Util;
public class wStudent implements Serializable	//conversion of seuence of bytes to class object is Serialization.And De-Serialization vice-versa
//the class which has Serializable implemented, we can access the file from that class only
{
	int no;
	String nm;
	double mrk;
	public wStudent()
	{
		no=0;
		mrk=0.0;
		nm=new String();
	}
	public int getNo() {return no;}
	public String getName() {return nm;}
	public double getMarks() {return mrk;}
	public String toString()
	{
		String s="\nRoll No.:"+no+"\nName:"+nm+"\nMarks:"+mrk;
		return s;
	}
	public void setData(int n)
	{
		no=n;
		nm=Util.sInput("Name:");
		mrk=Util.dInput("Marks:");
	}
	public void setData()
	{
		int n=Util.iInput("Roll No.:");
		setData(n);
	}
	public void display()
	{
		Util.display(toString());
	}
}
*/