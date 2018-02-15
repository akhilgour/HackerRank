#include <bits/stdc++.h>

using namespace std;

long bonAppetit(long n, long k, long b, vector <long> ar, long sum) {
    // Complete this function
   long sum1 = (sum - ar[k])/2;
        return (sum1);
    
}

int main() {
    long n;
    long k;
    long sum = 0;
    cin >> n >> k;
    vector<long> ar(n);
    for(long ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
       sum = sum + ar[ar_i];
    }
    long b;
    cin >> b;
    long result = bonAppetit(n, k, b, ar, sum);
    long c = b-result;
    if(result == b){
        cout << "Bon Appetit" << endl;
        
    }
    else
        cout << c << endl;
    return 0;
}
