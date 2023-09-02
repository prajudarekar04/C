import java.awt.*;
import java.awt.event.*;

class Mouse2 extends Frame implements MouseListener
{
	int x,y;
	String str="";
	Mouse2()
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
		x=e.getX();
		y=e.getY();
		str="Pressed";
		repaint();
	}
	public void mouseClicked(MouseEvent e)
	{
		x=e.getX();
		y=e.getY();
		str="Clicked";
		repaint();
	}
	public void mouseReleased(MouseEvent e)
	{
		x=e.getX();
		y=e.getY();
		str="Released";
		repaint();
	}
	public void mouseEntered(MouseEvent e)
	{
		x=100;
		y=100;
		str="Entered";
		repaint();
	}
	public void mouseExited(MouseEvent e)
	{
		x=100;
		y=100;
		str="Exited";
		repaint();
	}
	public void paint(Graphics g)
	{
		g.drawString(str,x,y);
	}
	public static void main(String[]args)
	{
		Mouse2 a=new Mouse2();
	}
}