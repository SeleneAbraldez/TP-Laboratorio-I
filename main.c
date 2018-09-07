#include <stdio.h>
#include <stdlib.h>

#include "abraldezCalculadora.h"

int main()
{

    float num1, num2; //numeros
    int opcion = 0; //opcion menu
    float resuSuma, resuResta, resuDivision, resuMultiplicacion;
    int resufactorial1, resufactorial2; //resultados
    int flag1=0; //bandera para avisar que no ingresaron el primer numero
    int flag2=0; //bandera para avisar que no ingresaron el segundo numero
    int flagCalc=0; // bandera para avisar que no se hicieron los calculos
    int flag0=0; //bandera para avisar que la division por 0 no puede realizarse


    printf("\n\t -Trabajo Practico Nro 1: Calculadora- \n\t\tSelene Abraldez 1 A \n\n");
    system("pause");

    do {
        system("cls");
        printf("1. Ingresar primer operando (A = %.2f): \n", num1);
        printf("2. Ingresar segundo operando (B = %.2f): \n", num2);
        printf("3. Calcular todas las operaciones: \n\ta) Sumar (A+B) \n\tb) Restar (A-B) \n\tc) Multiplicar (A*B) \n\td) Dividir (A/B) \n\te) Factorial (A! y B!) \n");
        printf("4. Informar resultados \n");
        printf("5. Salir \n");
        printf("\n\t\tSeleccione  una opcion : ");
        scanf("%d", &opcion);


        switch (opcion) {
            case 1:
                printf("1. Ingresar primer operando: \n");
                scanf("%f", &num1);
                flag1 = 1;
                break;
            case 2:
                printf("2. Ingresar segundo operando: \n");
                scanf("%f", &num2);
                flag2 = 1;
                break;
            case 3:
                if (flag1 == 0 || flag2 == 0) {
                    printf("\n ---Precaucion, no se han introducido ambos operandos--- \n\n");
                } else {
                    resuSuma = addition(num1, num2);
                    resuResta = subtraction(num1, num2);
                    resuDivision = division(num1, num2);
                    resuMultiplicacion = multiplication(num1, num2);
                    resufactorial1 = factorial(num1);
                    resufactorial2 = factorial(num2);
                    flagCalc = 1;
                    if(num2==0){
                        flag0 = 1;
                    } else {
                        flag0 = 0;
                        }
                    printf("\n Calculos realizados... \n\n");
                }
                system("pause");
                break;
            case 4:
                if (flag1 == 0 || flag2 == 0) {
                    printf("\n ---Precaucion, no se han introducido ambos operandos--- \n\n");
                } else {
                    if(flagCalc == 0){
                        printf("\n ---Precaucion, no se han realizado los calculos (opcion 3)--- \n\n");
                    } else {
                        printf("\na) El resultado de %.2f+%.2f es: %.2f \n", num1, num2, resuSuma);

                        printf("b) El resultado de %.2f-%.2f es: %.2f \n", num1, num2, resuResta);

                        if(flag0 == 1){
                            printf("c) No es posible dividir por 0 \n");
                        } else {
                            printf("c) El resultado de %.2f/%.2f es: %.4f \n", num1, num2, resuDivision);
                        }

                        printf("d) El resultado de %.2f*%.2f es: %.2f \n", num1, num2, resuMultiplicacion);

                        if(num1>=0){
                            printf("e) El factorial de %.0f es : %.d y ", num1, resufactorial1);
                        } else {
                            printf("e) No se puede realizar el factorial de %.0f y ", num1);
                        }
                        if(num2>=0){
                            printf("El factorial de %.0f es: %d \n\n", num2, resufactorial2);
                        } else {
                            printf("No se puede realizar el factorial de %.0f \n\n", num2);
                        }
                        printf("\t ---Reiniciando calculadora--- \n\n", num2);
                        num1 = 0;
                        num2 = 0;
                        flag1 = 0;
                        flag2 = 0;
                    }
                }
                system("pause");
                break;
            case 5:
                break;
            default:
                printf("Opcion no valida, seleccione opcion entre 1 y 5. \n");
                system("pause");
        }

    } while (opcion != 5);

    return 0;
}
