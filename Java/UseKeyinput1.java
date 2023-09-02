import java.awt.*;
import java.awt.event.*;

class UseKeyinput1 extends Frame implements KeyListener
{
	Color bc, fc;	//background color, font color
	int size;
	Font f;
	
	UseKeyinput1()
	{
		super("UseKeyListener");
		bc = Color.WHITE;
		fc = Color.BLACK;
		addKeyListener(this);
		size =10;
		f = new Font(Font.SERIF,Font.PLAIN,size);
		addWindowListener(new WindowAdapter()
		{
			public void windowClosing(WindowEvent e)
			{
				System.exit(0);
			}
		});
		setSize(400,400);
		setVisible(true);
	}
	public void paint(Graphics g)
	{
		f  = new Font(Font.SERIF,Font.PLAIN,size);
		g.setFont(f);
		g.setColor(fc);
		setBackground(bc);
		g.drawString("Welcome",100,100);		
	}
	public void keyTyped(KeyEvent e){}
	public void keyReleased(KeyEvent e){}
	public void keyPressed(KeyEvent e)
	{
		if(e.getKeyCode() == KeyEvent.VK_F2)
		{
			int r=(int)(Math.random()*255);	//for red
			int g=(int)(Math.random()*255);	//for green
			int b=(int)(Math.random()*255);	//for blue
			bc=new Color(r,g,b);
			repaint();
		}
		if(e.getKeyCode() == KeyEvent.VK_F3)
		{
			int r=(int)(Math.random()*255);	//for red
			int g=(int)(Math.random()*255);	//for green
			int b=(int)(Math.random()*255);	//for blue
			fc=new Color(r,g,b);
			repaint();
		}
		if(e.getKeyCode() == KeyEvent.VK_ADD)
		{
			size += 2;
			repaint();
		}
		if(e.getKeyCode() == KeyEvent.VK_SUBTRACT)
		{
			size -= 2;
			repaint();
		}
	}
	public static void main(String[] args)
	{
		UseKeyinput1 a=new UseKeyinput1();
	}
}