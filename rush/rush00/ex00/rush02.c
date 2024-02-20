/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:16:53 by mpitot            #+#    #+#             */
/*   Updated: 2023/09/17 18:21:38 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern	void	ft_putchar(char c);

void	ft_line(int width, char *str)
{
	int	i;

	i = 1;
	while (i <= width)
	{
		if (i == 1)
		{
			ft_putchar(str[0]);
		}
		else if (i > 1 && i < width)
		{
			ft_putchar(str[1]);
		}
		else if (i == width)
		{
			ft_putchar(str[2]);
		}
		i++;
	}
}

void	rush(int width, int height)
{
	int	i;

	if (width <= 0 || height <= 0)
		return ;
	i = 1;
	while (i <= height)
	{
		if (i == 1)
		{
			ft_line(width, "ABA");
			ft_putchar('\n');
		}
		else if (i > 1 && i < height)
		{
			ft_line(width, "B B");
			ft_putchar('\n');
		}
		else if (i == height)
		{
			ft_line(width, "CBC");
			ft_putchar('\n');
		}
		i++;
	}
}
