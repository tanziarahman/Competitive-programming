#include<iostream>
#include<string>
#include<vector>
#include<set>

using namespace std;

int main()
{
    vector<int> coins;
    int n,sum=0,a;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> a;
        coins.insert(coins.begin()+i,a);
        sum+=a;
    }
    int half = sum/2;

     for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (coins[j] > coins[j + 1])
                swap(coins[j], coins[j + 1]);
        }
    }
    int count = 0,sum1=0;
    for(int i=n-1;i>=0;i--){
        sum1+=coins[i];
        count++;
        if(sum1>half){
            break;
        }
    }
    cout << count;
