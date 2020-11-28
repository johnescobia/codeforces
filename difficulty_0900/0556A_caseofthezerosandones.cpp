/* Input 1: integer length       <-- length of binary string
 * Input 2: binary string        <-- has to be the length of input 1
 * Output : the length of input string without subsequent '01' and '10'
 * 
 * Input 1: 5
 * Input 2: 01010
 * Output : 1
 * 
 * Link to problem for more context:
 * https://codeforces.com/problemset/problem/556/A
 * 
 * Link to submission for input-output examples:
 * https://codeforces.com/contest/556/submission/99756795
 * 
 * Variables:
 * len    --> length of binary string
 * zeros  --> sum of zeros in the string
 * ones   --> sum of ones in the string
 * minLen --> length of binary string without subsequent '01' and '10'
 * */
 
#include <iostream>

int main()
{	
	int len=0, zeros=0, ones=0, minLen=0;
	std::string binary="";
	
	std::cin >> len; 
	std::cin >> binary;
	
	for(int i = 0; i < len; i++)
	{
		if(binary[i] == '0')
		{
			++zeros;
		}
			
		if(binary[i] == '1')
		{
			++ones;
		}	
	}
	
	minLen = len - 2*(std::min(zeros,ones));
	
	std::cout << minLen;
	
	return 0;
}
