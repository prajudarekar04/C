//cardLayout
//
//
//import javax.swing.*;
//import javax.swing.event.*;
//import javax.swing.tree.*;
//import javax.swing.table.*;
import java.awt.*;
import java.awt.event.*;
//import java.io.*;
//import java.util.*;
import mypkg.Util;

class Pan1 extends Panel implements ActionListener
{
	Label l1, l2;
	TextField t1, t2;
	Button b1, b2;
	Pan1()
	{
		super();
		l1 = new Label("No.:");
		l2 = new Label("Name:");
		t1 = new TextField(10);
		t2 = new TextField(30);
		b1 = new Button("OK");
		b2 = new Button("Clr");
		b1.addActionListener(this);
		b1.addActionListener(this);
		setLayout(new GridLayout(3,2,5,5));
		add(l1);	add(t1);
		add(l2);	add(t2);
		add(b1);	add(b2);
		setSize(200,200);
		setVisible(true);
	}
	public void actionPerformed(ActionEvent e)
	{
		Button b= (Button)e.getSource();
		if(b == b1)
		{
			String s = "Number" + t1.getText() + "\nName:" + t2.getText();
			Util.display(s); 
		}
		t1.setText("");
		t2.setText("");
		t1.requestFocus();
		//setVisible(false);
	}
}
class Pan2 extends Panel implements ActionListener
{
	Checkbox c1, c2, c3, c4, c5, c6;
	Button b1, b2;
	Pan2()
	{
		super();
		c1 = new Checkbox("A");
		c2 = new Checkbox("B");
		c3 = new Checkbox("C");
		c4 = new Checkbox("D");
		c5 = new Checkbox("E");
		c6 = new Checkbox("F");
		b1 = new Button("OK");
		b2 = new Button("Clr");
		b1.addActionListener(this);
		b2.addActionListener(this);
		setLayout(new FlowLayout());
		add(c1);	add(c2);
		add(c3);	add(c4);
		add(c5);	add(c6);
		add(b1);	add(b2);
		setSize(200,200);
		setVisible(true);
	}
	public void actionPerformed(ActionEvent e)
	{
		Button b= (Button)e.getSource();
		String str = "Choice newLine";
		if(b == b1)
		{
			if(c1.getState() == true)
			{
				str = str + "\n" + c1.getLabel();
			}
			if(c2.getState() == true)
			{
				str = str + "\n" + c2.getLabel();
			}
			if(c3.getState() == true)
			{
				str = str + "\n" + c3.getLabel();
			}
			if(c4.getState() == true)
			{
				str = str + "\n" + c4.getLabel();
			}
			if(c5.getState() == true)
			{
				str = str + "\n" + c5.getLabel();
			}
			if(c6.getState() == true)
			{
				str = str + "\n" + c6.getLabel();
			}
			Util.display(str); 
		}
		c1.setState(false);
		c2.setState(false);
		c3.setState(false);
		c4.setState(false);
		c5.setState(false);
		c6.setState(false);
		//setVisible(false);
	}
}

class Pan3 extends Panel implements ActionListener
{
	Label l1;
	List ls;
	Button b1;
	Pan3()
	{
		super();
		l1 = new Label("Trade:");
		ls = new List(5);
		b1 = new Button("Display");
		b1.addActionListener(this);
		ls.addItem("CSE");
		ls.addItem("CSE-AI");
		ls.addItem("AI-DS");
		ls.addItem("ENTC");
		ls.addItem("Mech");
		ls.addItem("Civil");
		setLayout(new FlowLayout());
		add(l1);
		add(ls);
		add(b1);
		setSize(200,200);
		setVisible(true);
	}
	public void actionPerformed(ActionEvent e)
	{
		int pos = ls.getSelectedIndex();
		if(pos >= 0 )
		{
			Util.display(ls.getSelectedItem()); 
		}
		else
			Util.display("No Selection");
		//setVisible(false);
	}
}
class UseCardLayout extends Frame implements ActionListener
{
	Pan1 p1;
	Pan2 p2;
	Pan3 p3;
	Panel p;
	CardLayout cl;
	Button b1,b2,b3;
	UseCardLayout()
	{
		super("Demo");
		b1 = new Button("Student");
		b2 = new Button("Grade");
		b3 = new Button("Trade");
		b1.addActionListener(this);
		b2.addActionListener(this);
		b3.addActionListener(this);
		p1 = new Pan1();
		p2 = new Pan2();
		p3 = new Pan3();
		cl = new CardLayout();
		p = new Panel();
		p.setLayout(cl);
		p.add(p1, "Student");
		p.add(p2, "Grade");
		p.add(p3, "Trade");
		Panel tmp = new Panel();
		tmp.add(b1);
		tmp.add(b2);
		tmp.add(b3);
		add(p, BorderLayout.CENTER);
		add(tmp, BorderLayout.SOUTH);
		addWindowListener(new WindowAdapter()
		{
			public void WindowClosing(WindowListener e)
			{
				System.exit(0);
			}
		});
		setSize(500,500);
		setVisible(true);
	}
	public void actionPerformed(ActionEvent e)
	{
		Button b= (Button)e.getSource();
		if(b==b1)
		{
			cl.show(p,"Student");
		}
		if(b==b2)
		{
			cl.show(p,"Grade");
		}
		if(b==b3)
		{
			cl.show(p,"Trade");
		}
	}
	public static void main(String [] args)
	{
		new UseCardLayout();
	}
}