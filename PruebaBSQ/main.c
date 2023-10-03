#include "headers.h" 

int	main(int argc, char *argv[])
{
	int		contador;

	contador = 0;
	if (argc > 0)
	{
		readfile(argv[1]);
		//No se que hay que hacer cuando tienes mas de un argumento a la hora de ejecutar
	}
	return (0);
}