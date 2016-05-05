public class toStringClass
{
	String name;
	toStringPartTwo birthday;
	public toStringClass(String theName, toStringPartTwo theBirthday) //theBirthday has datatype "toStringPartTwo", meaning that it accepts a toStringPartTwo object. This is called composition
	{
		birthday = theBirthday;
		name = theName;
	}
	public String toString()
	{
		return String.format("My name is %s, and my birthday is %s.", name, birthday);
	}
}
