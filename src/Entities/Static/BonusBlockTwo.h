#pragma once

#include "StaticEntity.h"
#include <memory>



class BonusBlockTwo : public StaticEntity {
protected:

public:
    BonusBlockTwo(int x, int y, shared_ptr<Handler> handler) : StaticEntity(x, y, handler) {
        
    }
    ~BonusBlockTwo(){};

    // Doors do nothing. Door collision is handled in the Map and GameState since it's a special case
    void onCollision(shared_ptr<DynamicEntity> e){};

};