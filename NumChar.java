import java.util.Objects;

public class NumChar {
	public static void main(String[] args) {
		java.io.Console console = System.console(); // Instantiate a console object
		console.printf("Enter a string: ");
		String myString = System.console().readLine();
		while (myString.length() > 0) { // While the string is not empty
			Character output = myString.charAt(0); // Get the first character
			myString = myString.substring(1); // Remove the first character
			int count = 1; // There is at least one character
			for (Character current : myString.toCharArray()) {
				if (Objects.equals(output, current)) { // If the character is the same
					count++;
				}
			}
			myString = myString.replace(output.toString(), ""); // Remove all occurrences of the character
			console.printf("\n" + output + ": " + count);
		}
	}
}
