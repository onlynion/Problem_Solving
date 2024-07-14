#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,maxi=0,k;
    cin >> n;

    for(int i=1; i<=n; i++){
        cin >> k;
        if(k >= maxi) maxi = k;
    }

    cout << maxi;

    
    return 0;
}