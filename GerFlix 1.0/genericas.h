
/** \brief menu(char *opciones);
 *
 * \param opciones char* Texto a mostrar en el menu
 * \return void
 *
 */
void menu(char *opciones);

/** \brief mostrarUsuariosXSeries
 *
 *  Muestra todas las series que ve un usuario y si la serie se dio de baja tambien lo indica
 *
 * \param series[] eSerie
 * \param cantSeries int
 * \param usuarios[] eUsuario
 * \param cantUsuarios int
 * \return void
 *
 */
void mostrarUsuariosXSeries(eSerie series[], int cantSeries,eUsuario usuarios[], int cantUsuarios);


/** \brief mostrarSeriesXUsuarios
 *
 * Muestra todos los usuarios que ven una serie.. y si no la ve nadie tambien lo indica
 *
 * \param series[] eSerie
 * \param cantSeries int
 * \param usuarios[] eUsuario
 * \param cantUsuarios int
 * \return void
 *
 */
void mostrarSeriesXUsuarios(eSerie series[], int cantSeries,eUsuario usuarios[], int cantUsuarios);
