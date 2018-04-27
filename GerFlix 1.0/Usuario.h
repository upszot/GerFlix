
typedef struct
{
    int idUsuario;
    char nombre[50];
    int idSerie;
    int estado;
}eUsuario;

void inicializarUsuariosEstado(eUsuario[], int);
void inicializarUsuariosHardCode(eUsuario[]);

/** \brief mostrarListaUsuarios
 *
 * Recorro todos los usuarios Habilitados y llamo a la funcion que imprimo los datos.
 *
 * \param eUsuario[]
 * \param int
 * \return void
 *
 */
void mostrarListaUsuarios(eUsuario[], int);

/** \brief mostrarUsuario
 *
 * Imprimo los datos de un registro de usuario
 *
 * \param usuario eUsuario
 * \return void
 *
 */
void mostrarUsuario(eUsuario usuario);
