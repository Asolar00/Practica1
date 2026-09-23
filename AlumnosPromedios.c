#include <stdio.h>
#include <string.h>

struct Alumno {
    char nombre[20];
    double calificaciones[5];
    int examenes;
    double promedio;
};

int main(){
    struct Alumno Luis,Juna, Miguel;
    int i;
    double suma;
    
    Luis.calificaciones[0] = 8.7;
    Luis.calificaciones[1] = 7.1;
    Luis.calificaciones[2] = 6.0;
    
    for (i = 0; i < 3; i++) {
        suma = suma + Luis.calificaciones[i];
    }
    
    Luis.promedio = suma/3;
    
    printf("El promedio de Luis es: %.2lf\n", Luis.promedio);
    
    Juna.calificaciones[0] = 8.0;
    Juna.calificaciones[1] = 9.2;  
    Juna.calificaciones[2] = 7.7;
    
    suma = 0;
    for (i = 0; i < 3; i++){
      suma = suma + Juna.calificaciones[i];
    }
    Juna.promedio = suma/3;
    printf("El promedio de Juna es: %.2lf\n", Juna.promedio);
    
    Miguel.calificaciones[0] = 6.7;
    Miguel.calificaciones[1] = 7.0;
    Miguel.calificaciones[2] = 8.5;
    
    suma = 0;
    for (i = 0; i < 3; i++){
      suma = suma + Miguel.calificaciones[i];
    }
    Miguel.promedio = suma/3;
    printf("El promedio de Miguel es %.2f\n", Miguel.promedio);
    
    return 0;
}


    