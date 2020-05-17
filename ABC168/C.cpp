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
 
 static const long double pi = 3.141592653589793238462643;
 
int main(){
    int a, b, h, m;
    cin >> a >> b >> h >> m;
 
    long double res;
    long double rec_long = pi * m /30;
    long double rec_short = (h*pi/6) + (m*pi/360);
 
    long double rec = rec_long - rec_short;
 
    if(rec < 0) rec = (-1)*rec;
    if(rec > pi) rec = 2*pi - rec;
 
    res = a*a + b*b - 2*a*b*cos(rec);
    cout << std::fixed << std::setprecision(12) << sqrtl(res) << endl;
}