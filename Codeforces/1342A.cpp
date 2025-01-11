#include<iostream>
#include<string>
#include<set>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long int sum1=0,sum2=0,s[t]={0};

    for(int i=0;i<t;i++){
    sum1=0,sum2=0;
    long long int x,y,a,b,min,max;
    cin >> x >> y >> a >> b;

    if(x<=y){
        max = y;
        min = x;
    }
    else{
        max = x;
        min = y;
    }

    sum1+=(min*b);

    sum1+=((max-min)*a);

    sum2+=((min*a)+(max*a));
    if(sum1<=sum2){
        s[i]=sum1;
    }
    else
        s[i]=sum2;
    }

    for(int i=0;i<t;i++){
        cout << s[i]<< endl;
    }

}
