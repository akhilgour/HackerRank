#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <math.h>

using namespace std;


int main(){
    int n,ctr = 0, maxctr = 0, j;
    cin >> n;
    vector<int> a(n), b(100);
    b={0};
    a={0};
    for(int a_i = 0;a_i <= n;a_i++){
        cin >> a[a_i];
    }
    for(int i = 0; i<=n; i++ ){
        b[a[i]]++;
    }
    
    
    for(int i=0; i<=n; i++){
        if(b[i]+b[i+1] > maxctr)
            maxctr = b[i]+b[i+1];
    }
    cout<<maxctr;
    return 0;
}
