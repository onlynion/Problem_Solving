#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;

    int sm,lg;

    if(a>=b && a>=c) lg=a;
    else if(b>=a && b>=c) lg=b;
    else if (c>=a && c>=b) lg=c;

    if(a<=b && a<=c) sm=a;
    else if(b<=a && b<=c) sm=b;
    else if (c<=a && c<=b) sm=c;

    cout << sm << " " << lg;

    

    
    return 0;
}