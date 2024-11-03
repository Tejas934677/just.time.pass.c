// practising array in .c which have to printf("student marks in array "); and finding out the good students percentage in the class)
#include <stdio.h>
int main(){
    
    int added;
    double percent;
    int a[4]
    ;
    printf("enter below the student marks\n");
    for(int i =0 ; i<4;i++){
        scanf("%d",&a[i]);}
    for(int i =0  ;i<4;i++){
        added +=a[i];
  printf(" %d  ", a[i]);
  }
percent = added/4;
  printf("the average of the class is '%f' ", percent );

return 0;
}