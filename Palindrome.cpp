#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int num = 0;
	int large = 0;
	string check = "";

    for (int i = 100; i <= 999; i++){
		for (int l = i; l <= 999; l++){

			num = i*l;
			check = to_string(num);

			if (check == string(check.rbegin(), check.rend())){
				if(num > large){
					large = num;
				}
			}
		}
	}

	cout << large;

    return 0;
}
