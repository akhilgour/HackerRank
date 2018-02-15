#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long i, j, k, rev;
    cin >> i >> j >> k;
    int ctr = 0;
    for(int a = i; a <= j; a++){
        long rem = a;
        rev = 0;
        int inc = 0;
        while(rem!=0){
            rev = (rev*10) + (rem%10);
            rem = rem/10;
        }
        long diff = abs(rev - a);
        if(diff%k == 0)
            ctr++;
    }
    
    cout << ctr;
    return 0;
}
