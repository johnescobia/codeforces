/* DESCRIPTION
 * n = numbers in an odd even sequence
 * k = k-th place number in the odd even sequence
 * Range: 1 <= k <= n <= 10^12
 * Input: n k
 * Output: number at k-th place
 * 
 * EXAMPLE
 * Input: 91028405 61435545
 * Output: 31842684
 * */

#include <iostream>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	long long n, k;
	std::cin >> n >> k;
	
	if(k<=(n+1)/2)
	{
		std::cout << k*2-1; // k-th place of odd number
	}
	else
	{
		std::cout << (k-(n+1)/2)*2; // -th place of even number
	}
	
	return 0;
}
