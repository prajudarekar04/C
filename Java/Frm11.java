//Frm11 = Frm6
import java.awt.*;
import java.awt.event.*;
class Frm11 extends Frame
{
	Frm11()
	{
		super("Window");
		addWindowListener(new WindowAdapter()
		{
			public void WindowClosing(WindowEvent e)
			{
				System.exit(0);
			}
		});
		setSize(400,400);
		setVisible(true);
	}
	public static void main(String[]args)
	{
		Frm11 a=new Frm11();
	}
}