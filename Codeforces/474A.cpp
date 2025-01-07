#include<iostream>
#include<string>
#include<vector>
 
using namespace std;
 
int main()
{
    char c;
    string s,q, t="qwertyuiopasdfghjkl;zxcvbnm,./";
    cin >> c;
    cin >> s;
 
    if (c == 'R') {
        for (int i = 0; i < s.length(); i++) {
            int pos = t.find(s[i]);
            if (pos != string::npos && pos > 0) {
                s[i] = t[pos - 1];
            }
        }
    }
 
    else if (c == 'L') {
        for (int i = 0; i < s.length(); i++) {
            int pos = t.find(s[i]);
            if (pos != string::npos && pos < t.length() - 1) {
                s[i] = t[pos + 1];
            }
        }
    }
 
    cout << s;
}