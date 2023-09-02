import java.awt.*;
import java.awt.event.*;

class Mouse3 extends Frame implements MouseListener
{
	int x,y;
	Mouse3()
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
		repaint();
	}
	public void mouseClicked(MouseEvent e)
	{
		x=e.getX();
		y=e.getY();
		repaint();
	}
	public void mouseReleased(MouseEvent e)
	{
		x=e.getX();
		y=e.getY();
		repaint();
	}
	public void mouseEntered(MouseEvent e)
	{
		x=100;
		y=100;
		repaint();
	}
	public void mouseExited(MouseEvent e)
	{
		x=100;
		y=100;
		repaint();
	}
	public void paint(Graphics g)
	{
		g.drawRect(x,y,20,20);//x,y,w,h
	}
	public static void main(String[]args)
	{
		Mouse3 a=new Mouse3();
	}
}