#include <iostream>

int main(){
	int n=0; // number of participants
	int k=0; // finisher's place to be compared with
	
	std::cin >> n >> k; // get n and k
	
	if(k>=1 && k<=50 && n>=1 && n<=50 && k<=n){
		int arr[n];  // array of each participant's score
		
		for(int i=0; i<n; i++){ // get score of each participant
			std::cin >> arr[i];
		}
		
		int kScore=arr[k-1];    // k-th place finisher's score
		int qualified=0;        // count of qualifying contestants
		
		for(int i=0; i<n; i++){ // get number of qualified participants
			if(arr[i]>=kScore && arr[i]>0){
				++qualified;
			}
		}
		
		std::cout << qualified;
	}
	
	return 0;
}
