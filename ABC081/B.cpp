#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i=0;i<N;i++) cin >> a[i];

    int ans = 100000000;
    for(int i=0;i<N;i++) {
        int cnt = 0;
        while(a[i] % 2 == 0) {
            cnt++;
            a[i] /= 2;
        }

        if(ans > cnt) ans = cnt;
    }

    cout << ans << endl;
}
