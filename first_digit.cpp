#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n;
    k = n/1000;
    
    if(k%2 == 0) cout << "EVEN";
    else cout << "ODD";
    return 0;
}