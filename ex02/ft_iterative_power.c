/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix_user <unix_user@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 23:32:38 by unix_user         #+#    #+#             */
/*   Updated: 2022/03/30 23:14:34 by unix_user        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	ans;

	ans = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power - 1)
	{
		ans *= nb;
		power--;
	}
	return (ans);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_iterative_power(0, 0));
// 	printf("%d\n", ft_iterative_power(1, 0));
// 	printf("%d\n", ft_iterative_power(5, -1));
// 	printf("%d\n", ft_iterative_power(5, 3));
// }