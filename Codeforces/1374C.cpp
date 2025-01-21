#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
using namespace std;

int main() {
    int t;
    cin >> t;
    int x[t];

    for(int i=0;i<t;i++){
        int l;
        cin >> l;
        string s;
        cin >> s;

        int a=0,b=0,moves=0;

        for(int j=0;s[j]!='\0';j++){
            if(s[j]=='('){
                a++;
            }
            else{
                b++;
            }
            if(b>a){
                moves++;
                a=b;
            }
        }
        x[i]=moves;
    }
    for(int i=0;i<t;i++){
        cout << x[i] << endl;
    }
}
