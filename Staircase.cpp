#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        for(int j=0; j <= n-i-2; j++){
            cout << " ";
        }   
        for(int j = n-i-1; j < n; j++){
            cout << "#";
        }
        cout << "\n";
    }
    return 0;
}
