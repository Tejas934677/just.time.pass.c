#include<stdio.h>
struct qwerty {
    int q;
    char e[10];
    float w;
};

struct uiop {
    int r;
    char t[10];
    float y;
    struct qwerty i ;
}; 

struct asdf {
    int u;
    float o;
    char p[10];
    struct uiop m ;

};
int main (){
    struct asdf g;
printf("here again i.m nesting  agian");
scanf("%i",&g.m.i.q); // have to give adrress & for scanf always 
/*have to give address(&) for scanf always*/
printf("%i",g.m.i.q); //if we put address while we printing to locate variables itwill shows some different errors



return 0;}

