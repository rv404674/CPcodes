#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    freopen("testcases.txt","w",stdout);
     int r,a,b;
      srand((unsigned)time(NULL));
       for(a=0;a<30;a++)
            {printf("10  ");
                 for(b=0;b<10;b++)
                      {
                           r=rand()%20;
                            printf("%d ",r);
                             }
                  printf("\n");
                   }

        return(0);
}
