#include<stdio.h>
#include<stdlib.h>


int main()
{

    char c;//1
    int i;//4
    float f;//4
    double d;//8
    long double ld;//16 

    unsigned int ui; 
    signed int si; 
    // int ans; 
    //sizeof --> operator 
    // > < == != 

    // ans = sizeof(c);

    // printf("\n char = %d",ans); 
    printf("\n char = %d",sizeof(char)); 
    
    printf("\n int = %d",sizeof(int)); 
    
    printf("\n float = %d",sizeof(float)); 
    
    printf("\n double = %d",sizeof(double));
    
    printf("\n long double = %d",sizeof(long double)); 
     
    


    return 0;
}

