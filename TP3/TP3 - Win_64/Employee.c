#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinkedList.h"
#include "Employee.h"

Employee* employee_new(){
    Employee* this = malloc(sizeof(Employee));
    if(this !=NULL){
        this->id = 0;
        strcpy(this->nombre, " ");
        this->horasTrabajadas = 0;
        this->sueldo = 0;
    }
    return this;
}

static void initializeStr(Employee* this, char *var1, char *var2, char *var3, char *var4) //trabajo sueldo como un int en esta fucnion personal porque asi esta definido en la estructura y el resto de funciones, no se si tengo permitido cambiarlo asi que lo dejo
{
    int id, horasTrabajadas, sueldo;

    id = atoi(var1);
    horasTrabajadas = atoi(var3);
    sueldo = atoi(var4);

    employee_setId(this, id);
    employee_setNombre(this, var2);
    employee_setHorasTrabajadas(this, horasTrabajadas);
    employee_setSueldo(this, sueldo);
}

Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr, char* sueldoStr){
    Employee* this;
    this = employee_new();
    if(this != NULL)
        initializeStr(this, idStr, nombreStr, horasTrabajadasStr, sueldoStr);
    return this;
}


int employee_setId(Employee* this,int id){
    int retorno = -1;
    if(this != NULL && id > 0){
        this->id = id;
        retorno = 0;
    }
    return retorno;
}
int employee_getId(Employee* this,int* id){
    if(this != NULL){
        *id = this->id;
        return 0;
    }else
        return -1;
}


int employee_setNombre(Employee* this,char* nombre){
    int retorno = -1;
    if(this != NULL && nombre[0] != '\0'){
        strncpy(this->nombre, nombre, sizeof(this->nombre));
        retorno = 0;
    }
    return retorno;
}
int employee_getNombre(Employee* this,char* nombre){
    if(this != NULL){
        strcpy(this->nombre, nombre);
        return 0;
    }else{
        return -1;
    }
}


int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas){
    int retorno = -1;
    if(this != NULL && horasTrabajadas > 0){
        this->horasTrabajadas = horasTrabajadas;
        retorno = 0;
    }
    return retorno;
}
int employee_getHorasTrabajadas(Employee* this,int* horasTrabajadas){
    if(this != NULL){
        *horasTrabajadas = this->horasTrabajadas;
        return 0;
    }else
        return -1;
}


int employee_setSueldo(Employee* this,int sueldo){
    int retorno = -1;
    if(this != NULL && sueldo > 0){
        this->sueldo = sueldo;
        retorno = 0;
    }
    return retorno;
}

int employee_getSueldo(Employee* this,int* sueldo){
    if(this != NULL){
        *sueldo = this->sueldo;
        return  0;
    }else
        return -1;
}



int employeeSortById(void* empleadoA, void* empleadoB){
    int retorno = -1;
    Employee* empA;
    Employee* empB;

    if(empleadoA !=NULL && empleadoB !=NULL){
        empA = (Employee*) empleadoA;
        empB = (Employee*) empleadoB;
        if((empA->id)<(empB->id)){
            retorno = 1 ;
        }else if((empA->id)>(empB->id)){
            retorno = -1 ;
        }else if((empA->id)==(empB->id)){
            retorno = 0;
        }
    }
    return retorno;
}

int employeeSortByName(void* empleadoA, void* empleadoB){
    int retorno = -1;
    Employee* empA;
    Employee* empB;

    if(empleadoA !=NULL && empleadoB !=NULL){
        empA = (Employee*) empleadoA;
        empB = (Employee*) empleadoB;
        retorno = strcmp(empB->nombre, empA->nombre);
    }

    return retorno;
}

int employeeSortByHours(void* empleadoA, void* empleadoB){
    int retorno = -1;
    Employee* empA;
    Employee* empB;

    if(empleadoA !=NULL && empleadoB !=NULL){
        empA = (Employee*) empleadoA;
        empB = (Employee*) empleadoB;
                if((empA->horasTrabajadas)<(empB->horasTrabajadas)){
            retorno = 1 ;
        }else if((empA->horasTrabajadas)>(empB->horasTrabajadas)){
            retorno = -1 ;
        }else if((empA->horasTrabajadas)==(empB->horasTrabajadas)){
            retorno = 0;
        }
    }
    return retorno;
}

int employeeSortBySalary(void* empleadoA, void* empleadoB){
    int retorno = -1;
    Employee* empA;
    Employee* empB;

    if(empleadoA !=NULL && empleadoB !=NULL){
        empA = (Employee*) empleadoA;
        empB = (Employee*) empleadoB;
        if((empA->sueldo)<(empB->sueldo)){
            retorno = 1 ;
        }else if((empA->sueldo)>(empB->sueldo)){
            retorno = -1 ;
        }else if((empA->sueldo)==(empB->sueldo)){
            retorno = 0;
        }
    }
    return retorno;
}

// no supe para que estaba la funcion delete, ya que era void y no recibia ningun parametro. entiendo que seria para hacer un free de empeladx, pero siendo que no recibe nada no supe como.
// asumo ademas que deberia se runa funcion dentro del LinkedList, que dnetro de el index de esa lista, vaya limpiando lxs empleadxs en las mismas para que no queden aun si limpias la lista
// pero siendo una funcion que llamas exactamente antes de que se cierre el progrma, es decir, ya se van a liberar por si solas, no termino de comprender el funcionamiento aplicado aca.
