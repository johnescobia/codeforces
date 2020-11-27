/* Link to problem:
 * https://codeforces.com/problemset/problem/1337/B
 * 
 * Link to submission with test cases:
 * https://codeforces.com/contest/1337/submission/99697700
 * 
 * Explanation:
 * A greedy algorithm is implemented.
 * 
 * The Void Absorptions (VA) spell is only implemented if the dragon's
 * health (dragonHP) is more than 10. dragonHP will not decrease by
 * casting VA at dragonHP 9 or less because VA has  a "+ 10" operation.
 * 
 * The Lighting Strikes (LS) spell is only implemented if the dragon
 * slayer runs out of VA or the dragonHP is less than 10. dragonHP will
 * decrease by casting LS at dragonHP 9 or less because it has a "- 10"
 * operation.
 * 
 * The dragon slayer will stop attacking the dragon once dragonHP
 * reaches 10 or less and declare "YES". Otherwise, the dragon slayer
 * will cast all VA and LS spells and declare "NO".
 * */

#include <iostream>

int attack_dragon(int dragonHP, int nVA, int mLS)
{	
	while(dragonHP > 0)
	{			
		if(nVA > 0 && dragonHP > 10)
		{
			dragonHP = dragonHP/2 + 10;
			--nVA;		
		}
		else
		{
			if(mLS > 0)
			{
				dragonHP = dragonHP - 10;
				--mLS;
			}
			else
			{
				break;
			}
		}		
	}
	
	return dragonHP;
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	int tests, dragonHP, nVA, mLS;
	
	std::cin >> tests;
	
	while(tests--)
	{
		std::cin >> dragonHP >> nVA >> mLS;
		
		dragonHP = attack_dragon(dragonHP, nVA, mLS);
		
		if(dragonHP > 0)
		{
			std::cout << "NO\n";
		}
		else
		{
			std::cout << "YES\n";
		}
	}
	
	return 0;
}
