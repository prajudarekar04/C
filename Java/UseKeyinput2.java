import java.awt.*;
import java.awt.event.*;

class UseKeyinput2 extends Frame implements KeyListener
{
	Color bc, fc;	//background color, font color
	int size, style;
	Font f;
	String str;
	UseKeyinput2()
	{
		super("UseKeyListener");
		bc = Color.WHITE;
		fc = Color.BLACK;
		addKeyListener(this);
		size =10;
		style = Font.PLAIN;
		str ="";
		f = new Font(Font.SERIF, style, size);
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
		f  = new Font(Font.SERIF, style, size);
		g.setFont(f);
		g.setColor(fc);
		setBackground(bc);
		g.drawString(str,100,100);		
	}
	public void keyTyped(KeyEvent e)
	{
		str +=e.getKeyChar();
		repaint();
	}
	public void keyReleased(KeyEvent e){}
	public void keyPressed(KeyEvent e)
	{
		if(e.getKeyCode() == KeyEvent.VK_F2)	//BackgroundColor
		{
			int r=(int)(Math.random()*255);	//for red
			int g=(int)(Math.random()*255);	//for green
			int b=(int)(Math.random()*255);	//for blue
			bc=new Color(r,g,b);
			repaint();
		}
		if(e.getKeyCode() == KeyEvent.VK_F3)	//FontColor
		{
			int r=(int)(Math.random()*255);	//for red
			int g=(int)(Math.random()*255);	//for green
			int b=(int)(Math.random()*255);	//for blue
			fc=new Color(r,g,b);
			repaint();
		}
		if(e.getKeyCode() == KeyEvent.VK_F4)	//FontStyle - PLAIN
		{
			style = Font.PLAIN;
			repaint();
		}
		if(e.getKeyCode() == KeyEvent.VK_F5)	//FontStyle - BOLD
		{
			style = Font.BOLD;
			repaint();
		}
		if(e.getKeyCode() == KeyEvent.VK_F6)	//FontStyle - ITALIC
		{
			style = Font.ITALIC;
			repaint();
		}
		if(e.getKeyCode() == KeyEvent.VK_F7)	//FontStyle - BOLD & ITALIC
		{
			style = Font.BOLD|Font.ITALIC;
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
		UseKeyinput2 a=new UseKeyinput2();
	}
}