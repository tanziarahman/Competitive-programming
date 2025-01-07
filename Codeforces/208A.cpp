#include<iostream>
#include<string>
#include<vector>
#include<set>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string c,result;
    int i=0;
    while(s[i]!='\0'&&i<s.size()){
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
            c=c+' ';
            i+=3;
        }
        else{
            c=c+s[i];
            i++;
        }
    }
    for(int i=0;i<c.size();i++){
        if((c[i]>='A'&&c[i]<='Z')||c[i]==' '){
            result+=c[i];
        }
    }
   cout << result;
}
