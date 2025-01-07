#include<iostream>
using namespace std;
 
int main()
{
    int k,i;
    cin >> k;
    int x[12];
 
    for(int i=0;i<12;i++){
        cin >> x[i];
    }
    for(int i=0;i<11;i++){
        for(int j=i+1;j<12;j++){
            if(x[i]<=x[j]){
                int temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }
    int sum=0,count=0;
    if(k>0){
        for(int i=0;i<12;i++){
        sum+=x[i];
        count++;
        if(sum>=k){
            break;
        }
    }
    }
    if(k>sum){
        cout << "-1";
    }
    else{
        cout << count;
    }
}