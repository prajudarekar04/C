//Frame3 - A new button for close
import java.awt.*;
import java.awt.event.*;

class Frm3 extends Frame implements ActionListener
{
	Button b1;
	Frm3(String s)
	{
		super(s);
		b1=new Button("Exit");
		b1.addActionListener(this);
		setLayout(null);	//cancellition of default borderLayer manager
		b1.setBounds(100,100,100,20);	//c,r,w,h
		add(b1);
		setSize(300,220);
		setVisible(true);
	}
	public void actionPerformed(ActionEvent e)
	{
		System.exit(0);
	}
	public static void main(String[]args)
	{
		Frm3 a=new Frm3("Button");
	}
}