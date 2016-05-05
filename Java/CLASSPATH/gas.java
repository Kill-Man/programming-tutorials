//Getters and Setters
//You use these to have one method return values and another set values. This makes maintaining the class easier.
public class gas
{
	private String color; //Atribute that we will be getting and setting.
	//Getter
	public String getColor() //The get method has to be named 'get[VARIABLE]' with the first letter of the variable capitalized.
	{
		return color; //The get method returns the value of a variable.
	}
	//Setter
	public void setColor(String setMet) //The set method is named like the get method, but instead of get, it is set.
	{
		color = setMet; //The set method sets the value of a variable.
	}
}
