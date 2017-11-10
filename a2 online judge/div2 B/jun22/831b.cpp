#include<iostream>
#include<string>
#include<stdio.h>
#include<map>


using namespace std;
int main(){
	
int i,t,j,k;
char ch;
map<char,char> m;

string s1,s2,s;

cin>>s1>>s2>>s;
for(i=0;s1[i];i++)
m[s1[i]]=s2[i];

for(i=0;s[i];i++)
{

if(s[i]>='0' && s[i]<='9')
cout<<s[i];
else if(s[i]>='A' && s[i]<='Z')
{ch=(s[i]-'A'+'a');
    ch=(m[ch]-'a'+'A');
cout<<ch;
}
else cout<<m[s[i]];

}
return 0;
}
