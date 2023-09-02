//Interfce Declare - in mypkg
package mypkg;
import java.io.*;
import mypkg.Util;
import mypkg.DataIO;
public class Book implements Serializable, DataIO
{
	int no;
	String nm;
	public Book()
	{
		no=0;
		nm= new String();
	}
	public String toString()
	{
		String s="\nBook No.:"+no+"\nName:"+nm;
		return s;
	}
	public void display()
	{
		Util.display(toString());
	}
	public int getNo()
	{
		return no;
	}
	public String getNm()
	{
		return nm;
	}
	public void setData(int n)
	{
		no=n;
		nm=Util.sInput("Name");
	}
	public void setData()
	{
		no=Util.iInput("No");
		nm=Util.sInput("Name");
	}
}
