/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix_user <unix_user@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 23:32:38 by unix_user         #+#    #+#             */
/*   Updated: 2022/03/30 23:22:38 by unix_user        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0 || nb > 46340 * 46340)
		return (0);
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_sqrt(-1));
// 	printf("%d\n", ft_sqrt(0));
// 	printf("%d\n", ft_sqrt(1));
// 	printf("%d\n", ft_sqrt(16));
// 	printf("%d\n", ft_sqrt(81));
// 	printf("%d\n", ft_sqrt(17));
// 	printf("%d\n", ft_sqrt(2147395600));
// 	printf("%d\n", ft_sqrt(2147395601));
// }