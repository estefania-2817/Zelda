#pragma once

#include "StaticEntity.h"
#include <memory>



class BonusBlockFour : public StaticEntity {
protected:

public:
    BonusBlockFour(int x, int y, shared_ptr<Handler> handler) : StaticEntity(x, y, handler) {
        
    }
    ~BonusBlockFour(){};

    // Doors do nothing. Door collision is handled in the Map and GameState since it's a special case
    void onCollision(shared_ptr<DynamicEntity> e){};

};