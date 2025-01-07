#include<iostream>
#include<string>
#include<set>
using namespace std;

int main()
{
    int a[] = {4,7,47,74,444,447,474,477,744,747,774,777};
    int n,s=0;
    cin >> n;

    for(int i=0;i<12;i++){
        if(n%a[i]==0){
            s=1;
            break;
        }
    }
    if(s==0)
        cout << "NO";
    else
        cout << "YES";
}
