#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=1; cin >> t;
    while(t--)
    {
        printf("Case %d:\n",i);i++;
        vector <string> v(100000);
        v[0]="http://www.lightoj.com/";

        int mx = 1,current=1;


        while(1)
        {
             string s; cin >> s;
            if(s=="QUIT")break;
            if(s=="VISIT")
            {
//cout << "1: ";
                string new_str; cin >> new_str;
                v[current]=new_str;
                cout << new_str << endl;
               current++;
                mx = current;
            }
            else if(s=="BACK")
            {
                if(current<=1) cout << "Ignored\n";
                else
                {
                   cout <<  v[current-2] << endl;
                    current--;
                }
            }
            else
            {
                if(current>mx-1) cout << "Ignored\n";
                else{
                    cout <<  v[current] << endl;
                    current++;
                }

            }
        }
    }
}
