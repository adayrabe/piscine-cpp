//
// Created by Artem DAYRABEKOV on 2019-04-05.
//

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim {
public:

    Victim(std::string name);
    Victim(Victim const &other);
    Victim & operator=(Victim const &other);
    virtual ~Victim();

    std::string getName() const;
    virtual void getPolymorphed() const;

protected:
    std::string _name;
private:
    Victim();

};

std::ostream& operator<< (std::ostream &o, Victim const & victim);

#endif //EX00_VICTIM_HPP
