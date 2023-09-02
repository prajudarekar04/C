//Frm7 - WindowListener, ActionListener
import java.awt.*;
import java.awt.event.*;

class Frm7 extends Frame implements WindowListener, ActionListener
{
	Label l1, l2;
	TextField t1, t2;
	Button b1, b2;
	Frm7()
	{
		super("Window Listener");
		l1 = new Label("No");
		l2 = new Label("Name");
		t1 = new TextField(10);
		t2 = new TextField(30);
		b1 = new Button("OK");
		b2 = new Button("CLEAR");
		b1.addActionListener(this);
		b2.addActionListener(this);
		setLayout(new GridLayout(3, 2, 5, 5));
		add(l1);
		add(t1);
		add(l2);
		add(t2);
		add(b1);
		add(b2);
		addWindowListener(this);
		setSize(400, 400);
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
		System.out.println("Activeted");
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
	public void actionPerformed(ActionEvent e) {}
	public static void main(String[] args)
	{
		Frm7 a = new Frm7();
	}
}