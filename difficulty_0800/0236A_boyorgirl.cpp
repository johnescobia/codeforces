#include <iostream>
#include <set>

/*VARIABLES
 * name = username
 * unique = set of unique characters
 * 
 *ALGORITHM
 * - Get username
 * - Function insert() only inserts unique characters to unique
 * - If remainder of unique/2 is zero print "CHAT WITH HER!"
 * - Else print "IGNORE HIM!"
 * */

int main(){
	std::string name;
	std::cin >> name;
	std::set<char> unique;
	
	for(char x: name)
		unique.insert(x);
	
	if(unique.size()%2==0)
		std::cout << "CHAT WITH HER!";
	else
		std::cout << "IGNORE HIM!";
	
	return 0;
}
	
