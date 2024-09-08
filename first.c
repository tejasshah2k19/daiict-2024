
#include <stdio.h>

int p;

void daiict()
{
    static int b;//allocate
    int s; //allocate
    printf("\n%d",&s) ;
}//s destroy | 

int main()
{
    register int r;//4byte -> register
    int a;
    daiict();//1
    daiict();//2 
    daiict();//3

    return 0;
}//program end 
