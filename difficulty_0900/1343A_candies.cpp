/* Link to problem:
 * https://codeforces.com/problemset/problem/1343/A
 * 
 * Link to submission with test cases:
 * https://codeforces.com/contest/1343/submission/99297582
 * */

#include <iostream>
#include <cmath>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	int testCase, k=2, ratio;
	bool loop;

	std::cin >> testCase;
	
	int wrapper[testCase], candies[testCase];
	
	for(int i=0; i<testCase; i++)
	{
		std::cin >> wrapper[i];
	}
		
	for(int i=0; i<testCase; i++)
	{
		loop=true;
		
		while(loop)
		{
			ratio = pow(2, k) - 1;
			
			if(wrapper[i]%ratio == 0)
			{
				candies[i] = wrapper[i]/ratio;
				k=2;
				loop=false;
			}
			else
			{
				++k;
			}
		}	
	}
	
	for(int x: candies)
		std::cout << x << '\n';
	
	return 0;
}
