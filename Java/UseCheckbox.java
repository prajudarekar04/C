//CheckBox (using Choice)
// & Modification Tools - add, remove, clear, del,exit

import java.awt.*;
import java.awt.event.*;
//import java.io.*;
//import mypkg.Util;

class UseCheckbox extends Frame implements ActionListener
{
	Button bd,bc;	//display,clear,
	Checkbox cs,cn,ce,cw;	//4 directional
	
	UseCheckbox()
	{
		super("CheckBox");
		cs = new Checkbox("South");
		cn = new Checkbox("North");
		ce = new Checkbox("East");
		cw = new Checkbox("West");
		bd = new Button("Display");
		bc = new Button("Clear");
		bd.addActionListener(this);
		bc.addActionListener(this);
		setLayout(new GridLayout(3,2,5,5));
		add(cs);
		add(cn);
		add(ce);
		add(cw);
		add(bd);
		add(bc);
		addWindowListener(new WindowAdapter()
		{
			public void windowClosing(WindowEvent e)
			{
				System.exit(0);
			}
		});
		setSize(300,300);
		setVisible(true);
	}
	public void actionPerformed(ActionEvent e)
	{
		Button b = (Button)e.getSource();
		String str = "Area:";
		if(b == bd)
		{
			if(cs.getState())
				str = str + "\n" + cs.getLabel();
			if(cn.getState())
				str = str + "\n" + cn.getLabel();
			if(ce.getState())
				str = str + "\n" + ce.getLabel();
			if(cw.getState())
				str = str + "\n" + cw.getLabel();
			System.out.println(str);
		}
		cs.setState(false);
		cn.setState(false);
		ce.setState(false);
		cw.setState(false);
		
	}
	public static void main(String[] args)
	{
		UseCheckbox a=new UseCheckbox();
	}
}