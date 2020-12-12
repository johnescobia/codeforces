/* LINKS
 * Problem   : https://codeforces.com/problemset/problem/579/A
 * Submission: https://codeforces.com/contest/579/submission/101039946
 * */

#include<cstdio>

int main()
{
    int n=0, x=0;
    
    scanf("%d",&n);
    
    while(n)
    {
		// Check if the least significant variable is set or not
        if(n & 1)
			x++;
        
        // Shifts bits to the right by one
        n >>= 1;
    }
    
    printf("%d\n", x);
    
    return 0;
}
