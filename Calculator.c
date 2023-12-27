#include <stdio.h>
int main()
{
    //Переменные
    int number[2];
    int result;
    char action[2];
    char display[100];
    //
    printf("\n\n\t\t\t\tКалькулятор:\n");
    //Число 1
    printf("Введите число\n");
    scanf("%d", &number[0]);
    //Число 2
    printf("Введите число\n");
    scanf("%d", &number[1]);
    //Действие 
    printf("Действие +, -, / или  *\n");
    scanf("%s", action);

    //
    if(action[0] == '+')
    {
        result = number[0] + number[1];
    }
    else if(action[0] == '-')
    {
        result = number[0] - number[1];
    }
    else if(action[0] == '*')
    {
        result = number[0] * number[1];
    }
    else if(action[0] == '/')
    {
        result = number[0] / number[1];
    }
    else
    {
        printf("Ошибка!");
    }
    //
    printf("Результат:%d",result);
    scanf("%s\n", display);
    return 0;
}
