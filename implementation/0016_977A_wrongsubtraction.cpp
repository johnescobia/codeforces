// https://codeforces.com/problemset/problem/977/A

#include <iostream>
using namespace std;

int main(){
	int n, op;
	
	cin >> n >> op;
	
	while(op--){
		if(n%10==0){
			n=n/10;
		}else{
			n=n-1;
		}
	}
	
	cout << n;
	
	return 0;
}
