#include <iostream>
#include <cstdlib>
using namespace std;

int main () {
	int w=0; // weight of watermelon
	int f=0; // weight of watermelon in half
	
	cin >> w;
	
	if(w>=1 && w<=100){
		f = w/2; 
		
		if(w%2==0 && f>1){
			cout << "YES";
		}else{
			cout << "NO";
		}
	}
	
	return 0;
}
