//
// Created by Artem DAYRABEKOV on 2019-04-06.
//

#ifndef CONTROLLER_AATTACK_HPP
#define CONTROLLER_AATTACK_HPP

#include <iostream>

class AAttack {
private:
    int _damage;
    std::string _name;

public:
    AAttack();

    AAttack(int _damage, const std::string &_name);

    AAttack (AAttack const & other);
    AAttack&operator=(AAttack const &other);
    virtual ~AAttack();
    virtual AAttack* clone() const = 0;

    int get_damage() const;

    const std::string &get_name() const;
};


#endif //CONTROLLER_AATTACK_HPP
