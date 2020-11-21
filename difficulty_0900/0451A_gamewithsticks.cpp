/* Link to problem:
 * https://codeforces.com/contest/451/problem/A
 * 
 * Link to submission with test cases:
 * https://codeforces.com/contest/451/submission/99192264
 * */
 
#include <iostream>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	int row, column;
	
	std::cin >> row >> column;
	
	if(row%2 == 0)
		std::cout << "Malvika";
	else
		std::cout << "Akshat";
	
	return 0;
}
