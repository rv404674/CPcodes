#include <bits/stdc++.h>

using namespace std;


int main() {
    //  Return the maximum score of Vincent.
    int n,i,result;
    cin >> n;
    string s;
    cin >> s;
    string t;
    cin >> t;
    
    result=0;
    for(i=0;i<n;i++){
if( s[i]!=t[i] || ( (s[i]!='.') && t[i]=='.') )
    result++;
    }
    
    cout << result << endl;
    return 0;
}

