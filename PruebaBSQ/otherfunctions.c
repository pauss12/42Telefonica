
#include "headers.h"

int ft_strlen(char *str)
{
    int contador;

    contador = 0;
    while (str[contador] != '\0')
    {
        contador++;
    }
    return (contador);
}

int	ft_errormessage(char *str)
{
	write(2, str, ft_strlen(str));
	return (0);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}