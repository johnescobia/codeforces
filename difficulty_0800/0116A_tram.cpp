/*TASK
 * A tram goes through a number of stations. In each station, a number
 * of passengers both get on and get out the tram. Calculate the maximum
 * number of passengers in the tram as it goes to all stations.
 * 
 * First line of input: number of stations
 * Next lines of input: passengersOut passengersIn
 * 
 *NOTE
 * Tram starts with zero passengers.
 * 
 *EXAMPLE
 * Input:
 *    4
 *    0 3
 *    2 5
 *    4 2
 *    4 0
 * 
 * Output:
 *    6
 * */

#include <iostream>

int main(){
	int stations, onboard=0, in, out, max=0;
	
	std::cin >> stations;
	
	while(stations--){
		std::cin >> out >> in;	
		
		onboard = onboard - out + in;
		
		if (onboard>max){
			max = onboard;
		}
	}

	std::cout << max;
		
	return 0;
}
