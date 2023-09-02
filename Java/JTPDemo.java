//Swing Component
//JTPDemo.java
//Collection of Panels by JTabbedPane
import java.awt.*;
import java.awt.event.*;
import java.io.*;
import java.util.*;
import javax.swing.*;
class CityPanel extends JPanel
{
	JButton b1, b2, b3, b4;
	CityPanel()
	{
		super();
		b1 = new JButton("Mumbai");
		b2 = new JButton("Pune");
		b3 = new JButton("Satara");
		b4 = new JButton("Sangli");
		add(b1);	add(b2);
		add(b3);	add(b4);
	}
}
class TradePanel extends JPanel
{
	JCheckBox b1, b2, b3, b4;
	TradePanel()
	{
		super();
		b1 = new JCheckBox("CSE");
		b2 = new JCheckBox("TRonics");
		b3 = new JCheckBox("TRICAL");
		b4 = new JCheckBox("IT");
		add(b1);	add(b2);
		add(b3);	add(b4);
	}
}
class YearPanel extends JPanel
{
	JRadioButton y1, y2, y3, y4;
	ButtonGroup bg;
	YearPanel()
	{
		super();
		y1 = new JRadioButton("I");
		y2 = new JRadioButton("II");
		y3 = new JRadioButton("III");
		y4 = new JRadioButton("IV");
		bg = new ButtonGroup();
		bg.add(y1);	bg.add(y2);
		bg.add(y3);	bg.add(y4);
		add(y1);	add(y2);
		add(y3);	add(y4);
	}
}
public class JTPDemo extends JFrame
{
	JTabbedPane jt;
	JTPDemo()
	{
		super();
		jt = new JTabbedPane();
		jt.add("City", new CityPanel());
		jt.add("Trade", new TradePanel());
		jt.add("Year", new YearPanel());
		add(jt);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setSize(400,400);
		setVisible(true);
	}
	public static void main(String []args)
	{
		new JTPDemo();
	}
}