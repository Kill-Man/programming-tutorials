public class toStringPartTwo
{
	private int month, day, year;
	public toStringPartTwo(int theMonth, int theDay, int theYear)
	{
		month = theMonth;
		day = theDay;
		year = theYear;
	}
	public String toString() //The to string method is used when using objects as a parameter. When an object is referenced, it looks for the toString method to know what the value of it is.
	{
		return String.format("%d/%d/%d", month, day, year);
	}
}
