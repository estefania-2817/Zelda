#include "NewEnemy.h"

void NewEnemy::update(){
    
    counter++;
    if (currentMap && currentMap->getPlayer()) {
        linkX = currentMap->getPlayer()->getX();
        linkY = currentMap->getPlayer()->getY();
    }
    //newEnemyX = currentMap->getNewEnemy()->getX();
    //newEnemyY = currentMap->getNewEnemy()->getY();

    if(abs(linkX-this->getX()) >= abs(linkY-this->getY())) {
        if(linkX >= this->getX() ) {
            //move right
            direction = RIGHT;
        }else{
            //move left
            direction = LEFT;
        }
    } else {
        if(linkY >= this->getY()) {
            //move down
            direction = DOWN;
        }else{
            //move up
            direction = UP;
        }
    }

    // It is time to stop moving
    if (movingDir[UP] || movingDir[DOWN] || movingDir[LEFT] || movingDir[RIGHT]){
        if (counter == MOVEMENT_TIME){
            movingDir[UP] = false;
            movingDir[DOWN] = false;
            movingDir[LEFT] = false;
            movingDir[RIGHT] = false;
            counter = 0;
        }
    }

    else{
        // Time to move in a random direction
        if (counter == WAITING_TIME){
            movingDir[UP] = false;
            movingDir[DOWN] = false;
            movingDir[LEFT] = false;
            movingDir[RIGHT] = false;
            // Direction direction = static_cast<Direction>(ofRandom(4));
            movingDir[direction] = true;
            counter = 0;
        }
    }

    DynamicEntity::update();
}

void NewEnemy::damage(int damage){
    if (dead) return;
    // Play the damage sound if we're about to take damage
    if (invincibilityFrames == 0)
        handler->getSoundEffectManager()->playSoundEffect("enemy_hurt");
        
    DynamicEntity::damage(damage);
}

void NewEnemy::onDeath(){
    handler->getSoundEffectManager()->playSoundEffect("enemy_death");
}