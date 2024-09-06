/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escan <escan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 05:27:58 by escan             #+#    #+#             */
/*   Updated: 2024/09/06 05:28:10 by escan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == '\0' && s2[i] == '\0')
	{
		if (s1[i] == s2[i])
			i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int argc, char const *argv[])
{
	int			i;
	int			j;
	char const	*tmp;

	i = 1;
	j = argc;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[j];
				argv[j] = tmp;
			}
			j++;
		}
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}
