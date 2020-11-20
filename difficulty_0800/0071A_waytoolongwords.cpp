#include <iostream>
#include <cstdlib>

int main(){
	int n;    // number of lines to be printed for string input
	std::string s; // input of strings
	int len;  // length of each string
	
	std::cin >> n; // get number of lines
	
	if(n>=1 && n<=100){
		std::string arr[n];     // array of strings
		int c = 0;         // index for inArr
		char first;        // first character of string
		char last;         // last character of string
		int mid;           // length of middle string
		std::string midString;  // string format of int mid
		
		while(n>0){
			std::cin >> s;         // get string		
			len = s.length(); // length of current string
			
			if(len > 10){
				first = s.at(0);          // get first character
				last = s.at(len-1);       // get last character
				mid = len-2;              // get length of middle string
				midString = std::to_string(mid); // convert mid to string
				s = first + midString + last;  // combine
			}
			
			arr[c] = s; // store string s
			++c;        // increment c by 1
			--n;        // decrement n by 1
		}
		
		size_t arrSize = sizeof(arr)/sizeof(arr[0]); // array size
		
		for(size_t i = 0; i < arrSize; i++){ // print elements of arr
			std::cout << arr[i] << std::endl;
		}
	}
	
	return 0;
}
