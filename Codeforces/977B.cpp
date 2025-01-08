#include<iostream>
#include<string>
#include<set>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s, ans;
    cin >> s;

    int res = 0, count = 0;

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(s[i]==s[j] && s[i+1]==s[j+1]){
                count++;
                if(count>res){
                    res = count;
                    ans = string(1,s[i])+string(1,s[i+1]);
                }
            }
        }
        count=0;
    }
    cout << ans;
}
