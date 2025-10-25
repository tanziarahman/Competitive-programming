#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    vector<char> requiredString;

    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y')
        {
            requiredString.push_back('.');
            requiredString.push_back(s[i]);
        }
    }

    string final(requiredString.begin(), requiredString.end());

    cout << final;
}