
#include "Serie.h"
#include <string.h>

/*
    int idSerie;
    char nombre[50];
    char genero[20];
    int cantidadTemporadas;
    int estado;

*/

void inicializarSeriesEstado(eSerie series[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        series[i].estado = 0;
    }
}


void inicializarSeriesHardCode(eSerie series[])
{
    int id[5] = {100,101,102,103,104};
    char nombre[][50]={"TBBT","TWD","GOT","BB","LCDP"};
    char genero[][50]={"Comedia","Terror","Suspenso","Policial","Policial"};
    int cantidad[5] = {10,9,7,5,2};

    int i;

    for(i=0; i<5; i++)
    {
        series[i].idSerie=id[i];
        series[i].cantidadTemporadas=cantidad[i];
        series[i].estado = 1;
        strcpy(series[i].nombre, nombre[i]);
        strcpy(series[i].genero, genero[i]);
    }
}

void mostrarListaSeries(eSerie series[], int cant)
{
    system("cls");
    printf("\n\n Listado de series cargadas: \n");
    for(int i=0;i<cant;i++)
    {

        if(series[i].estado==1)
        {
            mostrarSerie(series[i]);
        }
    }
    printf("\n\n No hay mas series para mostrar. \n");
    system("pause");
}

void mostrarSerie(eSerie serie)
{
    printf("\n Nombre: %s",serie.nombre);
    printf("\n Genero: %s",serie.genero);
    printf("\n");
}
