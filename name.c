#include <stdio.h>

int add(int a , int b ){
    int c; 
    c = a+b ;
    return c;
}
void main(){
    int v = add(1,7);
    printf("%d",v);
}