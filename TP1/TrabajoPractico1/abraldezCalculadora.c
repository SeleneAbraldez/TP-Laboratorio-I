#include <stdio.h>
#include <stdlib.h>

float addition (float num1, float num2){
    float resultadoS;
    resultadoS = num1 + num2;
    return resultadoS;
}

float subtraction (float num1, float num2){
    float resultadoR;
    resultadoR = num1 - num2;
    return resultadoR;
}

float division(float num1, float num2){
    float resultadoD;
    resultadoD = num1/num2;
    return resultadoD;
}

float multiplication (float num1, float num2){
    float resultadoM;
    resultadoM = num1*num2;
    return resultadoM;
}

int factorial(float num1){
    int resultadoF = 1, i;
    for (i = num1; i > 1; i--){
    resultadoF = resultadoF * i;
    }
    return resultadoF;
}
