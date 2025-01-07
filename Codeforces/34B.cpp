#include<iostream>
#include<string>
#include<vector>
 
using namespace std;
 
int main()
{
    int m,n;
    cin >> m >> n;
    int a[m];
 
    for(int i=0;i<m;i++){
        cin >> a[i];
    }
 
    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < m - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            sum-=a[i];
        }
    }
    cout << sum;
}