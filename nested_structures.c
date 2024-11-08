//life advice 
#include <stdio.h>
#include <string.h>

struct name{
char name[10];
};

struct consistency{
  float time; 
  int age;
  
  char something[10]; 
  struct name u; 
};

struct exercise {
  int push;
  int pull;
  struct consistency  i ;
};
void main(){
  struct exercise now ;
  int option1;
  int option2;
  printf("Hello one , how you been ! \n 1) Happy \n 2) Sad\n");
  scanf("%d",& option1);
  if(option1==1){  
    printf("You have a right mindset\nRemember happiness is success\nhappy day\n ");}
  else if(option1==2){   
  printf("What is your problem right now:)\n1)Overthinking \n2)Having fake dreams \n3)Regret\n");
  scanf("%d",&option2);}
  if(option2==1){
    printf("Your overthink solve nothing,stop that right now\n and stop dreaming about something u never going to have without  hard work ");
  }
  else if(option2==2){  
   printf("Love the process and pain but not the result\n ");
}

else if (option2==3){
  printf("There is no useless worst thing you made in your past,\n you going to die oneday,\nJUST SMILE AND MAKE YOR LIFE BEAUTIFUL \n");
}
  printf("\tTell all this below to get some joy 📡\n");
  printf("How many pushus you'll do always\n");
  
  scanf ("%i",&now.push);
  printf("Wow you'll do %i pushups\n ",now.push);



  printf("By the way what is your name \n");
  scanf("%s",&now.i.u.name);
  printf("Hello %s",now.i.u.name);


  printf(" Then what is age\n");
  scanf("%i",&now.i.age);
  printf("Okay\n");


  printf("Your age is %d \n How many pull ups you do it in one set\n", now.i.age);
  scanf("%d",&now.pull);


  printf("You'll do %d pull ups , it's good to concentrate\nThen what's up  \n",now.pull);
  scanf("%s",&now.i.something);
  

 printf("%s,It's good \n\n\n",now.i.something);
  printf("And what is the time now\n");
  scanf("%f",&now.i.time);
  printf("hey it's already %f I have to go now bye ;say adious  ",now.i.time);

}
