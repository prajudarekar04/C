//Frm13 - Dialogue based
import java.awt.*;
import java.awt.event.*;
import mypkg.Util;
class CityDialog extends Dialog implements ActionListener
{
	Label lid,lnm;
	TextField tid,tnm;
	Button b1,b2;
	CityDialog(Frame frm,String title,boolean state)
	{
		super(frm,title,state);
		lid=new Label("ID:");
		lnm=new Label("City Name:");
		tid=new TextField(10);
		tnm=new TextField(30);
		b1=new Button("Ok");
		b2=new Button("Back");
		b1.addActionListener(this);
		b2.addActionListener(this);
		setLayout(new GridLayout(3,2,5,5));
		add(lid);add(tid);
		add(lnm);add(tnm);
		add(b1);add(b2);
		setSize(300,400);
	}
	public void actionPerformed (ActionEvent e)
	{
		Button b=(Button)e.getSource();
		if(b==b1)
		{
			String s="City Id:"+tid.getText()+"City Name:"+tnm.getText();
			Util.display(s);
		}
		setVisible(false);
	}
}
class Frm13 extends Frame implements ActionListener
{
	Button b1;
	CityDialog obj;
	Frm13()
	{
		super("Dialog");
		obj=new CityDialog(this,"City Data",true);
		b1=new Button("City Details");
		b1.addActionListener(this);
		setLayout(null);
		b1.setBounds(100,100,100,20);
		add(b1);
		setSize(300,220);
		setResizable(false);
		addWindowListener(new WindowAdapter()
		{
			public void WindowClosing(WindowEvent e)
			{
				System.exit(0);
			}
		});
		setVisible(true);
	}
	public void actionPerformed (ActionEvent e)
	{
		obj.setVisible(true);
	}
	public static void main(String[]args)
	{
		Frm13 a=new Frm13();
	}
}