/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:04:34 by ahajji            #+#    #+#             */
/*   Updated: 2024/08/19 13:28:12 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T, typename Func>
void    iter(T *addArr, size_t length, Func func)
{
    for (size_t i = 0; i < length; ++i) {
        func(addArr[i]);
    }
}

void increment(int& i) {
    ++i;
}

#endif