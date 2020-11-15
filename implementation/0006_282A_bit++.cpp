#include <iostream>
using namespace std;

int main(){
	int x=0;  // initial value of x is 0
	int n;    // number of statements
	
	cin >> n;
	
	if(n>=1 && n<=150){
		string op;                        // name of operation
		
		for(int i=0; i<n; i++){
			cin >> op;
			
			if(op=="++X" || op=="X++"){
				++x;                      // increment x by 1
			}
			
			if(op=="--X" || op=="X--"){
				--x;                      // decrement x by 1
			}
		}
		
		cout << x;
	}
	
	return 0;
}
