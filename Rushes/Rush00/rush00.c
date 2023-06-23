/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan42 <cwan42@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 05:19:50 by cwan42            #+#    #+#             */
/*   Updated: 2023/06/24 05:30:26 by cwan42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void rush(int x, int y)
{
	int W;
	int L;

	L = 1;
	while (L <= y && x > 0)
	{
		W = 1;
		while (W <= x)
		{
			if	((W != 1 && W != x) && (L == 1 || L == y))
				ft_putchar('-');
			else if	((L != 1 && L != y) && (W == 1 || W == x))
				ft_putchar('|');
			else if	((W == 1 || W == x) || (L == 1 || L == y))
				ft_putchar('o');
			else	
				ft_putchar(' ');
			W++;
		}
		ft_putchar('\n');
		L++;
	}
}