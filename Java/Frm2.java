//Frame2 - Colors
import java.awt.*;
import java.awt.event.*;

class Frm2 extends Frame
{
	Frm2(String s)
	{
		super(s);
		int r=(int)(Math.random()*255);	//red
		int g=(int)(Math.random()*255);	//green
		int b=(int)(Math.random()*255);	//blue
		Color cr=new Color(r,g,b);
		setBackground(cr);
		setSize(400,400);
		setResizable(false);
		setVisible(true);
	}
	public static void main(String[]args)
	{
		Frm2 a=new Frm2("Color");
	}
}