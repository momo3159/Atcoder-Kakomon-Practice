#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int ans = 0;
    int diff = abs(B - A);
    while(diff != 0) {
        int tmp1 = abs(diff - 1);
        int tmp5 = abs(diff - 5);
        int tmp10 = abs(diff - 10);

        diff = min(tmp1, min(tmp5, tmp10));
        ans++;
    }

    cout << ans << endl;
}
