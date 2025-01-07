#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s[t];

    for(int i=0;i<t;i++){
        cin >> s[i];
    }

    string x = s[0],y;
    int c1=0,c2=0;

    for(int i=0;i<t;i++){
        if(s[i]==x){
            c1++;
        }
        else{
            y = s[i];
            c2++;

        }
    }
    if(c1>c2){
        cout << x << "\n";
    }
    else if(c1<c2){
        cout << y << "\n";
    }
}
