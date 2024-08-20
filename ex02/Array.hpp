/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:46:25 by ahajji            #+#    #+#             */
/*   Updated: 2024/08/20 15:00:36 by ahajji           ###   ########.fr       */
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
        unsigned int _size;
    public:
        Array() : arr(nullptr), _size(0)
        {
            std::cout << "hi\n";
        }
        Array(unsigned int n) : arr(new T[n]()), _size(n)
        {
            std::cout << "hi paramert\n" ;
        }
        Array(const Array& array) : arr(new T[array._size]), _size(array._size)
        {
            unsigned int i = 0;
            while (i < _size)
            {
                arr[i] = array.arr[i];
                i++;
            }   
        }
        Array& operator=(const Array& array)
        {
            if(this != &array)
            {
                delete[] arr;
                arr = new T[array._size];
                _size = array._size;
                unsigned int i = 0;
                while (i < _size)
                {
                    arr[i] = array.arr[i];
                    i++;
                }   
            }
            return *this;
        }
        
        T& operator[](unsigned int index)
        {
            if(index < 0 || index >= _size)
                throw std::out_of_range("Array index out of range");
            return arr[index];
        }

        unsigned int size() const {
            return _size;
        }

        ~Array() {
            delete[] arr;
        }
};


#endif