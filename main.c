#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "funciones.c"

int main()
{

    int opcion=0;
    int numero1=0;
    int numero2=0;

    do{
        printf("1- Ingrese 1er operando(A=%d)\n",numero1);
        printf("2- Ingrese 2do operando(B=%d)\n",numero2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);
        system("cls");
        switch(opcion)
        {
            case 1:
                numero1=pedirNumero("Ingrese primer operando:\n");

                system("cls");
                break;
            case 2:
                numero2=pedirNumero("Ingrese segundo operando:\n");
                system("cls");

                break;
            case 3:
                printf("La suma resultante es: %.2f\n", sumar(numero1,numero2));
                break;
            case 4:
                printf("La resta resultante es:%.2f\n",restar(numero1,numero2));
                break;
            case 5:
                if(numero2==0)
                {
                    printf("No se puede dividir por 0, Intente nuevamente:\n");
                    system("pause");
                    system("cls");
                }
                else
                {
                 printf("El resultado de la division es: %.2f\n",dividir(numero1,numero2));
                 system("pause");
                 system("cls");
                }
                break;
            case 6: if(numero2==0)
                {
                    printf("Todo numero multiplicado por 0 es 0. Intente nuevamente \n");
                    system("pause");
                    system("cls");
                }
                else
                {
                    printf("El resultado de la multiplicacion es: %.2f\n",multiplicar(numero1,numero2));
                    system("pause");
                    system("cls");
                }
                break;
            case 7: printf("El factorial de %d es: %d\n",numero1,factorializar(numero1));
                    system("pause");
                    system("cls");
                break;
            case 8: printf("La suma resultante es: %.2f\n", sumar(numero1,numero2));
                    printf("La resta resultante es:%.2f\n",restar(numero1,numero2));
                    if(numero2==0)
                {
                    printf("No se puede dividir por 0, Intente nuevamente:\n");

                }
                else
                {
                 printf("El resultado de la division es: %.2f\n",dividir(numero1,numero2));

                }
                if(numero2==0)
                {
                    printf("Todo numero multiplicado por 0 es 0. Intente nuevamente \n");

                }
                else
                {
                    printf("El resultado de la multiplicacion es: %.2f\n",multiplicar(numero1,numero2));
                }
                    printf("El factorial de %d es: %d\n",numero1,factorializar(numero1));
                    system("pause");
                break;
            case 9:
                break;
        }

    }while(opcion!=9);

    return 0;
}

