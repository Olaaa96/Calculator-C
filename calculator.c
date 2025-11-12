#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char znak;
    double l1, l2, wynik;

    do
    {   fflush(stdin);
        printf("Podaj dzialanie (+, -, *, /): ");
        znak = getchar();
    } while ((znak != '+') && (znak != '-') && (znak != '*') && (znak != '/'));

    do
    {
        fflush(stdin);
        printf("Podaj pierwsza liczbe: ");
    }while(scanf("%lf", &l1) != 1);
    
    do{
        fflush(stdin);
        printf("Podaj druga liczbe: ");
    }while(scanf("%lf", &l2) != 1);

    switch(znak)
    {
        case '+':
            wynik = l1 + l2;
            break;
        case '-':
            wynik = l1 - l2;
            break;
        case '*':
            wynik = l1 * l2;
            break;
        case '/':
            if(l2 != 0)
                wynik = l1 / l2;
            else
            {
                printf("Blad: dzielenie przez zero!\n");
                return 1;
            }
            break;
    }
    printf("Wynik: %.2lf\n", wynik);
    
 return 0;
}
