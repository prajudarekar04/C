//Frm9 - WindowListener,ActionListener
import java.awt.*;
import java.awt.event.*;
import mypkg.Util;
class Frm9 extends Frame implements WindowListener,ActionListener
{
	Label l1,l2,l3;
	TextField t1,t2,t3;
	Button b1,b2;
	Frm9()
	{
		super("WindowListener");
		l1=new Label("No");
		l2=new Label("Name");
		l3=new Label("Marks");
		t1=new TextField(10);
		t2=new TextField(30);
		t3=new TextField(10);
		b1=new Button("OK");
		b2=new Button("CLEAR");
		b1.addActionListener(this);
		b2.addActionListener(this);
		setLayout(new GridLayout(4,2,5,5));
		add(l1);add(t1);
		add(l2);add(t2);
		add(l3);add(t3);
		add(b1);add(b2);
		addWindowListener(this);
		setSize(400,400);
		setVisible(true);
	}
	public void windowOpened(WindowEvent e)
	{
		System.out.println("Opened");
	}
	public void windowClosed(WindowEvent e)
	{
		System.out.println("Closed");
	}
	public void windowClosing(WindowEvent e)
	{
		System.exit(0);
	}
	public void windowActivated(WindowEvent e)
	{
		System.out.println("Activated");
	}
	public void windowDeactivated(WindowEvent e)
	{
		System.out.println("Deactivated");
	}
	public void windowIconified(WindowEvent e)
	{
		System.out.println("Iconified");
	}
	public void windowDeiconified(WindowEvent e)
	{
		System.out.println("Deiconified");
	}
	public void actionPerformed(ActionEvent e)
	{
		Button b=(Button)e.getSource();
		if(b==b1)
		{
			int no=0;
			try
			{
				no=Integer.parseInt(t1.getText());
			}
			catch(Exception e1){ t1.requestFocus();return;}
			if(no<=0)
			{
				t1.requestFocus();return;
			}
			String str="roll no:"+t1.getText()+"\n name:"+t2.getText()+"\n marks"+t3.getText();
			Util.display(str);
		}
		t1.setText(" ");
		t2.setText(" ");
		t3.setText(" ");
		t1.requestFocus();
	}
	public static void main(String args[])
	{
		Frm9 f=new Frm9();
	}
}
