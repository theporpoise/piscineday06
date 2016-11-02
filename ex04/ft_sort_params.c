/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 18:26:22 by mgould            #+#    #+#             */
/*   Updated: 2016/11/01 19:37:55 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int dif;

	i = 0;
	dif = 0;
	while (s1[i] != '\0')
	{
		dif = s1[i] - s2[i];
		if (s2[i] == '\0' || (dif != 0))
			return (dif);
		i++;
	}
	return (-(s2[i]));
}

void	print_array(char **argv, int array_size)
{
	int i;

	i = 1;
	while (i < array_size)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	j = 1;
	while (i < argc)
	{
		while ((j + 1) < argc)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
			j++;
		}
		i++;
		j = 1;
	}
	print_array(argv, argc);
}
