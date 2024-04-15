#include <stdio.h>

int main(void)
{
    int age;
    printf("How old are you? \n");
    scanf("%d", &age);
    
    if(age >= 20)
    {
        printf("You're more old. You oldest.");
    } else
    {
        printf("You're less old. You young");
    }
    return 0;
}
