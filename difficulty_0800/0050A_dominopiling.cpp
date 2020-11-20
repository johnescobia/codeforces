#include <iostream>
#include <cmath>

int main(){
	int row;
	int column;
	
	std::cin >> row >> column;
	
	if(row>=1 && row<=column && column<=16){
		int squares = row*column;     // total squares in the board
		float dominoes = squares*0.5; // 1 domino covers 2 squares
		
		// make sure no part of domino is outside the board even if 1
		// square is uncovered
		dominoes = floor(dominoes);
		
		std::cout << dominoes;   
	}
	
	return 0;
}
