
#include "Usuario.h"

void inicializarUsuariosEstado(eUsuario usuarios[], int cant)
{
     int i;

    for(i=0; i<cant; i++)
    {
        usuarios[i].estado = 0;
    }
}
void inicializarUsuariosHardCode(eUsuario usuarios[])
{


    int id[15] = {1000,1001,1002,1003,1004, 1005,1006,1007,1008,1009, 1010,1011,1012,1013,1014};
    char nombre[][50]={"Juan","Maria","Pedro","Vanesa","Jose","Luisa","Laura","Marcelo","German","Victoria","Dafne","Antonela","Gisele","Dario","Pedro"};

    int serie[15] = {100,100,101,101,102,100,100,103,101,102,103,105,105,100,103};
//int id[5] = {100,101,102,103,104}; id se series

    int i;

    for(i=0; i<15; i++)
    {
        usuarios[i].idUsuario=id[i];
        usuarios[i].idSerie=serie[i];
        usuarios[i].estado = 1;
        strcpy(usuarios[i].nombre, nombre[i]);

    }
}

void mostrarListaUsuarios(eUsuario usuarios[], int cant)
{
    system("cls");
    printf("\n\n Listado de usuarios cargados: \n");
    for(int i=0;i<cant;i++)
    {
        if(usuarios[i].estado==1)
        {
            mostrarUsuario(usuarios[i]);
        }
    }
    printf("\n\n No hay mas usuarios para mostrar. \n");
    system("pause");
}

void mostrarUsuario(eUsuario usuario)
{
    printf("\n Nombre: %s",usuario.nombre);
}
