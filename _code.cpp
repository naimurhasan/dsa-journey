#include<stdio.h>
#include<conio.h>
int main(){
    int roll;
    scanf("%d", &roll);
    if(roll==1)
        printf("You are first.");
    else
        printf("You are not first.");
    getch();
    return 0;
}