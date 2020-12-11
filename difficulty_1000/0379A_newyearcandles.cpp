/* LINKS
 * Problem   : https://codeforces.com/problemset/problem/379/A
 * Submission: https://codeforces.com/contest/379/submission/100884140
 * 
 * VARIABLES
 * $a     --> number of starting candles
 * $b     --> burnt candles needed to create a new one
 * $hours --> hours the candles are burning
 * $r     --> remaining candles after recreating new candles using $b
 *            amount from $a.
 * 
 * ALGORITHM
 * The while loop breaks when $a is lesser than $b because candles
 * cannot be recreated anymore.
 * */

#include <iostream>

int main()
{
	int a=0, b=0, hours=0, r=0;
	
	std::cin >> a >> b;
	
	hours = a;
	
	while(true)
	{
		r = a % b;
		a /= b;
		hours += a;
		a += r;
		
		if(a < b)
			break;
	}
	
	std::cout << hours;
	
	return 0;
}
