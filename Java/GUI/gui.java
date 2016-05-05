import javax.swing.JOptionPane; //Class for GUIs

class gui
{
	public static void main(String[] args)
	{
		String fn = JOptionPane.showInputDialog("This is a calculator. Input your first number."); //showInputDialog method puts a box that prints the arguments, then an input box.
		//The input box stores whatever is put there in the fn variable, which must be a string, so we convert it.
		String sn = JOptionPane.showInputDialog("Input your second number.");

		int firstNumber = Integer.parseInt(fn); //The parseInt method takes a String argument, and converts it into an int.
		int secondNumber = Integer.parseInt(sn);
		
		int sum = firstNumber + secondNumber;
		JOptionPane.showMessageDialog(null, "The answer is " + sum + ".", "Your Sum", JOptionPane.PLAIN_MESSAGE);
	}
}
