/*
    ->  Create a game - ( Snake , Gun and Water )
    ->  Take two variables char type - " you , comp "
    ->  you - For user input | comp - For computer
    ->  Take two variables int type - " r , num "
    ->  r - For store result | num - For random number store
    ->  Return 1  : You Win this  Game 
    ->  Return -1 : Computer Win this Game
    ->  Return 0  : This game Draw
*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int sgw(char you, char comp);         // function prototyping

int main()
{
    char you,comp;
    int r,num;
 
    srand(time(0));                   
    num=rand()%100+1;                 // random number generator for computer
    if(num>33)
        comp='s';
    else if(num>66)
        comp='g';
    else
        comp='w';
            
    printf("Enter your choice:\n1: S for Snake\n2: G for Gun\n3: W for Water\n");
    scanf("%c",&you);                 // User Input

    r=sgw(you,comp);                  // function calling
    if(r == 0) 
    {
        printf("Game is Draw\n");
    }
    else if(r == 1)
    {
        printf("You are Winner , Congratulations\n");
    }
    else if(r == -1)
    {
        printf("Computer is Winner | Better luck for next time\n");
    } 
    return 0;
}

int sgw(char you, char comp)          // function definion
{
    if(you == comp)
        return 0;
    else if(you=='s' && comp=='w')
        return 1;
    else if(you=='w' && comp=='s')
        return -1;
    else if(you=='s' && comp=='g')
        return -1;
    else if(you=='g' && comp=='s')
        return 1;
    else if(you=='w' && comp=='g')
        return 1;
    else if(you=='g' && comp=='w')
        return -1;    
}