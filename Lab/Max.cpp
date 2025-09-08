#include <iostream>
using namespace std;

int main()
{
    int n;
    int max=0;
    int x;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (x > max) {
            max= x;
        }
    }

    cout << max << endl;
  

    return 0;
}
