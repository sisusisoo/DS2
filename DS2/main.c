//
//  main.c
//  DS2
//
//  Created by 강현철 on 2023/03/14.
//

#include <stdio.h>

double factorial_iter(double n)
{
    
    double k, v=1;
    for(k=n;k>0;k--)
    {
        v=v*k;
    }
    return v;
}

double factorial_rec(double n)
{
    if(n<=1){
        return 1;
    }
    else return n*factorial_rec(n-1);
    
}

int main(){
    double iter_result=factorial_iter(20);
    double rec_result=factorial_rec(20);
    printf("%f",iter_result);
    printf("\n");
    printf("%f",rec_result);
    return 0;
}
