#include <iostream>
using namespace std;

inline int odd(int x){
	return (x%2);
}

int main() {
	int sum = 0;

	for(int i=1; i<=100000; i++){
		if(odd(i)){
			sum += 1;
		}
	}

	cout << sum;

	return 0;
}
