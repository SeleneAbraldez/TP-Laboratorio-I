#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayEmployees.h"

int menu(){
    int option;
    system("cls");
    printf("---Menu de Opciones---\n\n");
    printf("1- Alta\n");
    printf("2- Modificar\n");
    printf("3- Baja\n");
    printf("4- Informar\n");
    printf("5- Salir\n\n");
    printf("Ingrese opcion: ");
    fflush(stdin);
    scanf("%d", &option);
    return option;
}

int initEmployees(eEmployee* listi, int len){
    int ret = -1;
    if(listi!=NULL){                                   //NULL // INVALID LENGTH
        for(int i=0; i < len; i++){
            listi[i].isEmpty = 1;
        }
    ret = 0;
    }
    return ret;
}


int freeSpace(eEmployee* listi, int len){
    int index = -1;
    for(int i=0; i< len; i++){
        if( listi[i].isEmpty == 1){
            index = i;
            break;
        }
    }
    return index;
}

int findEmployeeById(eEmployee* listi, int len, int id){
    for(int i=0; i < len; i++){
        if(listi[i].id == id && listi[i].isEmpty == 0){
            return i;
            break;
        }
    }
    return -1;
}

int printEmployee(eEmployee* listi, int index){
    printf("%d\t%s\t%s\t\t%.2f\t\t%d\n\n", listi[index].id, listi[index].name, listi[index].lastName, listi[index].salary, listi[index].sector);
    return 0;
}

int addEmployee(eEmployee* listi, int len, int id, char name[],char lastName[], float salary, int sector){
    eEmployee emplAdd;
    int index = freeSpace(listi, len);
    int idAux = index + 1;
    if(index == -1){
        printf("!! - No hay lugar disponible. \n\n");
    } else {
        emplAdd.id = idAux;
        printf("-- Empleadx ID %d --\n", idAux);
        printf("Ingrese nombre: ");         //VALIDACION
        fflush(stdin);
        gets(emplAdd.name);

        printf("Ingrese apellido: ");         //VALIDACION
        fflush(stdin);
        gets(emplAdd.lastName);

        printf("Ingrese salario: ");         //VALIDACION
        scanf("%f", &emplAdd.salary);

        printf("Ingrese sector: ");         //VALIDACION
        scanf("%d", &emplAdd.sector);

        emplAdd.isEmpty = 0;
        listi[index] = emplAdd;

    }
    return -1;
}

int editEmployeeById(eEmployee* listi, int len, int id){
    int idAux;
    int index;
    int subMenu;
    eEmployee emplAux;
    char cont = 's';

    printf("Ingrese ID: ");
    scanf("%d", &idAux);
    index = findEmployeeById(listi, len, idAux);

    if(index != -1){
        do{
            printf("ID\tNombre\tApellido\tSalario\t\tSector\n");
            printEmployee(listi, index);
            printf("Que desea modificar?\n");
            printf("\t1- Nombre\n");
            printf("\t2- Apellido\n");
            printf("\t3- Salario\n");
            printf("\t4- Sector\n");
            scanf("%d", &subMenu);
            switch(subMenu){
                case 1:
                    printf("Ingrese nuevo nombre: \n");
                    fflush(stdin);
                    gets(emplAux.name);
                    strcpy(listi[index].name, emplAux.name);
                    printf("Se ha modificado el dato con exito.\n\n");
                    break;
                case 2:
                    printf("Ingrese nuevo apellido: \n");
                    fflush(stdin);
                    gets(emplAux.lastName);
                    strcpy(listi[index].lastName, emplAux.lastName);
                    printf("Se ha modificado el dato con exito.\n\n");
                    break;
                case 3:
                    printf("\nIngrese nuevo salario:");
                    scanf("%f",&emplAux.salary);
                    listi[index].salary=emplAux.salary;
                    printf("Se ha modificado el dato con exito.\n\n");
                    break;
                case 4:
                    printf("\nIngrese nuevo sector:");
                    scanf("%d",&emplAux.sector);
                    listi[index].sector= emplAux.sector;
                    printf("Se ha modificado el dato con exito.\n\n");
                    break;
                default :
                    printf("Error, ingrese numero entre 1 y 4.\n");
                    break;
            }
            printf("Desea editar otro dato? Presione 's' para aceptar, aprete cualquier otra tecla para salir.\n");
            fflush(stdin);
            scanf("%c", &cont);
        }while (cont == 's');
        printf("Saliendo al Menu...\n");
        return 0;
    } else {
        printf("!! - No se ha encontrado empleadx con esa ID. \n");
    }
    return -1;
}

int removeEmployee(eEmployee* listi, int len, int id){
    int idAux;
    int index;
    char del;

    printf("Ingrese ID: ");
    scanf("%d", &idAux);
    index = findEmployeeById(listi, len, idAux);
    if(index != -1){
        printf("ID\tNombre\tApellido\tSalario\t\tSector\n");
        printEmployee(listi, index);
        printf("Confirmar eliminado? 's' para confirmar: ");
        fflush(stdin);
        scanf("%c", &del);
        if(del != 's'){
            printf("Eliminado cancelado\n\n");
        }else {
            listi[index].isEmpty = 1;
            printf("Se ha eliminado empleadx\n\n");
        }
    }else {
        printf("!! - No se ha encontrado empleadx con esa ID.\n");
    }
    return -1;
}

int sortEmployees(eEmployee* listi, int len, int order){
    printf("sort");
    return 0;
}

int printEmployees(eEmployee* listi, int len){
    printf("ID\tNombre\tApellido\tSalario\t\tSector\n\n");
    for(int i=0; i< len; i++){
        if(listi[i].isEmpty == 0){
            printEmployee(listi, i);
        }
    }
    return 0;
}

