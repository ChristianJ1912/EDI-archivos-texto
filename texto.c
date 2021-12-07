#include<stdio.h>
#define m 30
#define n 20

void modificaarchivo(FILE *archivo, int num);
int promedio(FILE *archivo, int num);

int main()
{
    FILE *archivo;
    int cerrado;
    int numero;

    archivo = fopen("calificaciones.txt", "w");
    printf("¿Cuantos niños son? ");
    scanf("%d", &numero);
    modificaarchivo(archivo, numero);
}

void modificaarchivo(FILE *archivo, int num)
{
    int i;
    int cali[n];
    char alum[n][m];

    printf("ESTRUCTURA DE DATOS I\n");
    for(i=0; i<num; i++)
    {
       printf("Alumno %d", i);
       scanf("%s", &alum[i]);
       printf("Calificacion %d", i);
       scanf("%d", &cali[i]);
       fprintf(archivo, "%s\t", alum[i]);
       fprintf(archivo, "%d\n", cali[i]);
    }
}

int promedio(FILE *archivo, int num)
{
    int i;
    int cali[n];
    int prom;
    char alum[n][m];

    for(i=0; i<num; i++)
    {
       fscanf(archivo, "%d", prom+=);
    }
}

