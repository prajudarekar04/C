//
import java.io.*;
import java.awt.*;
import java.awt.event.*;

class TF1 extends Frame implements Runnable
{
	int x, y;
	Color cr;
	Thread th;
	TF1()
	{
		super("Thread");	// naming to thread object
		th = new Thread(this);
		setSize(400,400);
		addWindowListener(new WindowAdapter()
		{
			public void windowClosing(WindowEvent e)
			{
				System.exit(0);
			}
		});
		setVisible(true);
		th.start();
	}
	public void run()
	{
		Graphics g = getGraphics();
		while(true)
		{
			x = (int) (Math.random()*400) ;
			y = (int) (Math.random()*400) ;
			int a = (int) (Math.random()*255) ;
			int b = (int) (Math.random()*255) ;
			int c = (int) (Math.random()*255) ;
			cr = new Color(a,b,c);
			g.setColor(cr);
			g.drawOval(x,y,20,20);
			try
			{
				Thread.sleep(500);
			}catch(Exception e){}
		}
	}
	public static void main(String[] args)
	{
		TF1 a = new TF1();
	}
}