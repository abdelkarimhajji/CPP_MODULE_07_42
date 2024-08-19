/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 09:01:23 by ahajji            #+#    #+#             */
/*   Updated: 2024/08/19 10:55:45 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

#include <iostream>

template <typename T> 
void    swap(T &x, T &y)
{
    T tmp;
    tmp = x;
    x = y;
    y = tmp;
}

template <typename T>
T    min(T x, T y)
{
   if(y > x)
        return x;
    return y;
}

template <typename T>
T    max(T x, T y)
{
    if (x > y)
        return x;
    return y;
}

#endif