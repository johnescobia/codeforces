/* DATA TYPES
 * Input : input --> string
 * Output: input --> string (with changes if there are any)
 * 
 * EXAMPLE 1
 * Input : cAPS
 * Output: Caps
 * 
 * EXAMPLE 2
 * Input : Lock
 * Output: Lock
 * 
 * LINKS
 * Problem   : https://codeforces.com/contest/131/problem/A
 * Submission: https://codeforces.com/contest/131/submission/100476355
 * 
 * VARIABLES
 * $input  --> input string
 * $change --> boolean to determine if $input should be changed
 * $len    --> length of $input
 * 
 * ALGORITHM
 * Get $input from user. Check if index 1 onwards of $input are uppercase
 * letters. If yes, call change_input().
 * */

#include <iostream>

//~ A function that apply changes to $input accordingly
void change_input(std::string &input, int type, int len)
{
	if(type == 0)
	{
		input[0] = std::tolower(input[0]);
	}
	else
	{
		input[0] = std::toupper(input[0]);		
	}
	
	if(len > 1)
	{
		for(int i = 1; i < len; i++)
		{
			input[i] = std::tolower(input[i]);
		}
	}
}

int main()
{
	std::string input="";
	bool change = true;
	
	std::cin >> input;
	
	int len = input.length();
	
	if(len > 1)
	{
		//~ Check if $input[1] onwards are only uppercase letters
		for(int i = 1; i < len; i++)
		{
			if(std::islower(input[i]))
			{
				change = false;
			}
		}
	}	
	
	if(change == true)
	{
		if(std::isupper(input[0]))
		{
			change_input(input, 0, len);
		}
		else
		{
			change_input(input, 1, len);
		}
		
	}
	
	std::cout << input;
	
	return 0;
}
