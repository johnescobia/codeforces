#include <iostream>
using namespace std;

/*VARIABLES
 * k = price of first banana
 * n = money at hand
 * w = amount of bananas to buy
 * Sw = total cost of bananas
 * 
 *ALGORITHM
 * - Sum of arithmetic series formula is used to calculate Sw
 * */

int main()
{
	int k, n, w, Sw;
	
	cin >> k >> n >> w;
	
	Sw = (w*((2*k)+(w-1)*k))/2;
	
	if(n>=Sw)
	{
		cout << 0;
	}
	else
	{
		cout << Sw-n;
	}
		
	return 0;
}
