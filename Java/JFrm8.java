//Swing Component
//swing.tree
//
import javax.swing.*;
import javax.swing.event.*;
import javax.swing.tree.*;
import java.awt.*;
import java.awt.event.*;
import java.io.*;
import java.util.*;

class JFrm8 extends JFrame
{
	JTree tr;
	JLabel l1;
	JFrm8()
	{
		super("Tree");
		l1 = new JLabel("Choice");
		DefaultMutableTreeNode top = new DefaultMutableTreeNode("Options");
		DefaultMutableTreeNode o = new DefaultMutableTreeNode("O");
		top.add(o);
		DefaultMutableTreeNode o1 = new DefaultMutableTreeNode("O1");
		DefaultMutableTreeNode o2 = new DefaultMutableTreeNode("O2");
		DefaultMutableTreeNode o3 = new DefaultMutableTreeNode("O3");
		o.add(o1);
		o.add(o2);
		o.add(o3);
		DefaultMutableTreeNode p = new DefaultMutableTreeNode("P");
		top.add(p);
		DefaultMutableTreeNode p1 = new DefaultMutableTreeNode("P1");
		DefaultMutableTreeNode p2 = new DefaultMutableTreeNode("P2");
		DefaultMutableTreeNode p3 = new DefaultMutableTreeNode("P3");
		p.add(p1);
		p.add(p2);
		p.add(p3);
		tr = new JTree(top);
		JScrollPane jsp = new JScrollPane(tr);
		add(jsp);
		add(l1, BorderLayout.SOUTH);
		tr.addTreeSelectionListener(new TreeSelectionListener()
		{
			public void valueChanged(TreeSelectionEvent e)
			{
				l1.setText("Selection is " + e.getPath());
			}
		});
		setSize(400,400);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setVisible(true);
	}
	
	public static void main(String[] args)
	{
		JFrm8 a = new JFrm8();
	}
}