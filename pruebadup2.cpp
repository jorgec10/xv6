#include "user.h"
#include "fcntl.h"	
int main(void){
	int fd

	//prueba fichero cerrado
	dup2(1,5);
	printf(5, "duplicado de salida estandar\n");

	// Prueba de duplicacion de fichero ya abierto
	dup2(1,2);
	printf(2, "duplicacion de salida estandar\n");

	fd = open("test", O_RDWR|O_CREATE);
	dup2(1,fd);
	printf(fd, "duplicado de salida estandar\n");

	return 0;
}

