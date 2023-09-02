//Frame5 - 5 new buttons for close & display
//seq-a1,a2,a3,a4,exit
//Additionally added background color
import java.awt.*;
import java.awt.event.*;
import mypkg.Util;
/*
set CLASSPATH=d:\java23\;
*/

class Frm5 extends Frame implements ActionListener
{
	Button b1,b2,b3,b4,b5;
	Color cr;
	Frm5()
	{
		super("Button");
		b1=new Button("A1");
		b2=new Button("A2");
		b3=new Button("A3");
		b4=new Button("A4");
		b5=new Button("Exit");
		
		b1.addActionListener(this);
		b2.addActionListener(this);
		b3.addActionListener(this);
		b4.addActionListener(this);
		b5.addActionListener(this);
		
		setLayout(null);	//cancellition of default borderLayer manager

		b1.setBounds(50,50,100,20);	//column,row,width,height 50,100,100,20
		b2.setBounds(200,50,100,20);	//column,row,width,height 170,100,100,20
		b3.setBounds(350,50,100,20);	//column,row,width,height 290,100,100,20
		b4.setBounds(100,120,100,20);	//column,row,width,height 140,140,100,20
		b5.setBounds(300,120,100,20);	//column,row,width,height 260,140,100,20
		add(b1);
		add(b2);
		add(b3);
		add(b4);
		add(b5);

		int r=(int)(Math.random()*255);	//for red
		int g=(int)(Math.random()*255);	//for green
		int b=(int)(Math.random()*255);	//for blue
		Color cr=new Color(r,g,b);
		setBackground(cr);
		setSize(500,190);	//Length,Breadth 380,260
		setResizable(false);
		setVisible(true);
	}
	public void actionPerformed(ActionEvent e)
	{//actionPerformed is ActionListener's method - generated action get copied to ActionEvent e
		/*
		Button bx=(Button)(e.getSource());
		if(bx==b1)
		{
			String s="A1";
			Util.display(s);
		}
		else if(bx==b2)
		{
			String s="A2";
			Util.display(s);
		}
		else if(bx==b3)
		{
			String s="A3";
			Util.display(s);
		}
		else if(bx==b4)
		{
			String s="A4";
			Util.display(s);
		}
		else	//if(bx==b5)
			System.exit(0);
		*/
		/*
		String s=getactionCommand();
		if(s.equals("Exit"))
			System.exit(0);
		else
			Util.display(s);
		*/
		//
		Button b=(Button)(e.getSource());
		if(b==b5)
			System.exit(0);
		else
			Util.display(b.getLabel());
		//
	}
	public static void main(String[]args)
	{
		Frm5 a=new Frm5();
	}
}