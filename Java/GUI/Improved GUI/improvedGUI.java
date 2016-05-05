import java.awt.FlowLayout; //This is a class that determines how things are placed.
import java.awt.event.ActionListener; //This is the class that detects what the user does and acts depending on what is done.
import java.awt.event.ActionEvent; //The events that happen depending on what the action listener detects.
import javax.swing.JFrame; //This is a class that lets you have all the features that most GUI programs have, title bar, tool bar, etc.
import javax.swing.JLabel; //Lets you output text and images on the screen.
import javax.swing.JTextField; //Allows user to input text.
import javax.swing.JPasswordField; //Like TextField, but shows asterics instead of actual text.
import javax.swing.JOptionPane;
//import javax.swing.JButton;
//import javax.swing.Icon;
//import javax.swing.ImageIcon;

public class improvedGUI extends JFrame //Needs to extend JFrame so you can create a window.
{
	private JLabel prompt1; //The private atribute of type JLabel, to be used in the constructor.
	private JLabel prompt2;
	private JTextField username;
	private JTextField uneditable;
	private JPasswordField password;
	private JButton text;
	private JButton pic;
	
	public improvedGUI()
	{
		super("GUI Program"); //The first statement in the constructor is always the title bar. The super method acts as the constructor for the class that is extended. JFrame takes the title bar's arguments.
		setLayout(new FlowLayout()); //Second command is the default layout.
		
		prompt1 = new JLabel("Type your name"); //This puts a new window on the screen, with the text in the arguments showing up.
		prompt1.setToolTipText("Stop hovering over me"); //A tooltip is something that shows up when you hover over something, in this case, the sentence.
		add(prompt1); //This adds the window to the JFrame.
		
		username = new JTextField(10); //10 is the length of the text field.
		add(username);
		
		prompt2 = new JLabel("Type your password");
		add(prompt2);
		
		password = new JPasswordField("Password", 8);
		add(password);
		
		uneditable = new JTextField("You can't edit me.", 20);
		uneditable.setEditable(false);
		add(uneditable);
		
		handler handler = new handler();
		username.addActionListener(handler);
		password.addActionListener(handler);
	}
	
	private class handler implements ActionListener
	{
		public void actionPerformed(ActionEvent event)
		{
			String string = "";
			
			if (event.getSource == username) {
				string = String.format("Username: %s", event.getActionCommand());
			} else if (event.getSource == password) {
				string = String.format("Password: %s", event.getActionCommand());
			}
			
			JOptionPane.showMessageDialog(null, string); //The first argument is for positioning, the second is what shows up in the message box.
		}
	}
}