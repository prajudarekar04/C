//ListBox (using List)
//CityList & Modification Tools - add, remove, clear, del,exit

import java.awt.*;
import java.awt.event.*;
import java.io.*;
import mypkg.Util;

class UseCityList extends Frame implements ActionListener
{
	Button ba, br, bc, bd, bx;
	Label l1;
	List obj;
	UseCityList()
	{
		super("CiyListBox");
		l1 = new Label("City");
		obj = new List(10);	//visible rows

		ba = new Button("add");
		br = new Button("rem");
		bc = new Button("clr");
		bd = new Button("del");
		bx = new Button("exit");
		ba.addActionListener(this);
		br.addActionListener(this);
		bc.addActionListener(this);
		bd.addActionListener(this);
		bx.addActionListener(this);

		setLayout(null);
		l1.setBounds(50,50,100,20);	//column, row, width, height
		obj.setBounds(50,80,100,110);
		ba.setBounds(170,50,100,20);
		br.setBounds(170,80,100,20);
		bc.setBounds(170,110,100,20);
		bd.setBounds(170,140,100,20);
		bx.setBounds(170,170,100,20);
		add(l1);
		add(ba);
		add(obj);
		add(br);
		add(bc);
		add(bd);
		add(bx);
		setSize(270,320);
		setVisible(true);
	}
	public void actionPerformed(ActionEvent e)
	{
		Button b = (Button)e.getSource();
		if(b == bx)
			System.exit(0);
		if(b == ba)
		{
			String str = Util.sInput("Enter City Name:");
			obj.add(str);
		}
		if(b == br)
		{
			int pos = obj.getSelectedIndex();
			if(pos != -1)
				obj.remove(pos);
		}
		if(b == bc)
			obj.removeAll();
		if(b == bd)
		{
			String str = Util.sInput("Enter City Name to Delete:");
			obj.remove(str);
		}
	}
	public static void main(String[] args)
	{
		UseCityList a=new UseCityList();
	}
}