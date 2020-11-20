/* If input string contains H, Q, or 9, print "YES", otherwise,
 * print "NO"
 * */

#include <iostream>

int main()
{
	std::string s;
	bool execute=false;
	
	std::cin >> s;
	
	for(size_t i=0; i<s.size(); i++)
	{
		if(s.at(i)=='H' || s.at(i)=='Q' || s.at(i)=='9')
		{
			execute=true;
		}
	}
	
	if(execute==true)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
	
	return 0;
}
