package baek;
import java.util.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.Timer;

//interface ActionListener{
//	void actionPerformed(ActionEvent event);
//}
class TimerPrinter implements ActionListener{
	public void actionPerformed(ActionEvent event) {
		System.out.println("At the tone, the time is"+new Date());
		Toolkit.getDefaultToolkit().beep();
	}
	public void hello() {
		System.out.println("hello");
	}
}
public class Main {
	public static void main(String[] args) {
		ActionListener listener = new TimerPrinter();
		Timer t = new Timer(1000,listener);
		t.start();
		JOptionPane.showMessageDialog(null,
				"Quit program?");
		System.exit(0);
	}

}
