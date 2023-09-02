import java.awt.*;
import java.awt.event.*;

class Mouse4 extends Frame implements MouseListener
{
	int x,y;
	Mouse4()
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
	public void mousePressed(MouseEvent e){}
	public void mouseClicked(MouseEvent e)
	{
		x=e.getX();
		y=e.getY();
		draw();
	}
	public void mouseReleased(MouseEvent e){}
	public void mouseEntered(MouseEvent e){}
	public void mouseExited(MouseEvent e){}
	public void paint(Graphics g){}
	void draw()
	{
		Graphics g=getGraphics();
		g.setColor(new Color((int)(Math.random()*255),(int)(Math.random()*255),(int)(Math.random()*255)));
		g.drawRect(x,y,20,20);
	}
	public static void main(String[]args)
	{
		Mouse4 a=new Mouse4();
	}
}