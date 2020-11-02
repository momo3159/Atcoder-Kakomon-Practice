#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;

    bool isB = false;
    for(int i=0;i<N;i++) {
        if(i%2 == 0) isB = true;
        else isB = false;
    }

    if(isB) cout << "Black" << endl;
    else cout << "White" << endl;
}
