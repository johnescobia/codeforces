#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int n;
	string s;
	
	cin >> n;
	
	if(n>=1 && n<=100){
		int c = n;
		string inArr[n];
		
		while(n>0){
			cin >> s;
			
			int len = s.length();
			
			if(len > 10){
				char first = s.at(0);
				char last = s.at(len-1);
				int mid = len-2;
				s = first + to_string(mid) + last;
			}
			
			inArr[c-n] = s;
			--n;
		}
		
		int i = 0;
		
		while(c>0){
			cout << inArr[i] << endl;
			++i;
			--c;
		}

	}
	return 0;
}
