/* LINKS
 * Problem   : https://codeforces.com/problemset/problem/339/B
 * Submission: https://codeforces.com/contest/339/submission/100771280
 * 
 * VARIABLES
 * $n  --> number of houses along the main ringroad
 * $m  --> total number of tasks Xenia needs to do
 * $t  --> total time taken for Xenia to complete all tasks
 * $pm --> previous $m
 * $cm --> current $m
 * 
 * ALGORITHM
 * $pm is initialized at 1 because Xenia's house is numbered 1. There are
 * only two possibilities:
 *   $pm > $cm ==> passes origin once
 *   $pm < $cm ==> does not pass origin
 * */

#include <iostream>

int main()
{
	long long int n=0, m=0, t=0, pm=1, cm=0;
	
	std::cin >> n >> m;
	
	while(m--)
	{
		std::cin >> cm;
		
		if(pm > cm)
			t += n-pm+cm;
		else
			t += cm-pm;
		
		pm = cm;		
	}
	
	std::cout << t;
	
	return 0;
}
