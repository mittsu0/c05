/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix_user <unix_user@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 23:32:38 by unix_user         #+#    #+#             */
/*   Updated: 2022/03/30 23:10:36 by unix_user        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	ans;

	ans = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		ans *= nb;
		nb--;
	}
	return (ans);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_recursive_factorial(-1));
// 	printf("%d\n", ft_recursive_factorial(0));
// 	printf("%d\n", ft_recursive_factorial(1));
// 	printf("%d\n", ft_recursive_factorial(5));
// }