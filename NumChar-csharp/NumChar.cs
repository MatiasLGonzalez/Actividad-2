class NumChar
{
	static void Main()
	{
#nullable enable
		Console.WriteLine("Enter a string: ");
		string? myString = Console.ReadLine();
		if (myString != null) // if myString is not null
		{
			while (myString.Length > 0) // while the string is not empty
			{
				int count = 1; // the character is atleast present once
				char output = myString[0]; //the current character
				myString = myString.Substring(1); // we remove it from the string
				foreach (char character in myString) // we search other ocurrences of the character
				{
					if (character == output)
					{
						count++;
					}
				}
				myString = myString.Replace(output.ToString(), ""); // we remove all the ocurrences of the character
				Console.WriteLine($"{output}: {count}"); // we print the result
			}
		}
		else
		{
			Console.WriteLine("String is null!");
		}
	}
}