//Hierarchical inheritance
//use of abstract
//ShapeDimension -1)Rect 2)Trang
import javax.swing.*;

abstract class ShapeDimension
{
	int w,h;
	ShapeDimension()
	{
		w=h=0;
	}
	ShapeDimension(int a,int b)
	{
		w=a;
		h=b;
	}
	void setDimension()
	{
		try
		{
			w=Integer.parseInt(JOptionPane.showInputDialog(null,"Width"));
			h=Integer.parseInt(JOptionPane.showInputDialog(null,"Height"));
		}
		catch(Exception e){}
	}
	abstract void area();
	public String toString()
	{
		String a="\nWidth:"+w+"\nHeight:"+h;
		return a;
	}
}
class Rect extends ShapeDimension
{
	Rect()
	{
		super();
	}
	Rect(int a,int b)
	{
		super(a,b);
	}
	void area()
	{
		String s=super.toString()+"\nArea:"+(w*h);
		JOptionPane.showMessageDialog(null,s);
	}
}
class Trang extends ShapeDimension
{
	Trang()
	{
		super();
	}
	Trang(int a,int b)
	{
		super(a,b);
	}
	void area()
	{
		String s=super.toString()+"\nArea:"+(w*h)/2;
		JOptionPane.showMessageDialog(null,s);
	}
}
public class AbstractDemo
{
	public static void main(String[] args)
	{
		ShapeDimension a = new Rect(10,15);
		a.area();
		a= new Trang();
		a.setDimension();
		a.area();
	}
}