#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
  srand(time(NULL));
  int num, count, score, i, total, playtime;
  playtime=0;
  total=0;
  count=0;
  printf("GUESS THE NUMBER\nThe number lies within the range: [1,1024]\n");
  for(i=1;i>0;playtime++){
    int r=(rand() % 1024)+1;
    printf("The number is already chosen, guess the number!:\n");
    scanf("%d", &num);
    for(r>0;num!=r;count++){
      printf("Wrong!");
      if(num>r) printf("Go lower\nGuess again:");
      else if(num<r) printf("Go higher\nGuess again:\n");
      scanf("%d", &num);
    }
    score=100-count*5;
    total+=score;
    printf("You're correct!\nScore:%d, Attempts:%d\n", score, count+1);
    printf("Play again?\nIf Yes press 1 otherwise press 0\n");
    scanf("%d", &i);
  }
  printf("Average score is:\n%d", total/playtime);
  return 0;
}
