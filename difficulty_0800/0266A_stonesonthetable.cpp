#include <iostream>
#include <vector>
using namespace std;

/* VARIABLES
 * n = number of stones on the board
 * v = dynamic integer vector
 * color[n] = array of characters for each stone's color
 * s = counter for stones with the same color are arragned side by side
 * take = number of stones to take out
 * 
 * MAIN ALGORITHM
 * 2 possible number of stones on the table:
 *    If 1 stone,
 *       there are 0 stones to be taken out.
 *    If >1 && <=50 stones,
 *       the total number of stones to be taken out is the total number
 *       of times two stones with the same color are arranged side by
 *       side.  
 * */

int main(){
	int n;

	cin >> n;
	
	if(n>=1 && n<=50){
		vector<int>v(n);
		char color[n];
		int s=0; 

		if(n==1){
			v.push_back(s);
		}else{
			for(int i=0; i<n; i++){
			cin >> color[i];
			
			if(i>0){
				if(color[i]==color[i-1]){
					++s;
					
					if(i==n-1){
						v.push_back(s);
					}
				}else{
					v.push_back(s);
					s=0;
				}
			}
			}
		}
				
		int take=0;
		
		for(auto x : v)
			take += x;
			
		cout << take;
	}
	
	return 0;
}
