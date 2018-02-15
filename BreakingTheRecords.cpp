#include <bits/stdc++.h>

using namespace std;

vector < int > getRecord(vector < int > a, int n){
    // Complete this function
    vector <int> results;
    int max = 0, min = 0;
    int maxctr = 0, minctr = 0;
    for (int i=0; i<n; i++){
        if(i==0){
            max = a[0];
            min = a[0];
        }
        else if(a[i]>max){
            max = a[i];
            maxctr++;
        }
        else if(a[i]<min){
            min = a[i];
            minctr++;
        }
    }
    results.push_back(maxctr);
    results.push_back(minctr);
    return results;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    vector < int > result = getRecord(s,n);
    string separator = "", delimiter = " ";
    for(auto val: result) {
        cout<<separator<<val;
        separator = delimiter;
    }
    cout<<endl;
    return 0;
}
