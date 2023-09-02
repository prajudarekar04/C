//Frame4 - Colors & a new button for close
import java.awt.*;
import java.awt.event.*;

class Frm4 extends Frame implements ActionListener
{
	Button b1,b2;
	Color cr;
	Frm4()
	{
		super("Color");
		b1=new Button("Color");
		b2=new Button("Exit");
		
		b1.addActionListener(this);
		b2.addActionListener(this);
		
		setLayout(null);	//cancellition of default borderLayer manager

		b1.setBounds(50,100,100,20);	//column,row,width,height
		b2.setBounds(200,100,100,20);	//column,row,width,height
		add(b1);
		add(b2);
		setSize(350,220);
		setVisible(true);
	}
	public void actionPerformed(ActionEvent e)	//actionPerformed is ActionListener's method - generated action get copied to ActionEvent e
	{
		Button bx=(Button)(e.getSource());
		if(bx==b2)
			System.exit(0);
		else
		{
			int a=(int)(Math.random()*255);	//for red
			int b=(int)(Math.random()*255);	//for green
			int c=(int)(Math.random()*255);	//for blue
			cr=new Color(a,b,c);
			setBackground(cr);
		}
	}
	public static void main(String[]args)
	{
		Frm4 a=new Frm4();
	}
}