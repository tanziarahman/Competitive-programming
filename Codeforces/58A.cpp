#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s,t = "hello";
    int j=0, count=0;
    cin >> s;

    for(int i=0;s[i]!='\0';i++){
        if(s[i]==t[j]){
            count++;
            j++;
        }
    }

    if(count>=5){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}
