#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> arr(5);
    long sum = 0, min, max;
    
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
       if(arr_i==0){min=arr[0];max=arr[0];}
       else if (arr[arr_i] > max){
           max = arr[arr_i];
       }
       else if (arr[arr_i] < min){
           min = arr[arr_i];
       }
       sum = sum + arr[arr_i];
    }
    
    
    cout << sum-max << " " << sum-min;
    
    return 0;
}
