#include<iostream>
using namespace std;
 
int main()
{
    int m,n;
    cin >> n >> m;
    int t;
 
    if(n%2==0){
        t=n/2;
    }
    else{
        t=(n/2)+1;
    }
 
    int x = t;
 
    if(t%m==0){
        cout << t;
    }
    else{
        for(int i=1;;i++){
            t = (x-i)+(2*i);
            if(t>n){
                cout << "-1" << "\n";
                exit(0);
            }
            else if(t%m==0){
                cout << t << "\n";
                exit(0);
            }
        }
    }
}