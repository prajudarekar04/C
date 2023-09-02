//
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
class JFrm1 extends JFrame
{
	JFrm1()
	{
		super("JFrame1");
		setSize(400,400);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setVisible(true);
	}
	public static void main(String[]args)
	{
		JFrm1 a = new JFrm1();
	}
}