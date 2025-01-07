#include<iostream>
#include<string>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    char s[n];
 
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    int ones =0, zeros=0;
 
    for(int i=0;i<n;i++){
        if(s[i]=='1')
            ones++;
        else if(s[i]=='0')
            zeros++;
    }
    int a=ones-zeros;
 
    if(a>=0)
        cout << a;
    else if(a<0)
        cout << -a;
 
    return 0;
}