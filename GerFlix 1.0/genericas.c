#include "Usuario.h"
#include "Serie.h"
#include <string.h>

void menu(char *opciones)
{
    system("cls");
    printf("%s \n",opciones);
    printf("9. Salir \n");
    printf("\n\tIngrese Opcion: ");
}

void mostrarUsuariosXSeries(eSerie series[], int cantSeries,eUsuario usuarios[], int cantUsuarios)
{
    int flag=-1;
    for(int i=0;i<cantUsuarios;i++)
    {
        if(usuarios[i].estado==1)
        {//usuario activo
            printf("\nEl Usuario: %s",usuarios[i].nombre);
            printf("\n Ve las siguientes series: \n");

            for(int j=0;j<cantSeries;j++)
            {// buscar el id de la serie

                if((series[j].idSerie==usuarios[i].idSerie)&&(series[j].estado==1))
                {//serie Habilitada && usuario ver la serie
                    mostrarSerie(series[j]);
                    flag=1;//encontro y esta habilitada
                }//if((series[j].idSerie==usuarios[i].idSerie)&&(series[j].estado==1))

            }//for(int j=0;j<cantSeries;j++)
            if(flag==-1)
            {//no encontro la serie o se dio de baja
                printf("\n Serie Inexistente...\n");
            }
            flag=-1;
            printf("---------------\n");
        }//if(usuarios[i].estado==1)
    }//for(int i=0;i<cantUsuarios;i++)
    system("pause");
}

void mostrarSeriesXUsuarios()
{

}
