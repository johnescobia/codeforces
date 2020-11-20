// https://codeforces.com/problemset/problem/96/A
#include <iostream>

int main()
{
	std::string pos;
	int count=1, len;
	
	std::cin >> pos;
	
	char c = pos.at(0);
	len = pos.length();
	
	for(int i=1; i<len; i++)
	{
		if(count < 7)
		{
			if(c == pos.at(i))
			{
				++count;
			}
			else
			{
				c = pos.at(i);
				count = 1;
			}
		}
		else
		{
			break;
		}
	}
	
	if(count < 7)
	{
		std::cout << "NO";
	}
	else
	{
		std::cout << "YES";
	}
	
	return 0;
}
