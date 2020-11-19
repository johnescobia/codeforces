/*TASK
 * First input: number of coins
 * Second input: value of each coin
 * Output: minimum number of coins that if combined will have
 *         value greater than half of the sum of all coins.
 * 
 *EXAMPLE 1
 * Input:
 * 2
 * 3 3
 * Output:
 * 2
 * 
 *EXAMPLE 2
 * Input:
 * 3
 * 2 1 2
 * Output:
 * 2
 * */

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
	int n, coin, sum=0, remaining=0, count=0;
	bool loop = true;
	//~ vector<int> *val = new vector<int>();
	
	cin >> n;
	vector<int>val(n);
	
	for(int i=0; i<n; i++)
	{
		cin >> coin;
		val.push_back(coin);
	}
	
	sort(val.begin(), val.end());

	while(loop){
		sum += val.back();
		val.pop_back();
		++count;
		
		remaining = accumulate(val.begin(), val.end(), 0);
		
		if(sum > remaining)
			loop = false;
	}
	
	cout << count;
	
	return 0;
}
