import javax.swing.JFrame;

class main
{
	public static void main(String[] args)
	{
		improvedGUI gui = new improvedGUI(); //Creates the object for the window.
		gui.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); //Makes it to where closing with the 'X' button stops the program.
		gui.setSize(300, 300); //Sets the starting size of the program.
		gui.setVisible(true); //Makes the program visible.
	}
}