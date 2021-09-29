#include <iostream>

char	*ft_toupper(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if ('a' <= str[i] && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 0;
	while (++i < argc)
		std::cout << ft_toupper(argv[i]);
	std::cout << std::endl;
	return (0);
}