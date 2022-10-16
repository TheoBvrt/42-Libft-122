
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	return_value;
	int	is_negative;

	i = 0;
	return_value = 0;
	is_negative = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i ++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			is_negative = 1;
		i ++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		return_value = return_value * 10 + (str[i++] - 48);
	if (is_negative == 1)
		return (return_value * -1);
	return (return_value);
}
