#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    double x, y, z, ctr, neg = 0, pos = 0, zero = 0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
        if (arr[arr_i] < 0){
           neg++;
       }
       else if (arr[arr_i] == 0){
           zero++;
       }
       else
           pos++;
       ctr++;
    }
    
    
       x = double(neg/ctr);
       y = double(pos/ctr);
       z = double(zero/ctr);
    
    cout << y << "\n";
    cout << x << "\n";
    cout << z << "\n";
    return 0;
}
