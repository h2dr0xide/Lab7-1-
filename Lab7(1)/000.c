#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");
    int date, day, month;
    printf("Введите дату в формате ddmm: ");
    scanf("%d", &date);
    day = date / 100;
    month = date % 100;
    switch (month)
    {
    case 1:
        printf("Знак Зодиака: %s\n", day < 20 ? "Козерог" : "Водолей");
        break;
    case 2:
        printf("Знак Зодиака: %s\n", day < 19 ? "Водолей" : "Рыбы");
        break;
    case 3:
        printf("Знак Зодиака: %s\n", day < 21 ? "Рыбы" : "Овен");
        break;
    case 4:
        printf("Знак Зодиака: %s\n", day < 20 ? "Овен" : "Телец");
        break;
    case 5:
        printf("Знак Зодиака: %s\n", day < 21 ? "Телец" : "Близнецы");
        break;
    case 6:
        printf("Знак Зодиака: %s\n", day < 21 ? "Близнецы" : "Рак");
        break;
    case 7:
        printf("Знак Зодиака: %s\n", day < 23 ? "Рак" : "Лев");
        break;
    case 8:
        printf("Знак Зодиака: %s\n", day < 23 ? "Лев" : "Дева");
        break;
    case 9:
        printf("Знак Зодиака: %s\n", day < 23 ? "Дева" : "Весы");
        break;
    case 10:
        printf("Знак Зодиака: %s\n", day < 23 ? "Весы" : "Скорпион");
        break;
    case 11:
        printf("Знак Зодиака: %s\n", day < 22 ? "Скорпион" : "Стрелец");
        break;
    case 12:
        printf("Знак Зодиака: %s\n", day < 22 ? "Стрелец" : "Козерог");
        break;
    default:
        printf("Некорректный месяц\n");
    }
}