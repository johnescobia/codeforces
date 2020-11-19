// https://codeforces.com/problemset/problem/580/A
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int day, preVal, curVal, count=1;
	vector<int>counts;
	
	cin >> day;
	cin >> preVal;
	
	for(int i=1; i<day; i++)
	{
		cin >> curVal;
		
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
	cout << counts.back();
	
	return 0;
}
