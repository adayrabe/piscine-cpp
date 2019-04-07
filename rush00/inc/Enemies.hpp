//
// Created by Artem DAYRABEKOV on 2019-04-07.
//

#ifndef RUSH00_ENEMIES_HPP
#define RUSH00_ENEMIES_HPP

#include "IEnemies.hpp"

class Enemies : IEnemies{
    typedef struct s_enemy{
        Enemy *enemy;
        struct s_enemy *next;
}t_enemy;
private:
    t_enemy *_enemies;
    static int _amount;

public:
    Enemies();
    Enemies(Enemies const &other);
    Enemies& operator=(Enemies const &other);
    virtual ~Enemies();

    t_enemy *get_enemies() const;

    void removeEnemies();
    void addEnemies(t_enemy *enemies);

    Enemy *getEnemy(int i) const;
    void push(Enemy *enemy);
    void removeEnemy(int index);
};


#endif //RUSH00_ENEMIES_HPP
