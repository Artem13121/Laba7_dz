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

    printf("=== ����������� �������� ������ ===\n");
    printf("�������� �������: ");
    scanf("%d", &choice);

    printf("������� ���������� ������� (n): ");
    scanf("%d", &n_months);

    if (choice == 1) 
    {
        days = 3; 
        printf("������������ ������� ������: 3 ���\n");
    }
    else 
    {
        printf("������� ���������� ����: ");
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

    printf("\n���������:\n");
    printf("�� 1 ������ 2000 ���� ������ %d ������� � %d ����\n", n_months, days);
    printf("���� ���� ���������� ��: ");

    switch (final_month) 
    {
    case 1:
        printf("������");
        break;
    case 2:
        printf("�������");
        break;
    case 3:
        printf("����");
        break;
    case 4:
        printf("������");
        break;
    case 5:
        printf("���");
        break;
    case 6:
        printf("����");
        break;
    case 7:
        printf("����");
        break;
    case 8:
        printf("������");
        break;
    case 9:
        printf("��������");
        break;
    case 10:
        printf("�������");
        break;
    case 11:
        printf("������");
        break;
    case 12:
        printf("�������");
        break;
    default:
        printf("������ ����������� ������");
        break;
    }
    printf(" %d ����\n", final_year);
    return 0;
}