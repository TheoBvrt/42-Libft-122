
#include "libft.h"

int	ft_isalnum(int i)
{
	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
		return (1);
	else if (i >= '0' && i <= '9')
		return (1);
	return (0);
}
