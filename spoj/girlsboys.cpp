#include<iostream>
#include<cmath>
using namespace std;

//see pattern
//g b
//7 1 = 2
//7 2 =3
//7 3 =2 ceil(g/b+1)
//7 4=2

//or go to http://codeforces.com/blog/entry/1291
// and http://spoj-sus.blogspot.in/2015/07/girlsnbs.html

int main(){
int g,b;
while(1){
    cin>>g>>b;
    if(g==-1 && b==-1) break;

    if(g>b) 
           cout<<ceil((double)g/(b+1))<<endl;
    else
        cout<<ceil((double)b/(g+1))<<endl;
    }
//
//logical based answer
//i(g>b)
//{if(g%(b+1)==0)
//cout<<g/(b+1)
//else cout<<g/(b+1)=1

return 0;
}
