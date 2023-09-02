//
import java.io.*;
import java.awt.*;
import java.awt.event.*;


class Thread5 extends Thread
{
	int x, y;
	Graphics g;
	Color cr;
	Thread5(Graphics g)
	{
		super();
		this.g = g;
		start();
	}
	public void run()
	{
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
}

class Thread6 extends Thread
{
	int x, y;
	Graphics g;
	Color cr;
	Thread6(Graphics g)
	{
		super();
		this.g = g;
		start();
	}
	public void run()
	{
		while(true)
		{
			x = (int) (Math.random()*400) ;
			y = (int) (Math.random()*400) ;
			int a = (int) (Math.random()*255) ;
			int b = (int) (Math.random()*255) ;
			int c = (int) (Math.random()*255) ;
			cr = new Color(a,b,c);
			g.setColor(cr);
			g.drawRect(x,y,20,20);
			try
			{
				Thread.sleep(800);
			}catch(Exception e){}
		}
	}
}

class Thread7 extends Thread
{
	int x, y;
	Graphics g;
	Color cr;
	Thread7(Graphics g)
	{
		super();
		this.g = g;
		start();
	}
	public void run()
	{
		while(true)
		{
			x = (int) (Math.random()*400) ;
			y = (int) (Math.random()*400) ;
			int a = (int) (Math.random()*255) ;
			int b = (int) (Math.random()*255) ;
			int c = (int) (Math.random()*255) ;
			cr = new Color(a,b,c);
			g.setColor(cr);
			g.drawString("Prajakta",x,y);
			try
			{
				Thread.sleep(1200);
			}catch(Exception e){}
		}
	}
}

public class TF2 extends Frame implements Runnable
{
	Thread5 t5;
	Thread6 t6;
	Thread7 t7;
	Thread th;
	TF2()
	{
		super("Thread");	// naming to thread object
		addWindowListener(new WindowAdapter()
		{
			public void windowClosing(WindowEvent e)
			{
				System.exit(0);
			}
		});
		setSize(400,400);
		th = new Thread(this);
		setVisible(true);
		th.start();
		tbegin();
	}
	public void run()
	{
		while(true)
		{
			try
			{
				Thread.sleep(8000);
			}catch(Exception e){}
			repaint();
		}
	}
	void tbegin()
	{
		t5 = new Thread5 (getGraphics());
		t6 = new Thread6 (getGraphics());
		t7 = new Thread7 (getGraphics());
	}
	public static void main(String[] args)
	{
		TF2 a = new TF2();
	}
}