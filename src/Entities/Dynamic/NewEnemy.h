#pragma once

#include "DynamicEntity.h"
#include "Map.h"

class NewEnemy : public DynamicEntity {
    private:
        int counter;
        const int WAITING_TIME = 70;  // Put this to 1 if u think this is too easy for ya :D 
        const int MOVEMENT_TIME = 25;
        Direction direction;
        int linkX;
        int linkY;
        shared_ptr<Map> currentMap;

    public: 
        NewEnemy(int x, int y, shared_ptr<Handler> handler, shared_ptr<DynamicEntityAnimations> animations) : DynamicEntity(x, y, handler, animations) {
            this->MAX_HEALTH = 1;
            this->health = MAX_HEALTH;
            this->counter = 0;
        };

        void update();
        void damage(int damage);
        void onDeath();
        void onCollision(shared_ptr<DynamicEntity> e) { e->damage(20); };
        void setDirection(Direction d) { direction = d;}

        void setLinkX(int X){linkX = X;}
        void setLinkY(int Y){linkY = Y;}
        
};