/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix_user <unix_user@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 23:32:38 by unix_user         #+#    #+#             */
/*   Updated: 2022/03/30 23:24:18 by unix_user        ###   ########.fr       */
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

// #include <stdio.h>

// int	main(void)
// {
// 	printf("-1:%d\n", ft_is_prime(-1));
// 	printf("0:%d\n", ft_is_prime(0));
// 	printf("1:%d\n", ft_is_prime(1));
// 	printf("2:%d\n", ft_is_prime(2));
// 	printf("7:%d\n", ft_is_prime(7));
// 	printf("3571:%d\n", ft_is_prime(3571));
// 	printf("2147395600:%d\n", ft_is_prime(2147395600));
// 	printf("2147483647:%d\n", ft_is_prime(2147483647));
// }