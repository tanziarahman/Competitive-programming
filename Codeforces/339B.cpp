#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cin >> n >> m;
    long long int s[m],y,x;

    for(int i=0;i<m;i++){
        cin >> s[i];
    }
    x = s[0]-1;
    for(int i=1;i<m;i++){
        if(s[i]>s[i-1]){
            y = s[i]-s[i-1];
            x+=y;
        }
        else if(s[i]==s[i-1]){
            x+=0;
        }
        else if(s[i]<s[i-1]){
            y=(n-s[i-1])+s[i];
            x+=y;
        }
    }
    cout << x;
}
