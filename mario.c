#include <stdio.h>
#include <cs50.h>
void print(int i, int h);
void printbasic(int i);
int main(void){
    int height;
    do{
    height = get_int("Height:");
    } while( height < 1 || height > 8);

    for(int i = 1;i<=height;i++)
    {
        print(i,height);
        printf("\n");
    }
}

void print(int i, int h){
    for(int count = h;count>i;count--){
        printf(" ");
    }
    printbasic(i);
    for(int check = 1; check<=2;check++){
        printf(" ");
    }
    printbasic(i);
}

void printbasic( int i){
    for(int j=1;j<=i;j++)
        {
        printf("#");
        }
}
