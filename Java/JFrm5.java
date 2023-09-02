//Swing Component
//JLabel, JScrollPane
//Image - part 2
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.io.*;
import java.util.*;

public class JFrm5 extends JFrame
{
	JLabel l1;
	JScrollPane jsp;
	JFrm5()
	{
		super("Image on Label");
		l1 = new JLabel(new ImageIcon("Flower.jpg"));
		jsp = new JScrollPane(l1);
		add(jsp);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setSize(400,400);
		setVisible(true);
	}
	public static void main(String []args)
	{
		new JFrm5();
	}
}