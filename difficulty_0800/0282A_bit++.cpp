#include <iostream>

int main(){
	int x=0;  // initial value of x is 0
	int n;    // number of statements
	
	std::cin >> n;
	
	if(n>=1 && n<=150){
		std::string op;                        // name of operation
		
		for(int i=0; i<n; i++){
			std::cin >> op;
			
			if(op=="++X" || op=="X++"){
				++x;                      // increment x by 1
			}
			
			if(op=="--X" || op=="X--"){
				--x;                      // decrement x by 1
			}
		}
		
		std::cout << x;
	}
	
	return 0;
}
