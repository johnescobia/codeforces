/* If input string contains H, Q, or 9, print "YES", otherwise,
 * print "NO"
 * */

#include <iostream>
using namespace std;

int main()
{
	string s;
	bool execute=false;
	
	cin >> s;
	
	for(size_t i=0; i<s.size(); i++)
	{
		if(s.at(i)=='H' || s.at(i)=='Q' || s.at(i)=='9')
		{
			execute=true;
		}
	}
	
	if(execute==true)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	
	return 0;
}
