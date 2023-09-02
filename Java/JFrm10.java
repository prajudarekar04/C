//Swing Component
//Table creation
//
import javax.swing.*;
import javax.swing.event.*;
import javax.swing.tree.*;
import javax.swing.table.*;
import java.awt.*;
import java.awt.event.*;
import java.io.*;
import java.util.*;
import mypkg.Util;

class Account implements Serializable
{
	int a_no;
	String a_nm;
	int a_bal;
	Account()
	{
		a_no=0;
		a_nm = "";
		a_bal =0;
	}
	Account(int a, String b, int c)
	{
		a_no=a;
		a_nm = b;
		a_bal =c;
	}
	public String toString()
	{
		String s = "Account Data \n No.: " + a_no + "\nName: " + a_nm + "\nBalance: " + a_bal ;
		return s;
	}
	void display()
	{
		Util.display(toString());
	}
}
class aAdd extends JDialog implements FocusListener, ActionListener
{
	int no, bal, i, n;
	String nm;
	Account obj;
	LinkedList<Account> ls;
	JLabel l1,l2,l3;
	JTextField t1, t2,t3;
	JButton b1, b2,b3;
	aAdd(JFrame frm, String title, boolean state, LinkedList<Account>ls)
	{
		super(frm, title, state);
		this.ls = ls;
		l1 = new JLabel("Account No.: ");
		l2 = new JLabel("Name: ");
		l3 = new JLabel("Balance: ");
		t1 = new JTextField(10);
		t2 = new JTextField(20);
		t3 = new JTextField(10);
		b1 = new JButton("Add");
		b2 = new JButton("Back");
		t1.addFocusListener(this);
		b1.addActionListener(this);
		b2.addActionListener(this);
		setLayout(new GridLayout(4,2,5,5));
		add(l1);	add(t1);
		add(l2);	add(t2);
		add(l3);	add(t3);
		add(b1);	add(b2);
		setSize(300,400);
		setVisible(true);
	}
	public void focusGained(FocusEvent e){}
	public void focusLost(FocusEvent e)
	{
		try
		{
			no = Integer.parseInt(t1.getText());
			n = ls.size();
			i = 0;
			while(i<n)
			{
				obj = ls.get(i);
				if(obj.a_no == no)
					break;
				i++;
			}
			if(i == n)	//record not found.
				obj = null;
			else	//record found.
			{
				t1.requestFocus();
				return;
			}
		}
		catch(Exception e1){}
	}
	public void actionPerformed(ActionEvent e)
	{
		JButton b= (JButton)e.getSource();
		if(b == b1)
		{
			try
			{
				no = Integer.parseInt(t1.getText());
				nm = t2.getText();
				bal = Integer.parseInt(t3.getText());
				obj = new Account(no, nm, bal);
				ls.add(obj);
			}
			catch(Exception e1){}
		}
		setVisible(false);
	}
}
class aMod extends JDialog implements FocusListener, ActionListener
{
	int no, bal, i, n;
	String nm;
	Account obj;
	LinkedList<Account>ls;
	JLabel l1,l2,l3;
	JTextField t1, t2, t3;
	JButton b1, b2, b3;
	aMod(JFrame frm,String title,boolean state,LinkedList<Account> ls)
	{
		super(frm,title,state);
		this.ls = ls;
		l1 = new JLabel("Account No.: ");
		l2 = new JLabel("Name: ");
		l3 = new JLabel("Balance: ");
		t1 = new JTextField(10);
		t2 = new JTextField(20);
		t3 = new JTextField(10);
		b1 = new JButton("Mod");
		b2 = new JButton("Back");
		t1.addFocusListener(this);
		b1.addActionListener(this);
		b2.addActionListener(this);
		setLayout(new GridLayout(4,2,5,5));
		add(l1);	add(t1);
		add(l2);	add(t2);
		add(l3);	add(t3);
		add(b1);	add(b2);
		setSize(300,400);
		setVisible(true);
	}
	public void focusGained(FocusEvent e){}
	public void focusLost(FocusEvent e)
	{
		try
		{
			no = Integer.parseInt(t1.getText());
			n = ls.size();
			i = 0;
			while(i<n)
			{
				obj = ls.get(i);
				if(obj.a_no == no)
					break;
				i++;
			}
			if(i==n)
		        {
                		t1.requestFocus();
        	        	return;
	            	}
        	    	else
	            	{
                		t2.setText(obj.a_nm);
        		        t3.setText(" "+obj.a_bal);
	        	        return;
            		}
		}
		catch(Exception e1){}
	}
	public void actionPerformed(ActionEvent e)
	{
        	JButton b=(JButton)e.getSource();
	        if(b == b1)
        	{
	        	try
        		{
                		no = Integer.parseInt(t1.getText());
                		nm = t2.getText();
                		bal = Integer.parseInt(t3.getText());
                		obj.a_nm = nm;
                		obj.a_bal = bal;
            		}
            		catch(Exception e1){}
        	}
        	setVisible(false);
	}
}

class aDel extends JDialog implements FocusListener,ActionListener
{
	int no,bal,i,n;
	String nm;
	Account obj;
	LinkedList<Account> ls;
	JLabel l1,l2,l3;
	JTextField t1,t2,t3;
	JButton b1,b2,b3;
	aDel(JFrame frm,String title,boolean state,LinkedList<Account> ls)
	{
        	super(frm,title,state);
        	this.ls=ls;
        	l1=new JLabel("Account No");
        	l2=new JLabel("Name");
        	l3=new JLabel("Balance");
        	t1=new JTextField(10);
        	t2=new JTextField(20);
        	t3=new JTextField(10);
        	t1.setEditable(false);
        	t3.setEditable(false);
        	b1=new JButton("Del");
        	b2=new JButton("Back");
        	t1.addFocusListener(this);
        	b1.addActionListener(this);
        	b2.addActionListener(this);
        	setLayout(new GridLayout(4,2,5,5));
        	add(l1);add(t1);
        	add(l2);add(t2);
        	add(l3);add(t3);
        	add(b1);add(b2);
        	setSize(300,400);
        	setVisible(true);
	}
	public void focusGained(FocusEvent e){}
	public void focusLost(FocusEvent e)
	{
        	try
        	{
        		no=Integer.parseInt(t1.getText());
        		n=ls.size();
        		i=0;
        		while(i<n)
        		{
                		obj=ls.get(i);
                		if(obj.a_no==no)
                			break;
				i++;
			}
			if(i==n)
			{
				t1.requestFocus();
                		return;
        		}
			else
			{
				t2.setText(obj.a_nm);
				t3.setText(" "+obj.a_bal);
				return;
			}
        	}
        	catch(Exception e1){}
	}
	public void actionPerformed(ActionEvent e)
	{
		JButton b=(JButton)e.getSource();
		if(b == b1)
		{
			try
			{
				ls.remove(obj);
			}
			catch(Exception e1){}
		}
		setVisible(false);
	}
};
class aTable extends JDialog implements ActionListener
{
	LinkedList<Account> ls;
	JTable tb;
	DefaultTableModel dtm;
	JButton b1, b2;
	JPanel p1;
	JScrollPane jsp;
	Account obj;
	int i, n =0 ;
	aTable(JFrame frm,String title,boolean state,LinkedList<Account> ls)
	{
        	super(frm,title,state);
		this.ls = ls;
		i = 0 ;
		n = ls.size();
		dtm = new DefaultTableModel(new Object[][]{}, new String[] {"A/c No.","Name","Balance"});
		tb = new JTable(dtm);
		while(i<n)
		{
			obj  = ls.get(i);
			dtm.insertRow(i, new String[] {"" + obj.a_no , obj.a_nm , "" + obj.a_bal});
			i++;
		}
		jsp = new JScrollPane(tb);
		add(jsp);
		b1 = new JButton("Print");
		b2 = new JButton("Back");
        	b1.addActionListener(this);
        	b2.addActionListener(this);
		p1 = new JPanel();
		p1.add(b1);
		p1.add(b2);
		add(p1, BorderLayout.SOUTH);
		setSize(400,400);
		setVisible(true);
	}
	public void actionPerformed(ActionEvent e)
	{
		JButton b=(JButton)e.getSource();
		if(b == b1)
		{
			try
			{
				tb.print();
			}
			catch(Exception e1){}
		}
		setVisible(false);
	}
}
class JFrm10 extends JFrame
{
	JTree tr;
	JLabel l1;
	LinkedList<Account>ls;
	
	JFrm10()
	{
		super("Tree");
		l1 = new JLabel("Choice :");
		DefaultMutableTreeNode top = new DefaultMutableTreeNode("Options:");
		DefaultMutableTreeNode Student = new DefaultMutableTreeNode("Account");
		top.add(Student );
		DefaultMutableTreeNode add = new DefaultMutableTreeNode("Add");
		DefaultMutableTreeNode mod = new DefaultMutableTreeNode("Mod");
		DefaultMutableTreeNode del = new DefaultMutableTreeNode("Del");
		Student.add(add);
		Student.add(mod);
		Student.add(del);
		DefaultMutableTreeNode p = new DefaultMutableTreeNode("Record");
		top.add(p);
		DefaultMutableTreeNode p1 = new DefaultMutableTreeNode("Display");
		p.add(p1);
		tr = new JTree(top);
		JScrollPane jsp = new JScrollPane(tr);
		add(jsp);
		add(l1, BorderLayout.SOUTH);
		tr.addTreeSelectionListener(new TreeSelectionListener()
		{
			public void valueChanged(TreeSelectionEvent e)
			{
				DefaultMutableTreeNode a=(DefaultMutableTreeNode)tr.getLastSelectedPathComponent();
				if(a!=null)
				{
					if(a.isLeaf())
					{
						if(a==add)
						{
							aAdd ad = new aAdd(null,"New Account",true,ls);
						}
                        			if(a==mod)
                        			{
							aMod md = new aMod(null,"Modify Account",true,ls);
						}
                        			if(a==del)
                        			{
							aDel dl = new aDel(null,"Delete Account",true,ls);
						}
                        			if(a==p1)
						{
							aTable at = new aTable(null,"Display",true,ls);
						}
                    			}
                		}
            		}
		});
		setSize(400,400);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setVisible(true);
	}
	
	public static void main(String[] args)
	{
		JFrm10 a = new JFrm10();
	}
}