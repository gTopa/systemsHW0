#include <stdio.h>

int main(){
  printf("%d\n", problemTwo());
}

int problemOne(){
  int sum = 0;
  int ctr = 3;
  for(ctr;ctr<1000;ctr++){
    if(!(ctr%3)||!(ctr%5)){
      sum+=ctr;
    }
  }
  return sum;
}

int problemTwo(){
  int first = 1;
  int second = 2;
  int placeholder = 0;
  int sum = 0;
  while(second<4000000){
    if(!(second%2)){
      sum+=second;
    }
    placeholder = second;
    second += first;
    first = placeholder;
  }
  return sum;
}
