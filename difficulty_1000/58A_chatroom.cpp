/* DATA TYPES
 * Input : input --> string
 * Output: print --> string
 * 
 * EXAMPLE 1
 * Input : ahhellllloou
 * Output: YES
 * 
 * EXAMPLE 2
 * Input : hlelo
 * Output: NO
 * 
 * LINKS
 * Problem   : https://codeforces.com/problemset/problem/58/A
 * Submission: https://codeforces.com/contest/58/submission/100320521
 * 
 * VARIABLES
 * $input  --> input string by user
 * $found  --> found letters
 * $check  --> string to check with
 * $pos    --> position of index in input string
 * $letter --> letter in string check
 *
 * ALGORITHM
 * Get $input from user and check if letters in $check exist in $input
 * sequentially.
 * 
 * The sequential checking is done by checking if a letter in $check
 * exists in $input, if it does, the letter is appended to $found and
 * the position of that letter in $input is saved to $pos. $pos is added
 * with 1 to be used as a starting point in the next checking interation.
 * 
 * If $found is equivalent to $check, print "YES", otherwise, print "NO".
 * */

#include <iostream>

void check_input(std::string input, int &pos, char letter, std::string &found)
{
	for(std::size_t i = pos; i < input.length(); i++)
	{
		if(input[i] == letter)
		{
			found += letter;
			pos = i + 1;
			break;
		}
	}
} 

int main()
{
	std::string input="", found="", check="hello";
	int pos = 0;
	
	std::cin >> input;
	
	for(std::size_t i = 0; i < check.length(); i++)
	{
		check_input(input, pos, check[i], found);
	}
		
	if(found == check)
		std::cout << "YES";
	else
		std::cout << "NO";
	
	return 0;
}
