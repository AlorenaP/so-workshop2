# so-workshop2

# Taller 2

**Sistemas Operativos**
**lladamas a sistema**
**Nombre:** Angie Lorena Peréz 
**Código:** A00242068




**001**

Primero se declara la función que va a recibir un entero como parámetro y se encargará de capturar una señal ( trapper() ). Luego captura todas las señales de 1 a 5 haciendo 5 llamadas a signal(), donde pasa como primer parámetro el número de la señal (i) y como segundo parámetro la función que se hará cargo de esta señal (trapper). Seguidamente el programa indica su PID por medio de getpid() y espera a que le llegue una señal con la función pause(). El programa esperará indefinidamente la llegada de esa señal, y cuando se le envie una (por ejemplo, pulsando Control+C), la función encargada de gestionarla ( trapper() ) será invocada. Lo primero que hace trapper() es volver a enlazar la señal en cuestión a la función encargada de gestionarla, es decir, ella misma, y luego saca la señal recibida. Al terminar la ejecución de trapper(), se vuelve al punto donde estábamos ( pause() ) y se continua.


**002**

Esta llamada crea un fichero y escribe en el "hi world". 
Si al abrir el archivo para hacer la escritura hubo error, entonces el proceso se saldria con exit(). DE lo contrario se escribe en el fichero el mensaje inicial y por ultimo se cierra el fichero.


**003**

En este proceso se  hace uso de la llamada execvp() para reiniciar el codigo del procesoque se esta corriendo actualmente.
Ésta reemplaza la imagen en memoria del proceso actual por una nueva que se encuentra en un archivo. En el ejemplo, se cambia el proceso actual por el que ejecuta el programa date. La syscall execvp hace toda la búsqueda de camino hasta llegar al archivo /bin/date, por lo que el  printf jamás llegará a ejecutarse, a menos que la syscall anterior falle.

