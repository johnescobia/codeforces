#include <iostream>
using namespace std;

int main(){
	string word; // store string input
	
	cin >> word; // get string input
	
	// check if length of word does not exceed 1000
	if(word.length()<=1000){
		word.at(0)=::toupper(word.at(0)); // capitalize first character
		cout << word;  // print word with capitalized first character
	}
	
	return 0;
}
