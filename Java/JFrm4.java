//Swing Component
//JLabel
//Image
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.io.*;
import java.util.*;

public class JFrm4 extends JFrame
{
	JLabel l1;
	JFrm4()
	{
		super("Image on Label");
		l1 = new JLabel(new ImageIcon("Flower.jpg"));
		add(l1);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setSize(400,400);
		setVisible(true);
	}
	public static void main(String []args)
	{
		new JFrm4();
	}
}