/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 18:47:10 by ihaffout          #+#    #+#             */
/*   Updated: 2025/01/01 04:50:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{    
    Cat* Adora = new Cat();
    Adora->setBrainIdeas(0, "I meow, they feed me. I meow louder, they feed me faster. Truly, I control the universe.");
    Adora->setBrainIdeas(1, "Sleep 16 hours a day or 18? Productivity is overrated anyway.");

    Dog* Arya = new Dog();
    Arya->setBrainIdeas(0, "The hooman said 'good girl' today. But what if I could be… the BEST girl?");
    Arya->setBrainIdeas(1, "Hooman left for 5 minutes. Felt like 5 years. Glad they’re back, though.");

    std::cout << "An idea from a dog brain: " << Arya->getBrainIdeas(1) << std::endl;
    std::cout << "Another idea from a dog brain: " << Arya->getBrainIdeas(0) << std::endl;
    std::cout << "An idea from a cat brain: " << Adora->getBrainIdeas(1) << std::endl;
    std::cout << "Another idea from a cat brain: " << Adora->getBrainIdeas(0) << std::endl;

    
    
    delete Arya;
    delete Adora;
    return 0;
}