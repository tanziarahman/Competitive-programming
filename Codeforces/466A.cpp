#include<iostream>
#include<string>
#include<set>
#include<algorithm>
using namespace std;

int main()
{
    long long int n,m,a,b,l,k,total1=0,total2=0;
    cin >> n >> m >> a >> b;

    if(n%m==0){
        l = n/m;
        total1 = l*b;
        total2 = n*a;
    }

    else if(n%m != 0){
        l = n/m;
        k = n%m;
        total1 = (l+1)*b;
        total2 = (l*b) + (k*a);
    }

    if(total1<=total2){
        cout << total1;
    }
    else{
        cout << total2;
    }
}
