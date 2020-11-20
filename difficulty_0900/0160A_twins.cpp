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

int main(){
	int n, coin, sum=0, remaining=0, count=0;
	bool loop = true;
	std::vector<int>val;
	
	std::cin >> n;
	
	for(int i=0; i<n; i++)
	{
		std::cin >> coin;
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
	
	std::cout << count;
	
	return 0;
}
