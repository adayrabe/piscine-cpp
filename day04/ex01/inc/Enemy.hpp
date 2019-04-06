//
// Created by Artem DAYRABEKOV on 2019-04-05.
//

#ifndef EX01_ENEMY_HPP
#define EX01_ENEMY_HPP
#include <iostream>

class Enemy{
private:
    Enemy();
protected:
    int _hp;
    std::string _type;
public:
    Enemy(int hp, std::string const & type);
    Enemy(Enemy const &other);
    Enemy& operator= (Enemy const &other);
    virtual ~Enemy();
    std::string virtual getType() const;
    int getHP() const;
    virtual void takeDamage(int);
};


#endif //EX01_ENEMY_HPP
