/* Link to problem:
 * https://codeforces.com/problemset/problem/313/A
 * 
 * Link to submission with test cases:
 * https://codeforces.com/contest/313/submission/99394923
 * */

#include <iostream>

void delete_digit(int x)
{	
	
	// Replace last two digits with 1 zero
	// int is round down by default in C++
	int frontDigits = (x/100)*10; 
	
	// Modulos(%) 100 gets the last 2 digits
	// Dividing by 10 removes last digit leaving second last digit
	int secondLastDigit = (x%100)/10;
	
	// Modulos(%) 10 gets the last digit
	int lastDigit = x%10;
	
	// Get the two possible balances
	int balance1 = frontDigits + lastDigit;
	int balance2 = frontDigits + secondLastDigit;
	
	// Since x is negative, max() results the lesser debt value
	std::cout << std::max(balance1, balance2);
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	int balance;
	
	std::cin >> balance;
	
	if(balance >= 0)
	{
		std::cout << balance;
	}
	else
	{
		delete_digit(balance);
	}
	
	return 0;
}
