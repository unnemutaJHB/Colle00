/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unnemuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 10:57:15 by unnemuta          #+#    #+#             */
/*   Updated: 2020/07/15 12:07:11 by unnemuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    rush(int x,int y)
{
    char x_slashin = '/';
	char x_slashout = 92;
    char x_astr = '*';
    char y_astr = '*';
    int i;

    i = 1;
    while(x >= i)
    {
        if(i == 1)
        {
            ft_putchar(x_slashin);
            i++;
        }
		else if(i == x)
		{
			ft_putchar(x_slashout);
			i++;
		}
        else
        {
            ft_putchar(y_astr);
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
        ft_putchar(y_astr);
        while((x-2) >= check)
        {
            ft_putchar(' ');
            check++;
        }
        if(x > 1)
        {
            ft_putchar(y_astr);
        }
            ft_putchar('\n');
            i++;
        }

    i = 1;
    if(y > 2)
    {
        while(x >= i)
        {
            if(i == 1)
            {
                ft_putchar(x_slashout);
                i++;
            }
			if(i == x)
			{
				ft_putchar(x_slashin);
				i++;
			}
            else
            {
                ft_putchar(y_astr);
                i++;
            }
        }
        ft_putchar('\n');
    }
}
