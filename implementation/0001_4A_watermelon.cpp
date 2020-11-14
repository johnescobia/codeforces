#include <iostream>
#include <cstdlib>
using namespace std;

int main () {
	int w;
	string s;
	int f; 
	cin >> w;
	
	if(w>=1 && w<=100){
		f = w/2;
		if(w%2==0 && f>1){
			s="YES";
		}else{
			s="NO";
		}
		cout << s;
	}
	return 0;
}
