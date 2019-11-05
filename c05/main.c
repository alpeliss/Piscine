/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 13:06:07 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/05 20:04:29 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

int ft_iterative_factorial(int nb);
int ft_recursive_factorial(int nb);
int ft_iterative_power(int nb, int power);
int ft_recursive_power(int nb, int power);
int ft_fibonacci(int index);
int ft_sqrt(int nb);
int ft_is_prime(int nb);
int ft_find_next_prime(int nb);
int ft_ten_queens_puzzle(void);

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

	/** Ex05 ft_sqrt **/
	printf("%d  ", ft_sqrt(-1));
	printf("%d  ", ft_sqrt(2147483647));
	printf("%d  ", ft_sqrt(1));
	printf("%d  ", ft_sqrt(25));
	printf("%d  ", ft_sqrt(18));
	printf("%d  ", ft_sqrt(121));
	printf("%d\n\n", ft_sqrt(10000));

	/** Ex06 ft_is_prime **/
	printf("%d  ", ft_is_prime(-1));
	printf("%d  ", ft_is_prime(0));
	printf("%d  ", ft_is_prime(1));
	printf("%d  ", ft_is_prime(2147483647));
	printf("%d  ", ft_is_prime(49));
	printf("%d  ", ft_is_prime(31));
	printf("%d\n\n", ft_is_prime(2));

	/** Ex07 ft_find_next_prime **/
	printf("%d  ", ft_find_next_prime(-1));
	printf("%d  ", ft_find_next_prime(2147483646));
	printf("%d  ", ft_find_next_prime(3));
	printf("%d  ", ft_find_next_prime(5));
	printf("%d  ", ft_find_next_prime(7));
	printf("%d  ", ft_find_next_prime(11));
	printf("%d\n\n", ft_find_next_prime(100));

	/** Ex08 ft_ten_queens_puzzle **/
	printf("%d\n", ft_ten_queens_puzzle());
}
