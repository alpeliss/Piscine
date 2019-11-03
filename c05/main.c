/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 13:06:07 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/03 14:26:59 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

int ft_iterative_factorial(int nb);
int ft_recursive_factorial(int nb);
int ft_iterative_power(int nb, int power);
int ft_recursive_power(int nb, int power);
int ft_fibonacci(int index);
int ft_sqrt(int nb);

int	main(void)
{
	/** Ex00 ft_iterative_factorial **/
	printf("%d  ",ft_iterative_factorial(-1));
	printf("%d  ",ft_iterative_factorial(0));
	printf("%d  ",ft_iterative_factorial(1));
	printf("%d  ",ft_iterative_factorial(2));
	printf("%d  ",ft_iterative_factorial(3));
	printf("%d  ",ft_iterative_factorial(4));
	printf("%d\n",ft_iterative_factorial(5));

	/** Ex01 ft_recursive_factorial **/
	printf("%d  ", ft_recursive_factorial(-1));
	printf("%d  ", ft_recursive_factorial(0));
	printf("%d  ", ft_recursive_factorial(1));
	printf("%d  ", ft_recursive_factorial(2));
	printf("%d  ", ft_recursive_factorial(3));
	printf("%d  ", ft_recursive_factorial(4));
	printf("%d\n\n", ft_recursive_factorial(5));

	/** Ex02 ft_iterative_power **/
	printf("%d  ", ft_iterative_power(4, -1));
	printf("%d  ", ft_iterative_power(4, 0));
	printf("%d  ", ft_iterative_power(4, 1));
	printf("%d  ", ft_iterative_power(4, 2));
	printf("%d  ", ft_iterative_power(2, 10));
	printf("%d  ", ft_iterative_power(-3, 2));
	printf("%d\n", ft_iterative_power(-3, 3));

	/** Ex03 ft_recursive_power **/
	printf("%d  ", ft_recursive_power(4, -1));
	printf("%d  ", ft_recursive_power(4, 0));
	printf("%d  ", ft_recursive_power(4, 1));
	printf("%d  ", ft_recursive_power(4, 2));
	printf("%d  ", ft_recursive_power(2, 10));
	printf("%d  ", ft_recursive_power(-3, 2));
	printf("%d\n\n", ft_recursive_power(-3, 3));

	/** Ex04 ft_fibonacci **/
	printf("%d  ", ft_fibonacci(-1));
	printf("%d  ", ft_fibonacci(0));
	printf("%d  ", ft_fibonacci(1));
	printf("%d  ", ft_fibonacci(2));
	printf("%d  ", ft_fibonacci(3));
	printf("%d  ", ft_fibonacci(4));
	printf("%d\n\n", ft_fibonacci(5));

	/** ft_sqrt **/
	printf("%d  ", ft_sqrt(-1));
	printf("%d  ", ft_sqrt(0));
	printf("%d  ", ft_sqrt(1));
	printf("%d  ", ft_sqrt(25));
	printf("%d  ", ft_sqrt(18));
	printf("%d  ", ft_sqrt(121));
	printf("%d  ", ft_sqrt(10000));
}
