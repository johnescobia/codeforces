/* LINKS
 * Problem   : https://codeforces.com/contest/479/problem/A
 * Submission: https://codeforces.com/contest/479/submission/100619995
 * 
 * VARIABLES
 * $a, $b, $c --> input integers
 * $arr[]     --> array of possible values of inputs
 * $max       --> maximum value of $arr[]
 * 
 * ALGORITHM
 * Get $a, $b, $c from user. Do 5 different operations on the inputs and
 * store to $arr[]. Assign max to arr[0]. Compare max with the rest of
 * the elements of $arr[]. If arr[i] > max, then, max = arr[i]
 * */

#include <iostream>
 
int main()
{
	int a, b, c;
	
	std::cin >> a >> b >> c;
	
	int arr[] = {a+b+c, a+b*c, a*(b+c), a*b*c, (a+b)*c};
	
	int max = arr[0];
	
	for(std::size_t i = 1; i < sizeof(arr)/sizeof(arr[0]); i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
		}
	}
	
	std::cout << max;
	
	return 0;
}
