/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unnemuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 10:39:40 by unnemuta          #+#    #+#             */
/*   Updated: 2020/07/15 12:05:24 by unnemuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x,int y)
{
	char x_o = 'o';
	char x_dash = '-';
	char y_stroke = '|';
    int i;

    i = 1;
    while(x >= i)
    {
    	if(i == 1 || x == i)
    	{
        	ft_putchar(x_o);
        	i++;
    	}
    	else
    	{
        	ft_putchar(x_dash);
        	i++;
    	}
    }
    ft_putchar('\n');

    i = 1;
    int y_val = (y-2);
    int check;
    while(y_val >= i)
    {
    	check = 1;
    	ft_putchar(y_stroke);
    	while((x-2) >= check)
    	{
        	ft_putchar(' ');
        	check++;
    	}
    	if(x > 1)
    	{
        	ft_putchar(y_stroke);
    	}
    		ft_putchar('\n');
    		i++;
    }

    i = 1;
    if(y > 2)
    {
    	while(x >= i)
    	{
        	if(i == 1 || x == i)
        	{
        		ft_putchar(x_o);
        		i++;
        	}
        	else
        	{	
        		ft_putchar(x_dash);
        		i++;
        	}
    	}
    	ft_putchar('\n');
    }
}
