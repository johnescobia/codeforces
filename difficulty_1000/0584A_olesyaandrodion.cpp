/* LINKS
 * Problem   : https://codeforces.com/contest/584/problem/A
 * Submission: https://codeforces.com/contest/584/submission/101112178
 * */

#include <iostream>

int main()
{
	int n, t;
	
	std::cin >> n >> t;
	
	if(n == 1 && t == 10)
	{
		std::cout << -1;
		return 0;
	}
	
	if(t == 10) t = 1;
	
	std::cout << t;
	
	while(--n) std::cout << 0;
	

	return 0;
}
