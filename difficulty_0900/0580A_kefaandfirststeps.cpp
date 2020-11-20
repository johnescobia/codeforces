// https://codeforces.com/problemset/problem/580/A
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int day, preVal, curVal, count=1;
	std::vector<int>counts;
	
	std::cin >> day;
	std::cin >> preVal;
	
	for(int i=1; i<day; i++)
	{
		std::cin >> curVal;
		
		if(curVal>=preVal)
		{
			++count;
		}
		else
		{
			counts.push_back(count);
			count = 1;
		}
		
		preVal=curVal;
	}
	
	counts.push_back(count);
	sort(counts.begin(), counts.end());
	std::cout << counts.back();
	
	return 0;
}
