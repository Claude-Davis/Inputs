using System;
public class InfoDoc
{
    public static void Main(string[] args)
    {
        //request the date and store input in "date" variable of type string
		Console.Write("Date: ");
        string date = Console.ReadLine();

        //request the user's name and store input in "name" variable of type string
		Console.Write("Full Name: ");
        string name = Console.ReadLine();

        //request the user's agw and store input in "age" variable of type string
		Console.Write("Age: ");
        string age = Console.ReadLine();

        //converts the type string input for "age" into an integer type.
        int ageNum = Convert.ToInt32(age);

        //The outputs
        Console.Write("Date: ");
        Console.WriteLine(date);
        Console.Write("Full Name: ");
        Console.WriteLine(name);
        Console.Write("Age: ");
        Console.WriteLine(ageNum);
    }
}