
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i]) {
        	if (s1[i] == '\0') {
            		return (0);
        	}
        	i++;
    	}

	returh ((unsigned char)s1[i] - (unsigned char)s2[i]);	
}

int main()
{
	int numero;

	numero = 0;

	numero = ft_strcmp("hola", "Hola");

	printf("%d\n", numero);
	return (0);
}
