#include <stdio.h>
#include <string.h>
#include <math.h>

struct toys{
  char name[5];
  int length;
  float played_time;
};

int main(){
  struct toys child ;
  printf("print below all\n");
  scanf("%s",& child.name);
  scanf("%f",& child.played_time);
  scanf("%d",&child.length);
  printf("%f\n",child.played_time);
  printf("%d\n",child.length);
  printf("%s\n",child.name);
  return 0;
}