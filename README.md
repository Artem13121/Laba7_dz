# Домашнее задание к работе 7
### Условие:
с января 2000 года по некоторый день прошло n месяцев и 3 дня. Определить название месяца этого дня. Предусмотреть возможность задания другого числа дней.
### Блок-схема:
<img width="2316" height="5924" alt="image" src="https://github.com/user-attachments/assets/eb91a6d8-21b3-4375-9ad9-c25abc308e8d" />


### программа
```
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
    int variant;
    printf("=== Определение названия месяца ===\n");
    printf("Выберите вариант: ");
    scanf("%d", &variant);
    printf("Введите количество месяцев: ");
    scanf("%d", &n_months);

    if (variant == 1)
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
```
### Результат
Выберем вариант 2
Введем количество месяцев = 55
Введем количество дней = 8

Получим: 
От 1 января 2000 года прошло 55 месяцев и 8 дней
Этот день приходится на: Август 2004 года

### Информация о разработчике
Лантрат Артём, бИЦ-251
