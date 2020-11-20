#include <iostream>

int main(){
	int n, op;
	
	std::cin >> n >> op;
	
	while(op--){
		if(n%10==0){
			n=n/10;
		}else{
			n=n-1;
		}
	}
	
	std::cout << n;
	
	return 0;
}
