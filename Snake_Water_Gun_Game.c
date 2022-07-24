#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int snakeWaterGun(char you, char comp)
{   
    // if return 1 then you win ! if return -1 then you lose and return 0 then game draw
    
    // the below if statement cover three condition
    // ss
    // gg
    // ww

    if (you==comp)
    {
        return 0;
    }
    
    // now we need to cover the below things
    // sg
    // gs
    // ws
    // sw
    // gw
    // wg
    if (you=='s' && comp=='g')
    {
        return -1;
    }
    else if (you=='g' && comp=='s')
    {
        return 1;
    }
    if (you=='w' && comp=='s')
    {
        return -1;
    }
    else if (you=='s' && comp=='w')
    {
        return 1;
    }
    if (you=='g' && comp=='w')
    {
        return -1;
    }
    else if (you=='w' && comp=='g')
    {
        return 1;
    }
}
int main(){
    char you;
    char comp;
    srand(time(0));
    int number = rand()%100 + 1;
    printf("Enter the key for snake 's', for water 'w' and for gun 'g'\n");
    scanf("%c",&you);
    // below if else condition is apply to choose the computer ramdomly s(snake), w(water) and g(gun)
    if (number<33)
    {
        comp = 's';
    }
    else if (number>33 && number<66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }
    int result = snakeWaterGun(you, comp);
    printf("You choose '%c' and computer choose '%c' ",you,comp);
    if (result==0)
    {
        printf("Game Draw! \n");
    }
    else if (result==1)
    {
        printf("You win! \n");
    }
    else if(result==-1)
    {
        printf("You lose! \n");
    }

    return 0;
}