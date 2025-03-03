/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 02:44:03 by ihaffout          #+#    #+#             */
/*   Updated: 2025/02/28 02:25:41 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

    #include <iostream>
    #include <stack>
    #include <string>

class RPN
{
    private:
        std::stack<double> _stack;
        double res;

    public:
        RPN();
        RPN(RPN const & src);
        RPN &operator=(RPN const & src);
        ~RPN();
        void run(char *str);
        void validate(std::string str);
};

#endif
