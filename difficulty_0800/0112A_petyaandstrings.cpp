#include <iostream>
#include <algorithm>

// string passed by reference
// transform all characters to uppercase
void toUpper(std::string &s){
	for_each(s.begin(), s.end(), [](char & c){
		c=::toupper(c);
	});
}

int main(){
	std::string s1, s2;   // input strings
	int len;         // length of string
	
	std::cin >> s1 >> s2; // get strings
	
	len=s1.length(); // get length of string
	
	if(len>=1 && len<=100){
		toUpper(s1); // transform s1 to uppercase
		toUpper(s2); // transform s2 to uppercase
		
		if(s1!=s2){     // if strings are not equal
			if(s1<s2){
				std::cout << "-1";
			}else{
				std::cout << "1";
			}
		}else{          // if strings are equal
			std::cout << "0";
		}
	}
	
	return 0;
}
