//Login Form
//Text box, password
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
class JFrm2 extends JFrame implements ActionListener
{
	JLabel l1 ,l2;
	JTextField t1, t2;
	JPasswordField p1, p2;
	JButton b1, b2;
	JFrm2()
	{
		super("Login");
		l1 = new JLabel("Name");
		l2 = new JLabel("Password");
		t1 = new JTextField(10);
		t2 = new JTextField(10);
		b1 = new JButton("OK");
		b2 = new JButton("Clear");
		b1.addActionListener(this);
		b2.addActionListener(this);
		setLayout(new GridLayout(3,2,5,5));
		add(l1);
		add(t1);
		add(l2);
		add(t2);
		add(b1);
		add(b2);
		setSize(400,400);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setVisible(true);
	}
	public void actionPerformed(ActionEvent e)
	{
		JButton b = (JButton)e.getSource();
		if(b == b1)
		{
			String id = t1.getText();
			String pd = t2.getText();
			if( id.equals("PrajaktaDarekar04") && pd.equals("Prajakta#2004") )
				JOptionPane.showMessageDialog(null,"Login Succefull");
			else
				JOptionPane.showMessageDialog(null,"Login Unsuccefull");
		}
		t1.setText("") ;
		t2.setText("") ;
		t1.requestFocus();
	}
	public static void main(String[]args)
	{
		JFrm2 a = new JFrm2();
	}
}