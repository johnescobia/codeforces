#include <iostream>
#include <vector>
#include <algorithm>

// convert numbers in input string from character to integer
// insert converted integers into a vector of integers
// sort the vector of integers in ascending order
void ascendingNum(std::string s, int len, std::vector<int> &arr){
	char a; // to store character number
	int ia; // to store integer of character number
	
	for(int i=0; i<len; i++){
		if(s.at(i)!='+'){
			a = s.at(i);  // get character number
			ia = a - '0'; // convert char number to integer
			arr.push_back(ia); // put integer at the end of vector
		}
	}
	
	sort(arr.begin(), arr.end()); // sort vector in ascending order
}

// driver function
int main(){
	std::string s;     // input string
	int len = 0;  // length of input string
	
	std::cin >> s;     // get input string
	
	len = s.length(); // get length of input string
	
	if(len <= 100){
		std::vector<int>arr;
		
		ascendingNum(s, len, arr);
		
		int size = arr.size();
		
		for(int i=0; i<size; i++){
			std::cout << arr.at(i);
			
			if(i<size-1)       // no plus sign after the last number
				std::cout << "+";
		}
	}
	
	return 0;
}
