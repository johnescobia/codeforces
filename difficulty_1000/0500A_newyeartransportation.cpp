/* LINKS
 * Problem   : https://codeforces.com/problemset/problem/500/A
 * Submission: https://codeforces.com/contest/500/submission/100791280
 * 
 * VARIABLES
 * $n        --> total number of cells
 * $t        --> targeted cell
 * $pos      --> current position
 * $moves[n] --> moves to be made at n-th cell
 * 
 * ALGORITHM
 * $pos starts at cell 1. $pos changes by adding the $moves[] assigned
 * for that particular $pos. If $pos lands at $t, print "Yes", otherwise,
 * print "NO".
 * */

#include <iostream>

int main()
{
	int n=0, t=0, pos=1;
	
	std::cin >> n >> t;
	
	int moves[n];
	
	for(int i = 1; i < n; i++)
		std::cin >> moves[i];
		
	for(int i = 1; i < n; i++)
	{	
		pos += moves[i];
		
		if(pos == t || t == 1)
		{
			std::cout << "YES";
			return 0;
		}

		i += moves[i]-1;
	}

	std::cout << "NO";
	
	return 0;
}
