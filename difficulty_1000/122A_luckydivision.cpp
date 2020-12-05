/* DATA TYPES
 * Input : n     --> int where 1<=n<= 1000
 * Output: print --> string of either "YES" or "NO"
 * 
 * EXAMPLE 1
 * Input : 47
 * Output: YES
 * 
 * EXAMPLE 2
 * Input : 78
 * Output: NO
 * 
 * LINKS
 * Problem   : https://codeforces.com/problemset/problem/122/A
 * Submission: https://codeforces.com/contest/122/submission/100435218
 * 
 * VARIABLES
 * $n               --> input integer
 * $luckyNumbers[]  --> array of lucky numbers
 * 
 * ALGORITHM
 * Get $n from user.
 * 
 * If function almost_lucky() returns 1
 *   print "YES"
 * Else
 *   call function lucky()
 * */

#include <iostream>

// A function that checks if the decimal representation of $n. If it contains
// only 4 and 7, print "YES", otherwise, print "NO".
void lucky(int n)
{
	if(n%10 == 4 || n%10 == 7)
	{
		n /= 10;
		
		if(n > 0)
		{
			lucky(n);
		}
		else
		{
			std::cout << "YES\n";
		}
	}
	else
	{
		std::cout << "NO\n";
	}
}

// A function that checks if $n is divisible by any of the $luckyNumbers.
// If it is, return 1, otherwise, return 0;
int almost_lucky(int n)
{
	int luckyNumbers[13] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 777};
	int size = sizeof(luckyNumbers)/sizeof(luckyNumbers[0]);
	
	for(int i = 0; i < size; i++)
	{
		if(n%luckyNumbers[i] == 0)
		{
			return 1;
		}
	}
	
	return 0;
}

int main()
{
	int n=0;
	
	std::cin >> n;
	
	if(almost_lucky(n) == 1)
	{
		std::cout << "YES\n";
	}
	else
	{
		lucky(n);
	}

	return 0;
}
