#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s[t];

    for(int i=0;i<t;i++){
        string x;
        int c1=0,c2=0;
        cin >> x;
        for(int j=0;x[j]!='\0';j++){
            if(x[j]=='1'){
                c1++;
            }
            else if(x[j]=='0'){
                c2++;
            }
        }
        int z;
        if(c1>=c2){
           z=c2;
        }
        else{
            z=c1;
        }
        if(z%2==0){
            s[i]="NET";
        }
        else if(z%2==1){
            s[i]="DA";
        }
    }
    for(int i=0;i<t;i++){
        cout << s[i] << endl;
    }
}