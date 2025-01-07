#include<iostream>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int a[n],b[n],x=0,y=0;
 
    for(int i=0;i<n;i++){
        cin >> a[i] >> b[i];
 
        if(a[i]<b[i]){
            x++;
        }
        else if(a[i]>b[i]){
            y++;
        }
    }
 
    if(x>0 && y>0){
        cout << "Happy Alex";
    }
    else{
        cout << "Poor Alex";
    }
}