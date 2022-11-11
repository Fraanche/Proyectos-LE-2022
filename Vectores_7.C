#include <stdio.h>
#include <stdio_ext.h>
#define ALUMN 20

float promedio_notas(float []);
char aprobados_alumn(float []);
char desaprobados_alumn(float []);

    
int main() {
    float notas[ALUMN];
    for(unsigned char i = 0;i<ALUMN;i++){
        printf("Ingrese la nota n°%d: ", ++i);
        scanf("%f",&notas[--i]);
        __fpurge(stdin);
        while(notas[i]<=0 || notas[i]>10){
            printf("Ingrese la nota n°%d: ", ++i);
            scanf("%f",&notas[--i]);
            __fpurge(stdin);
        }
    }
    
    printf("El promedio de la clase es: %.2f\n",promedio_notas(notas));
    printf("La cantidad de alumnos desaprobados son: %d\n",desaprobados_alumn(notas));
    printf("La cantidad de alumnos aprobados son: %d\n",aprobados_alumn(notas));
    return 0;
}

float promedio_notas(float notas[]){
    float suma = 0.0;
    float promedio = 0.0;
    for(unsigned char i = 0;i<ALUMN;i++)
        suma = suma + notas[i];
    promedio = suma/ALUMN;
    return  promedio;
}

char aprobados_alumn(float notas[]){
    unsigned char aprobados = 0;
    for (unsigned char i=0;i<ALUMN;i++){
        if (notas[i]>=7)
            aprobados++;
    }
    return aprobados;
}

char desaprobados_alumn(float notas[]){
    unsigned char desaprobados = 0;
    for (unsigned char i =0;i<ALUMN;i++){
        if (notas[i]<7)
            desaprobados++;
    }
    return desaprobados;
}
