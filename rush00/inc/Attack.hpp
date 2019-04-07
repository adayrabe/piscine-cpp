//
// Created by Artem DAYRABEKOV on 2019-04-06.
//

#ifndef CONTROLLER_AATTACK_HPP
#define CONTROLLER_AATTACK_HPP

#include <iostream>
#include "GameObj.hpp"

class Attack : public GameObj {
private:
    int _damage;
    std::string _name;
	int _index;
public:
    Attack();

    Attack(int _damage, const std::string &_name);

    Attack (Attack const & other);
    Attack&operator=(Attack const &other);
    virtual ~Attack();
    virtual Attack* clone() const;

    int get_damage() const;

    const std::string &get_name() const;

    int get_index() const;

    void set_index(int _index);
};


#endif //CONTROLLER_AATTACK_HPP
