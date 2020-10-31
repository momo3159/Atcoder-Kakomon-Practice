#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<algorithm>
#include<string>
#include<iomanip>
#include<vector>
using namespace std;

int main(){
    string S;
    cin >> S;
    int i = '0';
    bool YYMM = true;
    bool MMYY = true;

    if((S[2] == '0' && S[3] == '0') || (S[2] == '1' && S[3] - i > 2) || S[2] - i > 2){
        YYMM = false;
    }
    if((S[0] == '0' && S[1] == '0') || (S[0] == '1' && S[1] - i > 2) || S[0] - i > 2){
        MMYY = false;
    }

    if(YYMM && MMYY){
        cout << "AMBIGUOUS" << endl;
    } else if(!YYMM && !MMYY){
        cout << "NA" << endl;
    } else if(YYMM){
        cout << "YYMM" << endl;
    } else if(MMYY){
        cout << "MMYY" << endl;
    }
}
