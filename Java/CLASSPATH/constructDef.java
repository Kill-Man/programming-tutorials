public class constructDef
{
	String color;
	constructDef()
	{
		this.setColor("Red");
	}
	constructDef(String c)
	{
		this.setColor(c);
	}
	//When you get into overriding, you will can use that in constructs as well.
	//Setter
	public void setColor(String c)
	{
		this.color = c;
	}
}
