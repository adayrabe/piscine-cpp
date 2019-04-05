//
// Created by Artem DAYRABEKOV on 2019-04-05.
//

#ifndef EX00_PEON_HPP
#define EX00_PEON_HPP
#include "Victim.hpp"

class Peon : public virtual Victim{

public:
    Peon(std::string name);
    Peon(Peon const &other);
    Peon& operator= (Peon const &other);
    virtual ~Peon();
    virtual void getPolymorphed() const;


private:
    Peon();

};


#endif //EX00_PEON_HPP
