//Swing Component
//Toggling
//JToggleButton
import javax.swing.*;
import javax.swing.event.*;
import java.awt.*;
import java.awt.event.*;
import java.io.*;
import java.util.*;

class JFrm7 extends JFrame implements ItemListener
{
	JLabel l1;
	JToggleButton t1;
	
	JFrm7()
	{
		super("Toggled Button");
		l1 = new JLabel("Button is off");
		t1 = new JToggleButton("on/off");
		t1. addItemListener(this);
		setLayout(new FlowLayout());
		add(l1);	add(t1);
		setSize(300,300);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setVisible(true);
	}
	public void itemStateChanged(ItemEvent e)
	{
		if(t1.isSelected())
			l1.setText("Button is on.");
		else
			l1.setText("Button is off.");
	}
	public static void main(String[] args)
	{
		JFrm7 a = new JFrm7();
	}
}