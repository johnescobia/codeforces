// https://codeforces.com/problemset/problem/405/A
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	int n, a;
	std::vector<int>gravitate;
	
	std::cin >> n;	
	
	for(int i=0; i<n; i++)
	{
		std::cin >> a;
		gravitate.push_back(a);
	}
	
	sort(gravitate.begin(), gravitate.end());
	
	for(auto x: gravitate)
		std::cout << x << " ";	
	
	return 0;
}

