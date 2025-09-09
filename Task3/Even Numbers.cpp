#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    bool found = false;

    for (int i = 2; i <= n; i += 2) {
        cout << i << endl;
        found = true;
    }

    if (!found) {
        cout << -1 << endl;
    }



}


