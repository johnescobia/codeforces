#include <iostream>
using namespace std;

int main(){
	int arr[5][5]; // 2D input array
	int x,y;       // index of value 1
	int steps;     // shortest distance to middle from value 1
	
	// get user 2D input
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			cin >> arr[i][j];
			if(arr[i][j]==1){ // get index if value 1
				x=j;
				y=i;
			}
		}
	}
	
	// calculate steps from 1 to middle for both x- and y-axis
	// disregard +/- sign and combine steps for both x- and y-axis	
	x = abs(x-2); 
	y = abs(y-2);
	steps = x+y;
	
	cout << steps;
	
	return 0;
}

