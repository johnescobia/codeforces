/* DATA TYPES
 * Input : height width stone --> double double double 
 * Output: stonesNeeded       --> unsigned long long int
 * 
 * EXAMPLE
 * Input : 39916800 134217728 40320
 * Output: 3295710
 * 
 * LINKS
 * Problem: https://codeforces.com/contest/1/problem/A
 * Submission: https://codeforces.com/contest/1/submission/99918534
 * 
 * VARIABLES
 * height       --> height of rectangle
 * width        --> width of rectangle
 * stone        --> length of one side of a stone with square shape
 * stonesNeeded --> least amount of stones needed to cover rectangle
 * */

#include <iostream>
#include <cmath>

int main()
{
	double height=0, width=0, stone=0;
	unsigned long long int stonesNeeded=0;
	
	std::cin >> height >> width >> stone;
	
	stonesNeeded = ceil(height/stone) * ceil(width/stone);
		
	std::cout << stonesNeeded;
	
	return 0;
}
