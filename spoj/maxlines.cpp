#include<bits/stdc++.h>
using namespace std;

int main()
{
      cout<<fixed;
        cout<<setprecision(2);
             int tc;
            cin>>tc;
             for(int i=1;i<=tc;i++)
              {
                double r,max_line;
                      cin>>r;
                  max_line=(double)(4*r*r)+0.25;
                cout<<"Case "<<i<<": "<<max_line<<endl;
                }
           return 0;
}
