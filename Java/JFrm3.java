//Swing Component
//JPanel
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.io.*;
import java.util.*;
class MyPanel extends JPanel
{
	int x, y;
	MyPanel()
	{
		super();
		setBorder(BorderFactory.createLineBorder(Color.RED));
		addMouseListener(new MouseAdapter()
		{
			public void mouseClicked(MouseEvent e)
			{
				x = e.getX();
				y = e.getY();
				repaint();
			}
		});
	}
	public void paintComponent(Graphics g)
	{
		super.paintComponent(g);
		g.drawRect(x, y, 20, 20);
	}
}
public class JFrm3 extends JFrame
{
	MyPanel pan;
	JFrm3()
	{
		super("Border");
		pan = new MyPanel();
		add(pan);
		setSize(400,400);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setVisible(true);
	}
	public static void main(String []args)
	{
		new JFrm3();
	}
}