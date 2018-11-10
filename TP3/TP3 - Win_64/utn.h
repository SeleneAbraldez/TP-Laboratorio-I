#ifndef UTN_H_INCLUDED
#define UTN_H_INCLUDED

/** \brief Menu para pasar opcion del switch e imprimir el listado de opcione spara usuarix
 * \return opcion del menu
 */
int menu();



/**
 * \brief Solicita un n�mero enterro al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El n�mero ingresado por el usuario
 *
 */
int getInt();

/**
 * \brief Solicita un n�mero flotante al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El n�mero ingresado por el usuario
 *
 */
float getFloat();
/**
 * \brief Solicita un caracter al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El caracter ingresado por el usuario
 *
 */
char getChar();


/**
 * \brief Genera un n�mero aleatorio
 * \param desde N�mero aleatorio m�nimo
 * \param hasta N�mero aleatorio m�ximo
 * \param iniciar Indica si se trata del primer n�mero solicitado 1 indica que si
 * \return retorna el n�mero aleatorio generado
 *
 */
char getNumeroAleatorio(int desde , int hasta, int iniciar);

/**
 * \brief Verifica si el valor recibido es num�rico
 * \param str Array con la cadena a ser analizada
 * \return 1 si es n�merico y 0 si no lo es
 *
 */
int esNumerico(char *str);
/**
 * \brief Verifica si el valor recibido contiene solo letras y n�meros
 * \param str Array con la cadena a ser analizaday es solo letras tiene el maldito ' '
 * \return 1 si contiene solo espacio o letras y n�meros, y 0 si no lo es
 *
 */
int esAlfaNumerico(char *str);
/**
 * \brief Verifica si el valor recibido contiene solo letras
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo ' ' y letras y 0 si no lo es
 *
 */
int esSoloLetras(char *str);
/**
 * \brief Verifica si el valor recibido es num�rico aceptando flotantes
 * \param str Array con la cadena a ser analizada
 * \return 1 si es n�merico y 0 si no lo es
 *
 */
int esNumericoFlotante(char str[]);
/**
 * \brief Verifica si el valor recibido contiene solo n�meros, + y -
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo numeros, espacios y un guion.
 *
 */
int esTelefono(char *str);

/**
 * \brief Solicita un sexo al usuario y lo devuelve
 * \return  1 si es correcto 0 error
 */
int isSexCharacter(char caracter);


/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargar� el texto ingresado
 * \return void
 */
void getString(char mensaje[],char input[]);
/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargar� el texto ingresado
 * \return 1 si el texto contiene solo letras
 */
int getStringLetras(char mensaje[],char input[]);
/**
 * \brief Solicita un texto num�rico al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargar� el texto ingresado
 * \return 1 si el texto contiene solo n�meros
 */
int getStringNumeros(char mensaje[],char input[]);
/**
 * \brief Solicita un texto num�rico al usuario y lo devuelve (acepta flotantes)
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargar� el texto ingresado
 * \return 1 si el texto contiene solo n�meros
 */
int getStringNumerosFlotantes(char mensaje[],char input[]);

/**
 * \brief Solicita un numero entero al usuario y lo valida
 * \param requestMessage Es el mensaje a ser mostrado para solicitar el dato
 * \param requestMessage Es el mensaje a ser mostrado en caso de error
 * \return El n�mero ingresado por el usuario
 *
 */
int getValidInt(char requestMessage[],char errorMessage[], int lowLimit, int hiLimit);
/**
 * \brief Solicita un numero flotante al usuario y lo valida
 * \param requestMessage Es el mensaje a ser mostrado para solicitar el dato
 * \param requestMessage Es el mensaje a ser mostrado en caso de error
 * \return El flotante ingresado por el usuario
 *
 */
float getValidFloat(char requestMessage[],char errorMessage[], int lowLimit, int hiLimit);
/**
 * \brief Solicita un sexo
 * \param mensaje Es el mensaje a ser mostrado para solicitar el dato
 * \param errormensaje Es el mensaje a ser mostrado en caso de error
 * \return sexo validado
 *
 */
int getValidSexChar(char mensaje[], char errorMensaje[]);

/**
 * \brief Solicita una respuesta con y o n
 * \param mensaje Es el mensaje a ser mostrado para solicitar el dato
 * \param errormensaje Es el mensaje a ser mostrado en caso de error
 * \return respuesta validada
 *
 */
int getValidYesNoChar(char mensaje[], char errorMensaje[]);

/**
 * \brief Solicita un string
 * \param requestMessage Es el mensaje a ser mostrado para solicitar el dato
 * \param errorMessage Es el mensaje a ser mostrado en caso de error
 * \param input Array donde se cargar� el texto ingresado
 * \return -
 *
 */
void getValidString(char requestMessage[],char errorMessage[], char input[]);

/**
 * \brief Solicita un string numerica dentro de un rango
 * \param requestMessage Es el mensaje a ser mostrado para solicitar el dato
 * \param errorMessage Es el mensaje a ser mostrado en caso de error
* \param errorMessageLenght Es el mensaje a ser mostrado en caso de error por largo
 * \param input Array donde se cargar� el texto ingresado
* \param maxLenght maximo de caracteres permitidos
 * \return -
 */
int getValidStringNumberLen(char requestMessage[],char errorMessage[], char errorMessageLenght[],char input[], int maxLenght);

/**
 * \brief alfa numerico dnetro de rango
 * \param requestMessage Es el mensaje a ser mostrado para solicitar el dato
 * \param errorMessage Es el mensaje a ser mostrado en caso de error
  * \param errorMessageLenght Es el mensaje a ser mostrado en caso de error por largo
 * \param input Array donde se cargar� el texto ingresado
  * \param maxLenght maximo de caracteres permitidos
 * \return -
 *
 */
int getValidStringAlfaNumericoLen(char requestMessage[],char errorMessage[], char errorMessageLenght[],char input[], int maxLenght);


/**
 * \brief Limpia el stdin, similar a fflush
 *
 */
void cleanStdin(void);
void toCapsFirst(char cadena[]);



int getValidStringLen(char requestMessage[],char errorMessage[], char errorMessageLenght[],char input[], int maxLenght);

#endif
