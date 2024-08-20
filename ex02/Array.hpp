/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:46:25 by ahajji            #+#    #+#             */
/*   Updated: 2024/08/20 11:55:43 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
    private:
        T* arr;
        int size;
    public:
        Array() : arr(nullptr), size(0)
        {
            std::cout << "hi\n";
        }
        Array(unsigned int n) : arr(new T[n]()), size(n)
        {
            std::cout << "hi paramert\n" ;
        }

        ~Array() {
            delete[] arr;
        }
};


#endif