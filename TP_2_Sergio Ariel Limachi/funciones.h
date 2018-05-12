#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersona;

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(EPersona lista[]);
/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersona lista[], int dni);
/** \brief pide un dato y lo guarda
 *
 * \param mensaje es el mensaje a ser mostrado
 * \param es el array en el cual se guardara el valor obtenido
 * \return 1 si se logro guardar el dato  y 0 si no
 *
 */
int ingrNum(char mensaje[],char num[]);


/** \brief solicita una cadena de caracteres al usuario y la guarda en la variable indicada
 *
 * \param mensaje: es el mensaje a ser mostrado
 * \param  dato es donde se guardara el dato solicitado al usuario
 * \return 1 si se realizo la carga de datos o 0 si no se ingresaron solo Letras
 *
 */
int solCadena(char mensaje[],char dato[]);
/** \brief inicializa un array en el valor que indique el programador
 *
 * \param vector: es el array al cual se le asiganara el dato
 * \param tam es el tamaño del array al cual se le asignara el dato
 * \param es el dato que se le asiganara a cada pocicion del array
 * \return
 *
 */
void inizArray(EPersona vector[],int tam,int valor);

/** \brief recibe un array  y lo ordena por Nombre
 *
 * \brief es el array a ser ordenado
 * \brief es el tamaño del array pasado
 * \return
 *
 */
void ordenarAZ(EPersona array[],int tam);

/** \brief Muestra todos los datos cargados por el Usuario
 *
 * \param estr es el array en la cual se encuantran los datos a ser mostrados
 * \param es el tamaño del array del cual se mostraran los datos
 * \return
 *
 */

int soloLetras(char vec[]);
/** \brief verifica si la cadena son solo numeros
 *
 * \param es el array a ser analizado
 * \return 0 si la cadena es solo Numeros y 1 si no lo es
 *
 */

int soloNumeros(char vec[]);


#endif // FUNCIONES_H_INCLUDED
