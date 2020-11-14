#include <iostream>
using namespace std;

int main(){
	int n=0, p=0, v=0, t=0;
	
	cin >> n;
	
	if(n>=1 && n<=1000){
		int arr[n], c=n;
		
		while(n>0){
			cin >> p >> v >> t;
			
			t = p+v+t;
			
			if(t>1){
				arr[c-n] = 1;
			}else{
				arr[c-n] = 0;
			}
			
			t=0;
			--n;
		}
		
		int sum = 0;
		
		for(int i=0; i<c; i++){
			sum += arr[i];
		}
		
		cout << sum;
		
	}
	
	return 0;
}
