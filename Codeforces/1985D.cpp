#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y;
    char c;
    cin >> t;

    while(t--){
        cin >> x >> y;
        vector<vector<char>> container(x);
        vector<int> col;
        int count = 0, ind = INT_MIN;

        for(int j=0;j<x;j++)
        {
            int count1 = 0;
            for(int k=0;k<y;k++)
            {
                cin >> c;
                container[j].push_back(c);
                if(c=='#') count1++;
            }

            if(count1>count){
                count = count1;
                ind = j;
            }
        }

        for(int l=0;l<y;l++){
            if(container[ind][l]=='#') col.push_back(l+1);
        }

        int first = col.front(), last = col.back();
        int mid = (first+last)/2;

        cout << ind+1 << " " << mid << "\n";
    }
}