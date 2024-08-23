#pragma once

#include "StaticEntity.h"
#include <memory>



class BonusBlockOne : public StaticEntity {
protected:

public:
    BonusBlockOne(int x, int y, shared_ptr<Handler> handler) : StaticEntity(x, y, handler) {
        
    }
    ~BonusBlockOne(){};

    // Doors do nothing. Door collision is handled in the Map and GameState since it's a special case
    void onCollision(shared_ptr<DynamicEntity> e){};

};