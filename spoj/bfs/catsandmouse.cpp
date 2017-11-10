//mouse will die if and only if it is a diagnol between c1 and c2
#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t,m,n,xm,ym,xc1,yc1,xc2,yc2;

    cin>>n>>m;
    cin>>t;
    while(t--){

        int flag=0;
        cin>>xm>>ym>>xc1>>yc1>>xc2>>yc2;
        
        if(xc1<xc2 && yc1<yc2)
            if(xm==xc1+1 && ym==yc1+1 && xm==xc2-1 && ym==yc2-1)
            {cout<<"NO"<<endl;
            flag=1;}
        
            else if(xc1>xc2 && yc1<yc2)
             if(xm==xc2+1 && ym==yc2-1 && xm==xc1-1 && ym==yc1+1)
             {   cout<<"NO"<<endl;
            flag=1;}

             else if( xc1<xc2 && yc1>yc2)
              if(xm==xc1+1 && ym==yc1-1 && xm==xc2-1 && ym==yc2+1)
            {cout<<"NO"<<endl;
            flag=1;}  
           
             else if( xc1>xc2 && yc1>yc2)
              if(xm==xc2+1 && ym==yc2+1 && xm==xc1-1 && ym==yc1-1)
            {cout<<"NO"<<endl;
            flag=1;}  
           

             
             

        if(!flag) cout<<"YES"<<endl;
       
    }
    
    return 0;
}


