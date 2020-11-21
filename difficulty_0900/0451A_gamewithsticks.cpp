/* Link to problem:
 * https://codeforces.com/contest/451/problem/A
 * 
 * Link to submission with test cases:
 * https://codeforces.com/contest/451/submission/99193466
 * 
 * r > c:
 * r=e c=o ==> A
 * r=o c=e ==> M
 * r=e c=e ==> M
 * r=o c=o ==> A
 * 
 * r < c:
 * r=e c=o ==> M
 * r=o c=e ==> A
 * r=e c=e ==> M
 * r=o c=o ==> A
 * 
 * r = c:
 * r=o c=o ==> A
 * r=e c=e ==> M
 * */
 
#include <iostream>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	int row, column;
	
	std::cin >> row >> column;
	
	if(row > column)
	{
		if(column%2==0)
			std::cout << "Malvika";
		else
			std::cout << "Akshat";
	}
	else if(row < column)
	{
		if(row%2==0)
			std::cout << "Malvika";
		else
			std::cout << "Akshat";
	}
	else
	{
		if(row%2==0)
			std::cout << "Malvika";
		else
			std::cout << "Akshat";
	}
	
	return 0;
}
