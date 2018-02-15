#include <bits/stdc++.h>

using namespace std;

vector < int > solve(int a0, int a1, int a2, int b0, int b1, int b2){
    // Complete this function
    int sumA=0;
    int sumB=0;
    vector <int> res;
    if (a0>b0)
        sumA=sumA+1;
    if (a0<b0)
        sumB=sumB+1;
    if (a1>b1)
        sumA=sumA+1;
    if (a1<b1)
        sumB=sumB+1;
    if (a2>b2)
        sumA=sumA+1;
    if (a2<b2)
        sumB=sumB+1;
    res.push_back(sumA);
    res.push_back(sumB);
    return res;
}

int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    vector < int > result = solve(a0, a1, a2, b0, b1, b2);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;
    

    return 0;
}
