#include <bits/stdc++.h>

using namespace std;

int sockMerchant(int n, vector <int> ar) {
    // Complete this function
    int ctr = 0;
    for(int j=0;j<101;j++){
            ctr = ctr + (ar[j]/2);
    }
    return ctr;
}

int main() {
    int n;
    cin >> n;
    int a;
    vector<int> ar(101);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> a;
       ar[a]++;
    }
    int result = sockMerchant(n, ar);
    cout << result << endl;
    return 0;
}
