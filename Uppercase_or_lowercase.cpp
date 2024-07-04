#include <bits/stdc++.h>
using namespace std;
int main(){
    char ch,ansr;
    cin >> ch;

    if(ch >= 65 && ch <= 90){
        ansr = ch+32;
        cout << ansr;
    }

    else{
        ansr = ch-32;
        cout << ansr;
    }
    return 0;
}