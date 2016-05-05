//Access Modifiers
//These change what classes can access the atributes and methods of a public class.
public class ppp
{
	//Default (blank): available to any other class in the same method.
	int defaultAt = 15; //At = Atribute
	//Private: accessable only within the declared class itself.
	private int privateAt;
	//Public: accessable to any other class.
	public int publicAt;
	//Protected: Like default and subclasses and superclasses can access the variable. More on those in another class.
	protected int protectedAt;
	public void publicClass()
	{
		System.out.println("Publicity is a good thing!");
	}
	public String thisMethod(int defaultAt)
	{
		return String.format("The number was %d. Your number was %d.", this.defaultAt, defaultAt); //String.format returns a string in printf form, for those that know C.
		//this.defaultAt means to return the defaultAt IN THIS CLASS, A.K.A., the defaultAt atribute, not the defaultAt argument.
	}
}
