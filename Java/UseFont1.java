//Font class

import java.awt.*;
import java.awt.event.*;
//import java.io.*;
//import mypkg.Util;

class UseFont1 extends Frame
{
	Font f;
	UseFont1()
	{
		super("UseFont1");
		f = new Font(Font.SERIF,Font.PLAIN,20);
		setSize(400,400);
		setVisible(true);
	}
	public void paint(Graphics g)
	{
		g.setFont(f);
		g.setColor(Color.RED);
		g.drawString("Welcome",100,100);		
	}
	public static void main(String[] args)
	{
		UseFont1 a=new UseFont1();
	}
}