/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:40:58 by ahajji            #+#    #+#             */
/*   Updated: 2024/08/20 15:01:31 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int getConst() {
    return 10;
}

int main()
{
    Array<int> arr(5);
    int * a = new int();
    std::cout << *a << std::endl;
    
    try
    {
        arr[1] = 8;
        arr[9] = 11;
        std::cout << arr[1] << std::endl;
    }
    catch(const std::out_of_range& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "this is the size : " << arr.size() << std::endl;
    
    
    delete a;

    // std::cout << getConst() << "\n"
    return 0;
}