/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unnemuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 12:08:13 by unnemuta          #+#    #+#             */
/*   Updated: 2020/07/15 12:08:34 by unnemuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    rush(int x,int y)
{
	char A = 'A';
	char B = 'B';
	char C = 'C';
    int i;

    i = 1;
    while(x >= i)
    {
        if(i == 1)
        {
            ft_putchar(A);
            i++;
        }
        else if(i == x)
        {
            ft_putchar(C);
            i++;
        }
        else
        {
            ft_putchar(B);
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
        ft_putchar(B);
        while((x-2) >= check)
        {
            ft_putchar(' ');
            check++;
        }
        if(x > 1)
        {
            ft_putchar(B);
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
                ft_putchar(A);
                i++;
            }
            if(i == x)
            {
                ft_putchar(C);
                i++;
            }
            else
            {
                ft_putchar(B);
                i++;
            }
        }
        ft_putchar('\n');
    }
}
