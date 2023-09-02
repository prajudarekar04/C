//RadioButtons
//Years, Trades, ok, exit

import java.awt.*;
import java.awt.event.*;
import java.io.*;
import mypkg.Util;

class UseRadioButton extends Frame implements ActionListener
{
	Label l1, l2;	//year, trade
	Button b1, b2;	//ok, exit
	CheckboxGroup cg1, cg2;
	Checkbox c1, c2, c3, c4;	// years
	Checkbox t1, t2, t3, t4;	// trades
	
	UseRadioButton()
	{
		super("RadioButton");
		l1 = new Label("Year:");
		cg1 = new CheckboxGroup();
		c1 = new Checkbox("I",cg1,true);
		c2 = new Checkbox("II",cg1,true);
		c3 = new Checkbox("III",cg1,true);
		c4 = new Checkbox("IV",cg1,true);
		l2 = new Label("Trade:");
		cg2 = new CheckboxGroup();
		t1 = new Checkbox("CSE",cg2,true);
		t2 = new Checkbox("IT",cg2,true);
		t3 = new Checkbox("MECH",cg2,true);
		t4 = new Checkbox("CIVIL",cg2,true);
		b1 = new Button("OK");
		b2 = new Button("Exit");
		b1.addActionListener(this);
		b2.addActionListener(this);
		setLayout(new FlowLayout());
		add(l1);
		add(c1);
		add(c2);
		add(c3);
		add(c4);
		add(l2);
		add(t1);
		add(t2);
		add(t3);
		add(t4);
		add(b1);
		add(b2);
		setSize(400,400);
		setVisible(true);
	}
	public void actionPerformed(ActionEvent e)
	{
		Button b = (Button)e.getSource();
		if(b == b2)
			System.exit(0);
		String s1 = "Trade:"+(cg2.getSelectedCheckbox()).getLabel()+"\nYear:"+(cg1.getSelectedCheckbox()).getLabel();
		Util.display(s1);		
	}
	public static void main(String[] args)
	{
		UseRadioButton a=new UseRadioButton();
	}
}