#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	long long n, m;
	while (cin >> n>> m) {
		if (n <= 0 || m <= 0) {
			break;
		}
		long long start = min(n,m), end= max(n,m);
		long long sum = 0;
		for (int i = start; i <= end; i++) {
			cout << i << " ";
			sum += i;
		}
		cout << "sum =" << sum << endl;

	}
}


