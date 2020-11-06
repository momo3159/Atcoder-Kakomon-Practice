#include <iostream>
#include <vector>
#include <string>
using namespace std;
using ll = long long;

int main() {
    ll A, B, C, X;
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> X;

    ll ans = 0;
    for(int i=0;i<=A;i++) {
        for(int j=0;j<=B;j++) {
            ll rem = X - 500*i - 100*j;
            if(rem % 50 == 0) {
                ll tmp = rem / 50;
                if(0 <= tmp && tmp <= C){
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;
}
