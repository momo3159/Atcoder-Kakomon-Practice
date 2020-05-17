#pragma GCC optimize("Ofast")
#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<string>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<math.h>
#include<utility>
using namespace std;
 
 
int main(){
    int k;
    cin >> k;
    string s;
    cin >> s;
 
    int length = s.size();
 
    if(length <= k){
        cout << s << endl;
    } else {
        for(int i=0;i<k;i++){
            cout << s[i];
        }
        cout << "..." << endl;
    }
}
