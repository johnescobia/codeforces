/* DATA TYPES
 * Input : input  --> string
 * Output: output --> string
 * 
 * EXAMPLE
 * Input : YyyYYYyyYxdwdawdDAWDdaddYYYY
 * Output: .x.d.w.d.w.d.d.w.d.d.d.d
 * 
 * LINKS
 * Problem: https://codeforces.com/problemset/problem/118/A
 * Submission: https://codeforces.com/contest/118/submission/100065815
 * 
 * VARIABLES
 * vowels --> vowels according to the problem
 * input  --> input string of user
 * temp   --> temporary string
 * output --> output string
 * add    --> boolean
 *
 * ALGORITHM
 * Get input from user. Extract consonants from input and store in temp.
 * Insert "." before every letter in temp and store in output. Print output.
 * */

#include <iostream>

int main()
{
	std::string vowels="aoyeuiAOYEUI", input="", temp="", output="";
	bool add = true;
	
	std::cin >> input;
	
	// Loop through all characters in the input
	for(std::size_t i = 0; i < input.length(); i++)
	{
		// Loop through all characters in the vowels string
		for(std::size_t j = 0; j < vowels.length(); j++)
		{
			// Check if character is a vowel
			if(vowels[j] == input[i])
			{
				add = false;
			}
		}
		
		// If current input character is not a vowel, convert it to lowercase
		// and append to temp
		if(add == true)
		{
			temp += (tolower(input[i]));
		}
		
		add = true;
	}
	
	// Loop through all the chracters in temp and append "." to output
	// followed by a character in temp
	for(std::size_t i = 0; i < temp.length(); i++)
	{
		output += ".";
		output += temp[i];
	}
	
	std::cout << output;
	
	return 0;
}
