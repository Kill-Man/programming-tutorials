public class staticClass
{
	public static int COUNT = 0; //When a variable or method is static, it belongs to the class, not the instance.
	//Since it belongs to the class, this means that only one instance exists, wheather there are multiple, one, or even no objects. It will be shared.
	staticClass()
	{
		++COUNT;
	}
	public static void tellThem()
	{
		System.out.println("This is being printed from a static method.");
	}
}
