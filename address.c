#include<stdio.h>

void main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10},q,*p;
    p=a;
    q=p;
    printf("Value of q(in hex): %p\n",q);
    printf("Value of q(in int): %d\n",q);
    printf("Value of p(in hex): %p\n",p);
    printf("Value of p(in int): %d\n",p);
    printf("Value of a(in hex): %p\n",a);
    printf("Value of a(in int): %d\n",a);
    
}
