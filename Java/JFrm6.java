//Swing Component
//JList
//ls.addListSelectionListener(new ListSelectionListener ()
import javax.swing.*;
import javax.swing.event.*;
import java.awt.*;
import java.awt.event.*;
import java.io.*;
import java.util.*;

class JFrm6 extends JFrame
{
	JLabel l1;
	JList ls;
	JScrollPane jsp;
	String[] city = {"Sangli","Miraj","Pune","Mumbai","Solapur","Satara","Kolhapur","Nashik","Nagpur","Hubali"};
	JFrm6()
	{
		super("JList");
		l1 = new JLabel("Choose City:");
		ls = new JList(city);
		ls.setSelectionMode(ListSelectionModel.SINGLE_SELECTION);
		ls.addListSelectionListener(new ListSelectionListener ()
		{
			public void valueChanged(ListSelectionEvent e)
			{
				int pos = ls.getSelectedIndex();
				if(pos == -1)
					l1.setText("Choose City:");
				else
					l1.setText(city[pos]);
			}
		});
		jsp = new JScrollPane(ls);
		setLayout(new FlowLayout());
		jsp.setPreferredSize(new Dimension(200,100));
		add(jsp);	add(l1);
		setSize(300,300);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		
		setVisible(true);
	}
	public static void main(String[] args)
	{
		JFrm6 a = new JFrm6();
	}
}