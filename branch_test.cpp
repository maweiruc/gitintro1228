/*This is just a student testing weather branch is OK.*/
/*Hanoi*/
#include <stdio.h>

int main()
{
    void hanoi(int n, char one, char two, char three);
    int m;
    printf("Number of plate:");
    scanf("%d", &m);
    printf("the step to move %d plate:\n", m);
    hanoi(m, 'A', 'B', 'C');
}
void hanoi(int n, char one, char two, char three)
{
    void move(char x, char y);
    if (n == 1)
        move(one, three);
    else
    {
        hanoi(n - 1, one, three, two);
        move(one, three);
        hanoi(n - 1, two, one, three);
    }
}
void move(char x, char y)
{
    printf("%c->%c\n", x, y);
}