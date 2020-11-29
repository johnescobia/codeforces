/* Input 1: char --> direction of placement of kand on keyboard
 * Input 2: string --> input string
 * Output : string --> modified input 2 in accordance to input 1
 * 
 * Input 1: R
 * Input 2: s;;upimrrfod;pbr
 * Output : allyouneedislove
 * 
 * Link to problem for context:
 * https://codeforces.com/problemset/problem/474/A
 * 
 * Link to submission for input-output examples:
 * https://codeforces.com/contest/474/submission/99793265
 * 
 * Variables:
 * topKeys     --> string of characters on top section of keyboard
 * middleKeys  --> string of characters on middle section of keyboard
 * bottomKeys  --> string of characters on bottom section of keyboard
 * direction   --> placement of hand of blind typer
 * input       --> input of blind typer
 * */

#include <iostream>

void print_according_to_direction(std::string str, int pos, char dir)
{
	if(dir == 'R')
	{
		std::cout << str[pos-1];
	}
	else
	{
		std::cout << str[pos+1];
	}
}

int main()
{
	std::string topKeys = "qwertyuiop";
	std::string middleKeys = "asdfghjkl;";
	std::string bottomKeys = "zxcvbnm,./";
	char direction;
	std::string input;
	
	std::cin >> direction;
	std::cin >> input;
	
	for(std::size_t i = 0; i < input.length(); i++)
	{
		for(size_t j = 0; j < topKeys.length(); j++)
		{
			if(topKeys[j] == input[i])
			{
				print_according_to_direction(topKeys, j, direction);
				break;
			}
			
			if(middleKeys[j] == input[i])
			{
				print_according_to_direction(middleKeys, j, direction);
				break;
			}
			
			if(bottomKeys[j] == input[i])
			{
				print_according_to_direction(bottomKeys, j, direction);
				break;
			}
		}
	}
	
	return 0;
}
