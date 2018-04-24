#include <stdio.h>
#include <stdlib.h>
#include "Serie.h"
#include "Usuario.h"
#define TAMSERIE 20
#define TAMUSUARIO 100


int main()
{
    eSerie listaDeSeries[TAMSERIE];
    eUsuario listaDeUsuarios[TAMUSUARIO];
    inicializarSeriesEstado(listaDeSeries, TAMSERIE);

    inicializarSeriesHardCode(listaDeSeries);
    inicializarUsuariosEstado(listaDeUsuarios,TAMUSUARIO);
    inicializarUsuariosHardCode(listaDeUsuarios);
    char seguir='s';
    int opcion;

    /*
    1. Mostrar el listado de series
    2. Mostrar el listado de usuarios
    3. Mostrar el listado de Usuarios con el nombre de la serie que ve
    4. Mostrar por cada serie, el nombre de los usuarios que la ven.
    */
 do
    {
        menu("\n1. Mostrar el listado de series"
             "\n2. Mostrar el listado de usuarios"
              "\n3. Mostrar el listado de Usuarios con el nombre de la serie que ve"
              "\n4. Mostrar por cada serie, el nombre de los usuarios que la ven.");
        scanf("%d",&opcion);
        switch(opcion)
        {
            case 1:
                mostrarListaSeries(listaDeSeries,TAMSERIE);
                break;
            case 2:
                mostrarListaUsuarios(listaDeUsuarios,TAMUSUARIO);
                break;
            case 3:
                mostrarUsuariosXSeries(listaDeSeries, TAMSERIE,listaDeUsuarios, TAMUSUARIO);
                break;
            case 4:

                break;
            case 9://salir
                seguir = 'n';
                break;
        }//FIN switch(opcion)

    }while(seguir=='s');
    return 0;
}
