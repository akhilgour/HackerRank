#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    // Complete this function
    int a=0;
    int b=0;
    for(int i=0; i<10000; i++){
        if (a==0)
            a=a+x1;
        a = a + v1;
        if (b==0)
            b=b+x2;
        b = b + v2;
        
        if (a == b){
            return "YES";
        }
    }
    return "NO";
}

int main() {
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    string result = kangaroo(x1, v1, x2, v2);
    cout << result << endl;
    return 0;
}
