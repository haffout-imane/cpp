/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 23:16:00 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/31 04:17:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

    #include "Animal.hpp"

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain(void);
        Brain(Brain &obj);
        Brain &operator=(Brain &obj);
        ~Brain(void);

        void setIdea(int index, std::string idea);
        const std::string getIdea(int index) const;
};

#endif