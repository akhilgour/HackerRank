#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    int hour;
    string output = s.substr(0, 8);
    string time = s.substr(s.size() - 2);
    string hr = s.substr(0,2);
    if(time == "PM" && hr != "12"){
        hour = stoi(hr);
        hour = hour + 12;
    
    stringstream ss;
        ss << hour;

        output[0] = ss.str()[0];
        output[1] = ss.str()[1];
    }
    else if (time == "AM" && hr == "12") {
        output[0] = output[1] = '0';
    }
    return output;
}

int main() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}
