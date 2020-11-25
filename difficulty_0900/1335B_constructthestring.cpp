/* Link to problem:
 * https://codeforces.com/contest/1335/problem/B
 * 
 * Link to submission with test cases:
 * https://codeforces.com/contest/1335/submission/99552073
 * */

#include <iostream>

char digit_to_letter(int x)
{
	return char('a' + x);
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	int tests, strLen, sbstrLen, distinct, digitLetter=0;
	
	std::cin >> tests;

	while(tests--)
	{
		std::cin >> strLen >> sbstrLen >> distinct;
		
		std::string s = "";
		
		for(int j=0; j<strLen; j++)
		{			
			if(j%sbstrLen==0 || digitLetter%distinct==0)
				digitLetter=0;
			
			s += digit_to_letter(digitLetter);
			
			++digitLetter;
		}
		
		std::cout << s << '\n';
	}

	return 0;
}
