/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:42:50 by albrusso          #+#    #+#             */
/*   Updated: 2024/07/23 12:37:33 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
    try {
        Span s(10);
        std::vector<int> numbers;

        numbers.push_back(1);
        numbers.push_back(2);
        numbers.push_back(3);
        numbers.push_back(4);
        numbers.push_back(5);
        numbers.push_back(6);
        numbers.push_back(7);
        numbers.push_back(8);
        numbers.push_back(9);
        numbers.push_back(10);
        numbers.push_back(10);
        s.addMoreNumber(numbers.begin(), numbers.end());

        std::cout << "Shortest Span: " << s.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << s.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}