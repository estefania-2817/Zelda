#pragma once

#include "Animation.h"
#include "Link.h"
#include "Tektike.h"
#include "NewEnemy.h"
#include "BasicSword.h"
#include "MapBuilder.h"
#include "State.h"
#include <memory>

class GameState : public State {

private:
    shared_ptr<Map> currentMap;
    shared_ptr<Map> overWorldMap;
    shared_ptr<Map> oldManCaveMap;
    shared_ptr<Map> newDungeon;  
    shared_ptr<Map> bonusDungeon;  
    unique_ptr<MapBuilder> mapBuilder;
    shared_ptr<BasicSword> bSword;
    shared_ptr<NewEnemy> newEnemy;
   
public:
    GameState(shared_ptr<Handler> handler) : State(handler) { this->reset(); }
    void update();
    void draw();
    void reset();
    void keyPressed(int key);
    void keyReleased(int key);
    ofImage menuHUD;
    bool paused;
    int hudY;
    int hudH;
    int hudHeight;
    int changeState;
    int deleteTimer = 0;

    shared_ptr<Tektike> createTektike();
    shared_ptr<NewEnemy> createNewEnemy();
    shared_ptr<BasicSword> createBasicSword();
};