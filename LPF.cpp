#include <iostream>

using namespace std;

int main(){

    long long num = 0LL;
	int curr = 2;
	int large = 2;
	
	cout << "Enter the number to be factored: ";
	cin >> num;

	while (num > 1){
		if (num % curr == 0){
			num = num/curr;
				if (curr > large){
					large = curr;
				}
			curr = 2;
		}
		else{
			curr++;
		}
	}

	cout << endl << large;

    return 0;
