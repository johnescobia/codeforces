#include <iostream>
using namespace std;

int main(){
	int n=0; // number of participants
	int k=0; // finisher's place to be compared with
	
	cin >> n >> k;
	
	if(k>=1 && k<=50 && n>=1 && n<=50 && k<=n){
		int arr[n];  // array of each participant's score
		int c=0;     // counter for array index
	
		while(n>0){
			cin >> arr[c];
			++c;
			--n;
		}
		
		int arr_size=sizeof(arr)/sizeof(arr[0]); // size of array
		int kScore=arr[k-1];    // k-th place finisher's score
		int qualified=0;        // count of qualifying contestants
		
		for(int i=0; i<arr_size; i++){
			if(arr[i]>=kScore && arr[i]>0){
				++qualified;
			}
		}
		
		cout << qualified;
	}
	
	return 0;
}
