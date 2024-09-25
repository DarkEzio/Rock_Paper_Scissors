#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int x;
    bool score=true;
    int puntiplr=0;
    int puntiai=0;
while(true){
    
    int numero= rand() % 3+1;
    if(score){
    printf("\n\nChose between \n1)rock\n2)paper\n3)scissors\n");
    }
    score=true;
    scanf("%d",&x);
    printf("\n");

    // 1) rock 2)paper 3)scissors

    if(x==numero){
        if(x==1){
            printf("I have chosen rock as well\n\n");
        }else if(x==2){
            printf("I have chosen paper as well\n\n");
        }else{
            printf("I have chosen scissors as well\n\n");
        }
    }else if(x==1 && numero==2 || x==1 && numero==3){
        if(numero==2){
            printf("You have chosen rock and i have chosen paper, YOU LOST!!\n\n");
            puntiai++;
        }else{
            printf("You have chosen rock and i have chosen scissors, YOU WON!!\n\n");
            puntiplr++;
        }
    }else if(x==2 && numero==1 || x==2 && numero==3){
        if(numero==1){
            printf("You have chosen paper and i have chosen rock, YOU WON!!\n\n");
            puntiplr++;
        }else{
            printf("You have chosen paper and i  have chosen scissors, YOU LOST!!\n\n");
            puntiai++;
        }
    }else if(x==3 && numero==1 || x==3 && numero==2){
        if(numero==1){
            printf("You have chosen scissors and i have chosen rock, YOU LOST!!\n\n");
            puntiai++;
        }else{
            printf("You have chosen scissors and i have chosen paper, YOU WON!!\n\n");
            puntiplr++;
        }
    }else{
        printf("\n\nPlease chose between \n1)rock\n2)paper\n3)scissors\n");
        score=false;
    }
    if(score){
    printf("-------------------------------\n");
    printf("        PLAYER %d | %d AI\n",puntiplr,puntiai);
    printf("-------------------------------");
    }
}
}