#pragma once

#include "StaticEntity.h"
#include <memory>

class Cactus : public StaticEntity {
public:
    Cactus(int x, int y, shared_ptr<Handler> handler) : StaticEntity(x, y, handler) {}
    ~Cactus(){};
    void onCollision(shared_ptr<DynamicEntity> e) { e->damage(2); };
};