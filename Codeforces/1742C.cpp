#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        vector<string> grid(8);

        bool red = false;

        for(int i=0;i<8;i++)
        {
            cin >> grid[i];

            if(grid[i]=="RRRRRRRR")
            {
                red = true;
            }
        }

        if(red == true){
            cout << "R" << "\n";
        }
        
        else{
            cout << "B" << "\n";
        }
    }
}