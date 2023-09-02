//Calculator
//1-display(TextFiled), 16-keys

import java.awt.*;
import java.awt.event.*;
import java.io.*;

class Calculator extends Frame implements ActionListener
{
	TextField t1;
	Panel p;
	Button []btn;
	int val1, val2, res, flg;
	char opr;
	String s, t;
	Calculator()
	{
		super("Calculator");
		flg = 0;	// flg =0 means oprand1 taking 
		t1 = new TextField(15);
		t1.setEditable(false);
		add(t1,BorderLayout.NORTH);
		btn = new Button[16];
		String []k = new String[]{"1", "2", "3", "+", "4", "5", "6", "-", "7", "8", "9", "*", "C", "0", "=", "/"};
		p = new Panel();
		p.setLayout(new GridLayout(4,4,5,5));
		for(int i=0;i<16;i++)
		{
			btn[i] = new Button(k[i]);
			btn[i].addActionListener(this);
			p.add(btn[i]); 
		}
		add(p,BorderLayout.CENTER);
		setSize(400,400);
		addWindowListener(new WindowAdapter()
		{
			public void windowClosing(WindowEvent e)
			{
				System.exit(0);
			}
		});
		setVisible(true);
	}
	public void actionPerformed(ActionEvent e)
	{
		char ch = (e.getActionCommand()).charAt(0);	//pressed keys title passes as String
		if(ch == '=')
		{
			if(flg == 1)
			{
				try
				{
					val2 = Integer.parseInt(t1.getText());
				}
				catch(Exception e1){}
				res = comp();
 				t1.setText(""+res);
				s = "";
				t = "";
				flg = 0;
				return;
			}
		}
		if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
		{
			if(flg == 0)
			{
				try
				{
					val1 = Integer.parseInt(t1.getText());
				}
				catch(Exception e2){}
				opr = ch;
				s = "";
				t = "";
				flg = 1;				
			}
			else
			{
				try
				{
					val2 = Integer.parseInt(t1.getText());
				}
				catch(Exception e2){}
				res = comp();
 				t1.setText(""+ res);
				opr = ch;
				s = "";
				t = "";				
			}
			return;
		}
		if(ch == 'C')
		{
			s = "";
			t = "";
			flg = 0;
			t1.setText("");
			return;
		}
		s = s + ch;
		t1.setText(s);
	}
	int comp() 
	{
		res = 0;
		switch(opr)
		{
			case '+':
				res = val1 + val2;
				break;
			case '-':
				res = val1 -val2;
				break;
			case '*':
				res = val1 * val2;
				break;
			case '/':
				res = val1 / val2;
				break;
		}
		val1 = res;
		return res;
	}
	public static void main(String[] args)
	{
		Calculator a=new Calculator();
	}
}