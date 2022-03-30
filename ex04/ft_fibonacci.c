/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix_user <unix_user@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 23:32:38 by unix_user         #+#    #+#             */
/*   Updated: 2022/03/30 23:17:05 by unix_user        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_fibonacci(-1));
// 	printf("%d\n", ft_fibonacci(0));
// 	printf("%d\n", ft_fibonacci(1));
// 	printf("%d\n", ft_fibonacci(10));
// 	printf("%d\n", ft_fibonacci(20));
// }