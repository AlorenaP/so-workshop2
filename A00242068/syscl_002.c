#include <string.h> 
#include <fcntl.h>  
#include <stdlib.h>

main ( int temp, char* argv[] )
{
   const char* cadena = "Hi, world";

    int fichero = open ("mi_fichero", O_CREAT|O_WRONLY,0644);

     if (fichero==-1)
   {
        perror("Error al abrir fichero:");
        exit(1);
   }

   write(fichero, cadena, strlen(cadena));
   close(fichero);

   return 0;

} 
