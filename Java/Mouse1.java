import java.awt.*;
import java.awt.event.*;

class Mouse1 extends Frame implements MouseListener
{
	Mouse1()
	{
		super();
		addMouseListener(this);
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
	public void mousePressed(MouseEvent e)
	{
		System.out.println("Pressed");
	}
	public void mouseClicked(MouseEvent e)
	{
		System.out.println("Clicked");
	}
	public void mouseReleased(MouseEvent e)
	{
		System.out.println("Released");
	}
	public void mouseEntered(MouseEvent e)
	{
		System.out.println("Entered");
	}
	public void mouseExited(MouseEvent e)
	{
		System.out.println("Exited");
	}
	public static void main(String[]args)
	{
		Mouse1 a=new Mouse1();
	}
}