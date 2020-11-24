/* Link to problem:
 * https://codeforces.com/problemset/problem/460/A
 * 
 * Link to submission with test cases:
 * https://codeforces.com/contest/460/submission/99363187
 * */

#include <iostream>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	int socks, interval, day=0;
	
	std::cin >> socks >> interval;
	
	while(socks > 0)
	{	
		++day;
			
		// Mom buys a new pair of socks at interval
		if(day%interval==0)
		{
			++socks;
		}
		
		// Vasya throws a pair of socks
		--socks;
	}
	
	std::cout << day;
	
	return 0;
}
