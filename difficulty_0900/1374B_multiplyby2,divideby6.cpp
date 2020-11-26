/* Link to problem:
 * https://codeforces.com/contest/1374/problem/B
 * 
 * Link to submission with test cases:
 * https://codeforces.com/contest/1374/submission/99619239
 * 
 * Link to comments on codeforces:
 * https://codeforces.com/blog/entry/79517?#comment-726399
 * 
 * Explanation:
 * Given two methods - divide by 6 and multiply by 2. The answer '1' can
 * be achieved with 6 divided by 6. Moreover, 6 can be achieved by
 * multiplying 3 by 2. So, for each n, do the inner while-loop with
 * conditions: n>=6 || n==3.
 * 
 * Note:
 * Please visit the link to problem to get a broader understanding of
 * the context for which the code is solving.
 * */

#include <iostream>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	int t, n, i;
	
	std::cin >> t;
	
	while(t--)
	{
		i=0;
		std::cin >> n;
		
		while(n>=6 || n==3)
		{
			if(n%6 == 0) n /= 6;
			else n *= 2;		
			++i;
		}
		
		if(n==1) std::cout << i << '\n';
		else std::cout << -1 << '\n';
	}
	
	return 0;
}
