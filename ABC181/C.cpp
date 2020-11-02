#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<int> x(N), y(N);
    for(int i=0;i<N;i++) {
        cin >> x[i] >> y[i];
    }

    bool exist = false;
    for(int i=0;i<N-2;i++) {
        for(int j=i+1;j<N-1;j++) {
            for(int k=j+1;k<N;k++) {
                ll dx1 = (x[j] - x[i]);
                ll dx2 = (x[k] - x[i]);
                ll dy1 = (y[j] - y[i]);
                ll dy2 = (y[k] - y[i]);

                if(dx2*dy1 == dx1*dy2) {
                    exist = true;
                }
            }
        }
    }

    if(exist) cout << "Yes" << endl;
    else cout << "No" << endl;
}
