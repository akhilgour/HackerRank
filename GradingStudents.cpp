#include <bits/stdc++.h>

using namespace std;

vector < int > solve(vector < int > grades){
    // Complete this function
    for (int i=0; i<60; i++){
        if(grades[i] < 38){
            grades[i] = grades[i];
        }
        else{
            int rem = grades[i] % 5;
            if(rem <= 2){
                grades[i] = grades[i];
            }
            else if(rem > 2){
                grades[i] = grades[i] + (5-rem);
                grades[i] = grades[i];
            }
        }
    }
    return grades;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    vector < int > result = solve(grades);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;
    

    return 0;
}
