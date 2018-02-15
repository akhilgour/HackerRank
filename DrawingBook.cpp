#include <bits/stdc++.h>

using namespace std;

int solve(int n, int p){
    // Complete this function
    if(p==1)
        return 0;
    int x = p/2;
    int y = (n-p)/2;
    int z = y+1;
    if(n==p)
        return 0;
    if(x<=y)
        return x;
    else{
    if((n%2==0) && (y%2==0))
        return z;
    else
        return y;
    }
}

int main() {
    int n;
    cin >> n;
    int p;
    cin >> p;
    int result = solve(n, p);
    cout << result << endl;
    return 0;
}
