import java.awt.*;
import java.awt.event.*;

class Mouse5 extends Frame implements MouseListener
{
	int x,y,w,h,flg;
	Mouse5()
	{
		super();
		flg=0;
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
	public void mousePressed(MouseEvent e){}
	public void mouseClicked(MouseEvent e)
	{//2pt. selection method
		if(flg==0)
		{
			x=e.getX();
			y=e.getY();
			w=0; h=0;
			flg=1;
		}
		else
		{
			w=e.getX()-x;
			h=e.getY()-y;
			flg=0;
			draw();
		}
	}
	public void mouseReleased(MouseEvent e){}
	public void mouseEntered(MouseEvent e){}
	public void mouseExited(MouseEvent e){}
	public void paint(Graphics g){}
	void draw()
	{
		Graphics g=getGraphics();
		g.setColor(new Color((int)(Math.random()*255),(int)(Math.random()*255),(int)(Math.random()*255)));
		g.drawRect(x,y,w,h);
	}
	public static void main(String[]args)
	{
		Mouse5 a=new Mouse5();
	}
}