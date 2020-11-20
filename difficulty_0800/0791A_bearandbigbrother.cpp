/*TASK
 * Every year weight1 triples and weight2 doubles. At start weight1 is
 * always lesser than or equal to weight2.
 * 
 * Input: weight1 weight2
 * Output: number of years for weight 1 to exceed weight2
 * 
 *EXAMPLES
 * #1
 * Input: 4 7
 * Output: 2
 * 
 * #2
 * Input: 4 9
 * Output: 3
 * 
 * #3
 * Input: 1 1
 * Output: 1
 * */
 
#include <iostream>

int main(){
	int weight1, weight2;
	
	std::cin >> weight1 >> weight2;
	
	int year=0;
	bool CONTINUE=true;
	
	while(CONTINUE){
		++year;
		weight1 = weight1*3;
		weight2 = weight2*2;
		
		if(weight1>weight2){
			CONTINUE=false;
		}
	}
	
	std::cout << year;

	return 0;
}
