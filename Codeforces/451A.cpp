#include<iostream>
#include<string>
#include<set>
#include <iomanip>

using namespace std;

int main()
{
     int n,m;
     cin >> n >> m;

     int min_moves = min(m,n);

     if(n==1 || m==1){
        cout << "Akshat";
     }
     else if(min_moves%2==0){
        cout << "Malvika";
     }
     else{
        cout << "Akshat";
     }
}
