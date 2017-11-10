#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;
int main(){
    char s1[200],s2[200];
    int k,i,l,cap,smll,db,dash,spe,num,n;
   
    while( scanf("%s",s1)!=EOF){
     n=strlen(s1);
//cout<<"s1"<<s1<<endl;

     for(i=0,smll=db=num=spe=cap=dash=0;i<n;i++){
         if(s1[i]>='A' && s1[i]<='Z')
             cap++;
         //else if(s1[i]>=128 && s1[i]<=255)//special characters
           //      spe++;
         else if( s1[i]==s1[i+1] && s1[i]=='_')
             db++;
          else if(s1[i]=='_')
                    dash++;
     }
  
     if(s1[0]=='_' || s1[n-1]=='_' || db!=0)
         cout<<"Error!\n";
     else if( (cap!=0 && dash!=0) || spe!=0 || num!=0)
         cout<<"Error!\n";
     else if(cap==0 && dash==0)
         cout<<s1<<endl;
     else if(cap!=0 && dash==0){
         //convert to dash format i.e c++ format
         for(i=k=0;i<n;i++){
           if(s1[i]>='A' && s1[i]<='Z')
           {s2[k++]='_';s2[k++]=s1[i]+32;}
           else
               s2[k++]=s1[i];
         }
         s2[k]='\0';
         cout<<s2<<endl;
     }
     else {
         for(i=k=0;i<n-1;i++)
         {if(s1[i]=='_')
             {s2[k++]=s1[i+1]-32;i++;}
             else s2[k++]=s1[i];
         }
         s2[k++]=s1[n-1];
         s2[k]='\0';
         cout<<s2<<endl;
     }

    }
    return 0;
}

