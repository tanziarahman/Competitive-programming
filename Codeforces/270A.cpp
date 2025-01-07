#include<iostream>
#include<string>
#include<set>
using namespace std;
 
int main()
{
    int t,n;
    cin >> t;
    string s[t];
 
    for(int i=0;i<t;i++){
        cin >> n;
        if(360%(180-n)==0)
            s[i]="YES";
        else
            s[i]="NO";
    }
    for(int i=0;i<t;i++){
        cout << s[i] << endl;
    }
}