/* DATA TYPES
 * Input : w     --> int
 * Output: print --> string of either "YES" or "NO"
 * 
 * EXAMPLE
 * Input : 44
 * Output: YES
 * 
 * LINKS
 * Problem   : https://codeforces.com/problemset/problem/4/A
 * Submission: https://codeforces.com/contest/4/submission/98324086
 * 
 * VARIABLES
 * w --> weight of watermelon
 * f --> weight of watermelon in half
 * */

#include <iostream>
#include <cstdlib>

int main ()
{
	int w=0; 
	int f=0;
	
	std::cin >> w;
	
	if(w>=1 && w<=100)
	{
		f = w/2; 
		
		if(w%2==0 && f>1)
		{
			std::cout << "YES";
		}
		else
		{
			std::cout << "NO";
		}
	}
	
	return 0;
}
