#include <stdio.h>
#include <string.h>

struct Alumno {
    char nombre[20];
    double calificaciones[5];
    int examenes;
    double promedio;
};

int main(){
    struct Alumno Luis,Juna;
    int i;
    double suma;
    
    Luis.calificaciones[0] = 8.7;
    Luis.calificaciones[1] = 7.1;
    Luis.calificaciones[2] = 6.0;
    
    suma = 0;
    for (i = 0; i < 3; i++){
        suma = suma + Luis.calificaciones[i];
    }
    
    Luis.promedio = suma/3;
    
    printf("El promedio de Luis es: %.2lf\n", Luis.promedio);
    
    return 0;
}
    
    