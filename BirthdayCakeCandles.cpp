#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
    int max = 0, result = 0;
    for(int i = 0; i < n; i++){
        if (ar[i] > max){
            max = ar[i];
            result = 1;
        }
        else if (ar[i] == max){
            result++;
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}
