#include <stdio.h>
#include <stdlib.h>
 
 
int main()
{   int t;
   scanf("%d",&t);
   while(t--){
        long long int n,k,a,d=1;
        scanf("%lld",&n);
        scanf("%lld",&k);
        a=k-((n-1)*d);
        if(((2*a)+d)>k){
            printf("%lld\n",a);
 
        }
        else{
            d=d+2;
            while(1){
                if(k%d==0){d=d+2;}
                else
                {
                    break;
                }
 
            }
            a=k-((n-1)*d);
           printf("%lld\n",a);
 
 
        }
 
   }
 
    return 0;
}
 
