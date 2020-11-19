#include <iostream>
using namespace std;

int main(){
	int n=0;  // number of problems in the contest
	int p=0;  // Petya's certainty
	int v=0;  // Vasya's certainty
	int t=0;  // Tonya's certainty
	
	cin >> n; // get number of problems
	
	// if number of problems is equal to or more than 1 and less than or
	// equal to 1000
	if(n>=1 && n<=1000){
		int arr[n];  // group's certainty for each problem
		int c=0;     // to be used for arr index 
		int total=0; // total certainty
		
		while(n>0){
			cin >> p >> v >> t; // get each person's certainty
			total = p+v+t;      // get total certainty
			
			if(total>1){          // if more than 1 person is certain
				arr[c] = 1;
			}else{                // if more than 1 person is uncertain
				arr[c] = 0;
			}
			
			total=0; // reinitialize total=0
			++c;     // increment c by 1
			--n;     // decrement n by 1
		}
		
		size_t arrSize = sizeof(arr)/sizeof(arr[0]); // array size
		int sum = 0; // total problems group is certain
		
		// get sum of total problems group is certain
		for(size_t i = 0; i < arrSize; i++){ 
			sum += arr[i];
		}
		
		cout << sum; // print sum
		
	}
	
	return 0;
}
