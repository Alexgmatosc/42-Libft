Bibliotecas

    Una biblioteca en C es simplemente un conjunto de funciones y datos que puedes reutilizar en múltiples programas. Las bibliotecas se pueden crear de dos maneras: estáticas o dinámicas.

    Una biblioteca estática es un archivo con código objeto (generalmente con extensión ".a" en Linux o ".lib" en Windows) que se vincula con un programa en tiempo de enlazado. Es decir, todo el código de la biblioteca se copia al programa resultante.

    Por otro lado una biblioteca dinámica es un archivo ejecutable (generalmente con extensión ".so" en Linux o ".dll" en Windows) que se carga en tiempo de ejecución. Es decir, el código de la biblioteca se mantiene en un archivo separado y el programa se comunica con ella en tiempo de ejecución.

    Para crear una biblioteca estática en Linux, primero debes escribir las funciones y datos que deseas incluir en la biblioteca en uno o varios archivos de código fuente (con extensión ".c"). Luego, utilizas el comando "ar" para crear el archivo de biblioteca estática:

    ar rcs libnombre.a archivo1.o archivo2.o ...
    Para crear una biblioteca dinámica en Linux, debes utilizar el comando "gcc" con la opción "-shared":

    gcc -shared -o libnombre.so archivo1.o archivo2.o ...
    El "make" es una herramienta que automatiza el proceso de compilación de un programa. Es decir, se utiliza para automatizar los comandos necesarios para compilar y enlazar un programa a partir de varios archivos de código fuente.

    Un archivo "makefile" contiene las reglas necesarias para construir un programa, incluyendo las dependencias entre archivos y las acciones a tomar para construirlos. El comando "make" lee el makefile y ejecuta las acciones necesarias para construir el programa.

    Para crear una biblioteca con make se puede crear un makefile que tenga las reglas necesarias para crear la biblioteca dinámica o estática, además de las reglas para generar los archivos objeto que son necesarios para crear las biblioteca,

    libnombre.a: archivo1.o archivo2.o
    ar rcs libnombre.a

Encabezados

    Los archivos con extensión ".h" son los archivos de encabezado en C. Estos archivos contienen las declaraciones de funciones y variables que se van a utilizar en el programa. Es decir, describen la interfaz de la biblioteca, pero no contienen la implementación de estas funciones.

    Cuando se crea una biblioteca, se suele incluir un conjunto de archivos de encabezado para que los programas puedan utilizar las funciones y variables de la biblioteca. Los programas que utilizan la biblioteca simplemente incluyen estos archivos de encabezado para acceder a la interfaz de la biblioteca.

    En resumen, los archivos de encabezado son una forma de proporcionar una interfaz a la biblioteca y son necesario para que los programas puedan acceder a las funciones y variables de la biblioteca.

    En el makefile se puede incluir reglas para generar los archivos de encabezado a partir de los archivos fuente. Por ejemplo, si se tienen los archivos mi_biblioteca.c y mi_biblioteca.h se puede incluir una regla para generar el archivo de encabezado mi_biblioteca.h a partir del archivo fuente mi_biblioteca.c:

    Copy code
    mi_biblioteca.h: mi_biblioteca.c
        cp mi_biblioteca.c mi_biblioteca.h
    De esta manera cada vez que se ejecute make se genera el archivo de encabezado.

Punteros
    Los punteros son variables especiales en C que almacenan la dirección de memoria de otra variable. La dirección de memoria es el lugar donde se guarda una variable en la memoria del computador. Al usar un puntero, puedes acceder y modificar el valor de la variable a la que apunta.

    Para declarar un puntero, se utiliza el operador de indirección (*) antes del nombre de la variable. Por ejemplo:

    Copy code
    int x = 5;
    int* ptr = &x;
    En este ejemplo, ptr es un puntero a una variable de tipo int, y &x es la dirección de memoria de x.

    Para acceder al valor de la variable a la que apunta un puntero, se utiliza el operador de indirección (*) antes del nombre del puntero. Por ejemplo:

    Copy code
    int y = *ptr;
    En este ejemplo, y tendrá el mismo valor que x.

    También se puede utilizar el operador de indirección (*) para cambiar el valor de la variable a la que apunta el puntero. Por ejemplo:

    Copy code
    *ptr = 10;
    En este ejemplo, el valor de x cambia a 10.

    Los punteros también se pueden usar para operaciones aritméticas. Por ejemplo:

    Copy code
    int* ptr = &x;
    ptr++;
    En este ejemplo, ptr apunta a la próxima dirección de memoria después de x.

    Los punteros son una herramienta poderosa en C, pero también son fáciles de usar de manera incorrecta. Es importante asegurarse de que los punteros siempre apunten a una dirección de memoria válida y de que se utilicen correctamente para evitar errores y problemas de seguridad.

Funciones basicas de la Libft

    isalpha() determina si un caracter es una letra del alfabeto.

    isdigit() determina si un caracter es un dígito numérico.

    isalnum() determina si un caracter es alfanumérico (letra o dígito).

    isascii() determina si un caracter es un caracter ASCII.

    isprint() determina si un caracter es imprimible (incluye espacio en blanco).

    strlen() calcula el tamaño de una cadena de caracteres (sin contar el caracter de nulo final).

    memset() llena un área de memoria con un valor específico.

    bzero() llena un área de memoria con ceros.

    memcpy() copia un bloque de memoria de un lugar a otro.
    
    memmove() copia un bloque de memoria de un lugar a otro, permitiendo sobreposición de memoria.

    strlcpy() copia una cadena de caracteres y asegura que la cadena de destino siempre tiene un caracter de nulo final.

    strlcat() concatena dos cadenas de caracteres y asegura que la cadena de destino siempre tiene un caracter de nulo final.

    toupper() convierte un caracter a mayúsculas si es una letra minúscula.

    tolower() convierte un caracter a minúsculas si es una letra mayúscula.

    strchr() busca la primera ocurrencia de un caracter en una cadena de caracteres.

    strrchr() busca la última ocurrencia de un caracter en una cadena de caracteres.

    strncmp() compara dos cadenas de caracteres en un número limitado de caracteres.

    memchr() busca la primera ocurrencia de un valor en un bloque de memoria.

    memcmp() compara dos bloques de memoria.

    strnstr() busca una subcadena dentro de una cadena de caracteres.

    atoi() convierte una cadena de caracteres a un número entero.

    calloc() reserva un bloque de memoria y lo inicializa a cero.

    strdup() crea una copia de una cadena de caracteres en memoria dinámica.