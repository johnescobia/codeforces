// https://codeforces.com/problemset/problem/208/A
#include <iostream>
#include <vector>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	std::string str, subStr="WUB", strCheck;
	int subStrLen = subStr.length(), difference;
	std::vector<int> arrPos;
	
	std::cin >> str;
	
	for(std::size_t i=0; i<str.length(); i++)
	{
		strCheck = str.substr(i, subStrLen);

		if(strCheck == subStr)
		{
			arrPos.push_back(i);
		}
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
	
	return 0;
}
