/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix_user <unix_user@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 23:32:38 by unix_user         #+#    #+#             */
/*   Updated: 2022/03/30 23:26:02 by unix_user        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 1;
	if (nb < 2)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	while (nb + i <= 2147483647)
	{
		if (ft_is_prime(nb + i))
			return (nb + i);
		i++;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("-2147483648:%d\n", ft_find_next_prime(-2147483648));
// 	printf("0:%d\n", ft_find_next_prime(0));
// 	printf("1:%d\n", ft_find_next_prime(1));
// 	printf("2:%d\n", ft_find_next_prime(2));
// 	printf("10000000:%d\n", ft_find_next_prime(10000000));
// 	printf("2147395600:%d\n", ft_find_next_prime(2147395600));
// 	printf("2147483646:%d\n", ft_find_next_prime(2147483646));
// }