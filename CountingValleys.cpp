#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long steps;
    cin >> steps;
    string level;
    cin >> level;
    int Dctr = 0;
    int Uctr = 0;
    int ctr = 0;
    int Dcount = 0;
    int Ucount = 0;
    for(int i = 0; i<steps; i++){
        if(level[i]==int('D')){
            Dctr++;
        }
        else if(level[i]==int('U')){
            Uctr++;
            if(Uctr-Dctr==0)
                ctr++;
        }
    }
    cout << ctr;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
