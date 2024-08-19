/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:09:53 by ahajji            #+#    #+#             */
/*   Updated: 2024/08/19 13:29:03 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    iter(array, 5, increment);

    // Print the array to verify the elements have been incremented
    for (int i = 0; i < 5; ++i) {
        std::cout << array[i] << ' ';
    }

    return 0;
}