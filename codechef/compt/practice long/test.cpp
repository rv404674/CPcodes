#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i, n, t;
    scanf ("%d", &t);
    while(t--){
        scanf ("%d", &n);
        for (i=0;i<n;i++){
            printf ("%d ", 2*i+1);
        }
        printf ("\n");
    }
}
 
