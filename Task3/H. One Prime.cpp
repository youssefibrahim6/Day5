#include <iostream>
using namespace std;
int main()
{
	long long x;
	cin >> x;

	bool isPrime = true;
	if (x <= 1) {
		isPrime = false;

	}

	for (int i = 2; i < x; i++) {
		if(x%i==0){
			isPrime = false;
		}
	}

	if (isPrime)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;


}


