#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,num,even=0,odd=0,pos=0,neg=0;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> num;

        if(num%2 == 0) even++;
        if(num%2 != 0) odd++;
        if(num > 0) pos++;
        if(num < 0) neg++;
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;
    return 0;
}