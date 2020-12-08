/* LINKS
 * Problem   : https://codeforces.com/problemset/problem/230/A
 * Submission: https://codeforces.com/contest/230/submission/100688185
 * 
 * VARIABLES
 * $s    --> strength of Kirito
 * $n    --> total dragons to defeat
 * $x    --> strength of n-th dragon
 * $y    --> strength gained by character by defeating the n-th dragon
 * $vect --> a pair vector of integers - $x, $y
 * 
 * ALGORITHM
 * Get $s and $n from user. Get n amount of $x and $y pairs from user and
 * push it to $vect. Sort $vect in ascending order on the basis of the
 * first element.
 * 
 * If Kirito manages to kill all the dragons in an ascending manner with
 * the rules given, print "YES", otherwise, print "NO".
 * */

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int s=0, n=0, x=0, y=0;
	std::vector< std::pair <int,int> > vect;
	
	std::cin >> s >> n;
	
	for(int i = 0; i < n; i++)
	{
		std::cin >> x >> y;
		vect.push_back(std::make_pair(x,y));
	}
	
	// Sort based on first element
	sort(vect.begin(), vect.end());
	
	for(auto x: vect)
	{
		if(s > x.first)
		{
			s += x.second;
		}
		else
		{
			std::cout << "NO";
			return 0;	
		}
	}
	
	std::cout << "YES";
	
	return 0;
}
