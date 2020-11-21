// https://codeforces.com/problemset/problem/337/A
#include <iostream>
#include <algorithm>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	int student, puzzle;
	
	std::cin >> student >> puzzle;
	
	int arr[puzzle];
	
	for(int i=0; i<puzzle; i++)
		std::cin >> arr[i];
	
	std::sort(arr, arr + puzzle);

	int minRange = arr[student-1] - arr[0];
	int currentRange;
	
	for(int i=0; i<puzzle-student; i++)
	{
		currentRange = arr[i+student] - arr[i];
		minRange = std::min(minRange, currentRange);
	}
	
	std::cout << minRange;	
	
	return 0;
}
