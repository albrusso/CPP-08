/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:13:41 by albrusso          #+#    #+#             */
/*   Updated: 2024/07/24 14:22:08 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <list>
#include <stack>
#include "easyfind.hpp"

int main(void)
{
	try
	{
		std::vector <int> vec;
		vec.push_back(1);
		vec.push_back(2);
		vec.push_back(3);
		vec.push_back(4);
		vec.push_back(5);
		std::cout << "Elemento trovato: " << *easyfind(vec, 3) << std::endl;
		std::cout << "Elemento trovato: " << *easyfind(vec, 6) << std::endl;
	} catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::list <int> lst;
		lst.push_back(10);
		lst.push_back(20);
		lst.push_back(30);
		lst.push_back(40);
		lst.push_back(50);
		std::cout << "Elemento trovato: " << *easyfind(lst, 30) << std::endl;
		std::cout << "Elemento trovato: " << *easyfind(lst, 60) << std::endl;
    } catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::stack <int> stack;
		stack.push(100);
		stack.push(200);
		stack.push(300);
		stack.push(400);
		stack.push(500);
		std::cout << "Elemento trovato: " << *easyfind(stack, 300) << std::endl;
		std::cout << "Elemento trovato: " << *easyfind(stack, 600) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	
	return 0;
}