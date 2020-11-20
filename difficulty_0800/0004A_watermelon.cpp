#include <iostream>
#include <cstdlib>

int main () {
	int w=0; // weight of watermelon
	int f=0; // weight of watermelon in half
	
	std::cin >> w;
	
	if(w>=1 && w<=100){
		f = w/2; 
		
		if(w%2==0 && f>1){
			std::cout << "YES";
		}else{
			std::cout << "NO";
		}
	}
	
	return 0;
}
