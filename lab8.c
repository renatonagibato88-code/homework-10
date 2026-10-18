#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double area_trapezoid(double a, double b, double h)
{
    return ((a + b) / 2.0) * h;
}

void definition_trapezoid()
{
    printf("Трапеция — это четырехугольник, у которого две стороны \n");
    printf("параллельны (основания), а две другие не параллельны.\n");
}

void draw_trapezoid(int a, int b, int h)
{
    if (a <= b || h <= 0) {
        printf("Ошибка: для корректного рисования нижнее основание (a) должно быть больше верхнего (b).\n");
        return;
    }

    for (int i = 0; i < h; i++)
    {
        
        for (int j = 0; j < (h - i - 1); j++)
        {
            printf(" ");
        }

    
        int current_width = b + i * (a - b) / (h > 1 ? h - 1 : 1);

        
        if (i == 0)
        {
            for (int j = 0; j < b; j++) printf("*");
        }
        
        else if (i == h - 1)
        {
            for (int j = 0; j < a; j++) printf("*");
        }
        
        else
        {
            printf("*"); 
            for (int j = 0; j < current_width - 2; j++)
            {
                printf(" "); 
            }
            printf("*"); 
        }
        printf("\n");
    }
}

int main()
{
    int choice;
    double a, b, h;

    
    printf("Введите нижнее основание a: ");
    scanf("%lf", &a);
    printf("Введите верхнее основание b: ");
    scanf("%lf", &b);
    printf("Введите высоту h: ");
    scanf("%lf", &h);

    
    printf("\nВыберите операцию:\n");
    printf("1 - Рассчитать площадь\n");
    printf("2 - Вывести определение фигуры\n");
    printf("3 - Нарисовать фигуру\n");
    printf("Ваш выбор: ");
    scanf("%d", &choice);

    
    switch (choice)
    {
        case 1:
            printf("Площадь = %.2f\n", area_trapezoid(a, b, h));
            break;
        case 2:
            definition_trapezoid();
            break;
        case 3:
            draw_trapezoid((int)a, (int)b, (int)h);
            break;
        default:
            printf("Неверный номер операции\n");
            break;
    }

    return 0;
}
