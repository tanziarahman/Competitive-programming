#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int s[7],count=0,total=0;

    for(int i=0;i<7;i++){
        cin >> s[i];
    }

    for(int i=0;;i++){
        for(int j=0;j<7;j++){
            if(total>=n){
                goto u;
            }
            total+=s[j];
            count++;
        }
    }
    u:
        int r = count%7;
        if(r==0){
            cout << "7";
        }
        else{
            cout << r;
        }
}
 