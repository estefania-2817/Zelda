#pragma once

#include "Item.h"

class BasicSword : public Item {
private:
    bool isCollected;
public:
    BasicSword(int x, int y, shared_ptr<Handler> handler, ofImage sprite): Item(x, y, handler, sprite) {
        this->isCollected = false;
}
    ~BasicSword(){}; //virtual ~BasicSword() = default // if i use this it trows an error when closing app
    
    void applyEffect(shared_ptr<Link> link){link->hasSword = true;}
    

    
    
};