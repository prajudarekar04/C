//(Using Thread)
import java.awt.*;
import java.awt.event.*;

public class BouncingBall extends Frame implements ActionListener
{
	Button b1, b2;
	Panel p, q;
	
	public BouncingBall()
	{
		super("Bouncing ball");
		b1 = new Button("new obj");
		b2 = new Button("exit");
		b1.addActionListener(this);
		b2.addActionListener(this);
		p = new Panel();
		p.add(b1);
		p.add(b2);
		add(p, BorderLayout.SOUTH);
		q = new Panel();
		add(q, BorderLayout.CENTER);
		setSize(400,300);
		setVisible(true);
	}
	
	public void actionPerformed(ActionEvent e)
	{
		Button b = (Button)e.getSource();
		if(b == b2)
			System.exit(0);
		else
			Ball a = new Ball(q);
	}
	
	public static void main(String[]args)
	{
		BouncingBall bb = new BouncingBall();
	}
}

class Ball extends Thread
{
	Panel Box;
	static final int w = 10;
	static final int h = 10;
	int x, y;
	int tx, ty;
	Color cr;
	public Ball(panel b)
	{
		super();
		Box = b;
        	x = 0;
		tx = 2 ;
		ty = 2 ;
        	y = (int)(Math.random()*300);
	        cr = new Color((int)(Math.random()*255),(int)(Math.random()*255),(int)(Math.random()*255));
		start();
	}
	public void run()
	{
		while(true)
		{
			move();
			try
			{
				Thread.sleep(10);
			}
			catch(Exception e){}
		}
	}
	void move()
	{
		Graphics g = Box.getGraphics();
        	g.setColor(Color.WHITE);
        	g.fillOval(x,y,w,h);
        	x += tx;
		y += ty;
		g.setColor(cr);
        	g.fillOval(x,y,w,h);
	        if(x < 0)
        	{
        	    x = 0;
        	    tx =- tx;
        	}
        	if(x + w >= 400)
        	{
        		x = 400 - w;
        		tx =- tx;
	        }
        	if(y < 0)
        	{
        		y = 0;
        		ty =- ty;
        	}
		if(y + h >= 300)
		{
			y = 300 - h;	
			ty =- ty;
		}
	}
}