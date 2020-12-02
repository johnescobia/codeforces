/* DATA TYPES
 * Input : n        --> int
 *         .
 *         .
 *         until n
 * Output: print    --> string
 * 
 * EXAMPLE
 * Input : 3
 *         0 2 -2
 *         1 -1 3
 *         -3 0 0 
 * Output: NO
 * 
 * LINKS
 * Problem: https://codeforces.com/contest/69/problem/A
 * Submission: https://codeforces.com/contest/69/submission/100212404
 * 
 * VARIABLES
 * n  --> number of vectors for each x, y and z vectors to consider
 * x  --> total vector x
 * y  --> total vector y
 * z  --> total vector z
 * xn --> vector x at n
 * yn --> vector of y at n
 * zn --> vector of z at n
 *
 * ALGORITHM
 * Get number (n) of vectors needed for each vector (x, y, z). Get value of each
 * vector at n with xn, yn, and zn and add to vectors x, y and z respectively.
 * If vectors x, y, and z are all zeros, it means that the object is equilibrium,
 * thus, print "YES". Otherwise, print "NO".
 * */

#include <iostream>

int main()
{
	int n=0, x=0, y=0, z=0, xn=0, yn=0, zn=0;

	std::cin >> n;

	for(int i = 0; i < n; i++)
	{
		std::cin >> xn >> yn >> zn;
		x += xn;
		y += yn;
		z += zn;
	}

	if(x == 0 && y == 0 && z == 0)
		std::cout << "YES";
	else
		std::cout << "NO"; 

	return 0;
}
