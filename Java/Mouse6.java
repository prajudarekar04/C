import java.awt.*;
import java.awt.event.*;

class Mouse6 extends Frame implements MouseListener, MouseMotionListener
{
	int x,y,w,h,flg;
	Mouse6()
	{
		super();
		flg=0;
		addMouseListener(this);
		addMouseMotionListener(this);
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
			w=0; h=0;
	}
	public void mouseClicked(MouseEvent e){}
	public void mouseReleased(MouseEvent e)
	{
		repaint();
	}
	public void mouseEntered(MouseEvent e){}
	public void mouseExited(MouseEvent e){}
	public void mouseMoved(MouseEvent e){}
	public void mouseDragged(MouseEvent e)
	{
		w=e.getX()-x;
		h=e.getY()-y;
		repaint();
	}
	public void paint(Graphics g)
	{
		g.setXORMode(Color.WHITE);
		g.drawRect(x,y,w,h);
	}
	public static void main(String[]args)
	{
		Mouse6 a=new Mouse6();
	}
}