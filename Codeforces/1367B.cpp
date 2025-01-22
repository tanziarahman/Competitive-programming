#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
using namespace std;

int main()
{
    int t,n;
    cin >> t;
    int s[t];

    for(int i=0;i<t;i++){
        cin >> n;
        int arr[n],total=0,odd=0,even=0;

        for(int j=0;j<n;j++){
            cin >> arr[j];
            if(j%2!=arr[j]%2){
                total++;
                if(arr[j]%2==0){
                    even++;
                }
                else{
                    odd++;
                }
            }
        }

        if(total%2==1){
            s[i]=-1;
        }
        else if(even==odd){
            s[i] = total/2;
        }
        else{
            s[i] = -1;
        }
    }

    for(int i=0;i<t;i++){
        cout << s[i] << endl;
    }
}
