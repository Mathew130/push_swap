#include "push_swap.h"
 
int is_number(char *str)
{
	int i;
	i = 0;
	while(str[i] == '-' || str[i] == '+')
	i++;
while(str[i])
{
    if (str[i] >= '0' && str[i] <= '9')
    {
        i++;
    }
    else 
    return(0);
}
}
int	check_arguments(int argc, char **argv)
{
	int	i;
	int	j;
	i = 1;
	j = 0;
	while (i < argc)
	{
		if(is_number(argv[i] == 0))
		  return(0);
		i++;
	}
	return(1);
}
int	main(int argc, char **argv)
// argc number of arguments,argv the arguments themselves
{
	if (check_arguments(argc, argv) == 0);
	{
		write(1, "error\n", 6);
		return(1);
	}
}