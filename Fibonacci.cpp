#include <iostream>

using namespace std;

int main(){

    int sum = 0;
	int start = 1;
	int other = 1;
	bool turn = false;

	while ((start + other) <= 4000000){
		if ((start + other) % 2 == 0){
			sum = sum + (start + other);
		}
		if (turn == false){
			start = start + other;
			turn = true;
		}
		else if (turn == true){
			other = start + other;
			turn = false;
		}
	}

	cout << sum;
	

    return 0;
}
