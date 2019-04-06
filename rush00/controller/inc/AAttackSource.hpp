//
// Created by Artem DAYRABEKOV on 2019-04-06.
//

#ifndef CONTROLLER_AATTACKSOURCE_HPP
#define CONTROLLER_AATTACKSOURCE_HPP

#include "IAttackSource.hpp"
class AAttackSource : public IAttackSource{

    typedef struct s_attack{
        AAttack *attack;
        struct  s_attack *next;
    }t_attack;
protected:
    t_attack *_attacks;
public:
    AAttackSource();
    AAttackSource(AAttackSource const &other);

    AAttackSource(t_attack *_attacks);

    virtual AAttackSource& operator=(AAttackSource const &other);
    virtual ~AAttackSource();
    AAttack* getAttackAt(int ind) const;

    t_attack *get_attacks() const;

    void addAttacks(t_attack *attacks);
    void removeAttacks();

    void learnAttack(AAttack *attack);

    AAttack *createAttack(std::string const &type);
};


#endif //CONTROLLER_AATTACKSOURCE_HPP
