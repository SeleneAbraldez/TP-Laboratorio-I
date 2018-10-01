#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayEmployees.h"
#define CANT 3 // 1000 empleadxs

int id =2;
int order = 1;
int r;

int main(){

    char seguir = 's';
    eEmployee employees[CANT];

    initEmployees(employees, CANT);

    do{
        switch(menu()){
        case 1:
            addEmployee(employees, CANT, employees[CANT].id, employees[CANT].name, employees[CANT].lastName, employees[CANT].salary, employees[CANT].sector);
            system("pause");
            break;
        case 2:
            editEmployeeById(employees, CANT, id);
            system("pause");
            break;
        case 3:
            removeEmployee(employees, CANT, id);
            system("pause");
            break;
        case 4:
            printEmployees(employees, CANT);
            system("pause");
            break;
        case 5:
            seguir = 'n';
            printf("\nSaliendo... \n");
            break;
        default:
            printf("Opcion no valida, ingrese numero entre 1 y 5. \n\n");
            system("pause");
            break;
        }

    }while(seguir == 's');
    return 0;
}



