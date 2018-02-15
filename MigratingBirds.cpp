#include <bits/stdc++.h>

using namespace std;

int migratoryBirds(int n, vector <int> ar) {
    // Complete this function
    int max = 0, count, answer;
    int id[5] = {0,0,0,0,0};
    for (int i=0; i<n; i++){
        id[ar[i]-1]++;
    }
    
        count = 0;
        for (int j=0; j<5; j++){
            if (j==0)
                max=id[0];
        if(max < id[j]){
            max = id[j];
            answer = j+1;
        }
        else if ((max == id[j]) && (answer > id[j])){
           answer = id[j];
        }
    }

    return answer;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    return 0;
}
