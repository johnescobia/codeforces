/* LINKS
 * Problem   : https://codeforces.com/problemset/problem/1342/A
 * Submission: https://codeforces.com/contest/1342/submission/101173488
 * */

#include <iostream>

long long int _a(long long int x, long long int y, long long int a)
{	
	return a*(x+y);
}

long long int _ab(long long int x, long long int y, long long int a, long long int b)
{
	a *= abs(x-y);
		
	if(x < y) b *= x;
	else b *= y;
	
	return a + b;
}

int main()
{
	long long int t, x, y, a, b;
	
	std::cin >> t;
	
	while(t--)
	{
		std::cin >> x >> y >> a >> b;
		
		std::cout << std::min(_a(x,y,a), _ab(x,y,a,b)) << '\n';
	}
	
	return 0;
}
