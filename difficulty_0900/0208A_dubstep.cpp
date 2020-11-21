/* Link to problem:
 * https://codeforces.com/contest/208/problem/A
 * 
 * Link to submission with test cases:
 * https://codeforces.com/contest/208/submission/99129198
 * */
#include <iostream>
#include <vector>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	std::vector<int> arrPos;
	std::string str, subStr="WUB", strCheck;
	
	std::cin >> str;
	
	int strLen = str.length(), subStrLen = subStr.length(), difference;
	
	for(int i=0; i<strLen; i++)
	{
		strCheck = str.substr(i, subStrLen);

		if(strCheck == subStr)
		{
			arrPos.push_back(i);
		}
	}
	
	if(arrPos.size() == 0)
	{
		std::cout << str;
	}
	else
	{
		if(arrPos.at(0) != 0)
		{
			std::cout << str.substr(0, arrPos.at(0)) << ' ';
		}
		
		for(std::size_t i=0; i<arrPos.size()-1; i++)
		{
			difference = arrPos.at(i+1) - arrPos.at(i);

			if(difference != subStrLen)
			{
				std::cout << str.substr(arrPos.at(i)+subStrLen, difference-subStrLen);
				std::cout << ' ';
			} 
		}
		
		if(arrPos.back() + subStrLen != strLen)
		{
			std::cout << str.substr(arrPos.back()+subStrLen, strLen-1);
		}
	}	
	
	return 0;
}
