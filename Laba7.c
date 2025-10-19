# define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
# define _USE_MATH_DEFINES
#include <math.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "Russian");
    int n_months, days;
    int choice;

    printf("=== Определение названия месяца ===\n");
    printf("Выберите вариант: ");
    scanf("%d", &choice);

    printf("Введите количество месяцев (n): ");
    scanf("%d", &n_months);

    if (choice == 1) 
    {
        days = 3; 
        printf("Используется условие задачи: 3 дня\n");
    }
    else 
    {
        printf("Введите количество дней: ");
        scanf("%d", &days);
    }

    
    int start_month = 1;
    int start_year = 2000;

    int all_months = start_month + n_months;

    int final_year = start_year + (all_months - 1) / 12;
    int final_month = all_months % 12;
    if (final_month == 0) 
    {
        final_month = 12;
    }

    printf("\nРезультат:\n");
    printf("От 1 января 2000 года прошло %d месяцев и %d дней\n", n_months, days);
    printf("Этот день приходится на: ");

    switch (final_month) 
    {
    case 1:
        printf("Январь");
        break;
    case 2:
        printf("Февраль");
        break;
    case 3:
        printf("Март");
        break;
    case 4:
        printf("Апрель");
        break;
    case 5:
        printf("Май");
        break;
    case 6:
        printf("Июнь");
        break;
    case 7:
        printf("Июль");
        break;
    case 8:
        printf("Август");
        break;
    case 9:
        printf("Сентябрь");
        break;
    case 10:
        printf("Октябрь");
        break;
    case 11:
        printf("Ноябрь");
        break;
    case 12:
        printf("Декабрь");
        break;
    default:
        printf("Ошибка определения месяца");
        break;
    }
    printf(" %d года\n", final_year);
    return 0;
}