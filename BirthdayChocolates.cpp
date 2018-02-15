#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector < int > s, int d, int m){
    // Complete this function
    int ctr=0, sum;
    for(int i=0; i<n; i++){
        sum = 0;
        int x = i + m;
        if (x > n)
        {
            break;
        }
        for(int j=i; j<i+m; j++){
            //if(j==0)
                //sum=s[0];
            sum = sum + s[j];
        }
        if(sum==d){
            ++ctr;
            
        
        }
    }
    return ctr;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;
    int result = solve(n, s, d, m);
    cout << result << endl;
    return 0;
}
