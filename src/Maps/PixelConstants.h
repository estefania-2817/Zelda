#include "ofMain.h"

struct TilePixelColors{
    // Walls
    const ofColor CENTRAL_MOUNTAIN_WALL = ofColor(1, 57, 0);
    const ofColor UPPER_MOUNTAIN_WALL = ofColor(44, 132, 42);
    const ofColor LOWER_RIGHT_MOUNTAIN_CORNER = ofColor(71, 108, 70);
    const ofColor LOWER_LEFT_MOUNTAIN_CORNER = ofColor(157, 226, 155);
    const ofColor UPPER_RIGHT_MOUNTAIN_CORNER = ofColor(114, 176, 113);
    const ofColor UPPER_LEFT_MOUNTAIN_CORNER = ofColor(77, 198, 75);
    
    const ofColor CENTRAL_BROWN_WALL = ofColor(57, 33, 0);
    const ofColor UPPER_BROWN_WALL = ofColor(83, 55, 17);
    const ofColor LOWER_RIGHT_BROWN_CORNER = ofColor(195, 131, 43);
    const ofColor LOWER_LEFT_BROWN_CORNER = ofColor(203, 178, 144);
    const ofColor UPPER_RIGHT_BROWN_CORNER = ofColor(155, 130, 96);
    const ofColor UPPER_LEFT_BROWN_CORNER = ofColor(98, 71, 34);
    const ofColor CAVE_WALL = ofColor(75, 35, 0);
    const ofColor CAVE_UPPER_WALL = ofColor(98, 45, 1);
    const ofColor DUNGEON_WALL = ofColor(206, 18, 18);
    const ofColor BONUS_DUNGEON_WALL = ofColor(238, 14, 14); 
    

    // Decorations (also walls)
    const ofColor GREEN_TREES = ofColor(2, 131, 0);
    const ofColor CENTRAL_WATER = ofColor(24, 37, 214);
    const ofColor WATER_LOWER_LEFT_CORNER = ofColor(71, 111, 250);
    const ofColor GREEN_SNAIL_BUSH_THINGS = ofColor(124, 255, 121);
    const ofColor BROWN_SNAIL_ROCK_THING = ofColor(178, 108, 11);
    //const ofColor BLACK_ENTRANCE = ofColor(0, 0, 0);
    const ofColor OLD_MAN = ofColor(200, 53, 19);
    const ofColor CACTUS = ofColor(200, 187, 187);


    // Floors
    const ofColor WALKABLE_CAVE_FLOOR = ofColor(1, 0, 0);
    const ofColor WALKABLE_OVERWORLD_FLOOR = ofColor(255, 192, 122);
    const ofColor WATER_BRIDGE = ofColor(217, 78, 65);
    const ofColor WALKABLE_DUNGEON_FLOOR = ofColor(55, 36, 36); 
    const ofColor RECURSIVE_UP_FLOOR = ofColor(8, 137, 7); 
    const ofColor RECURSIVE_DOWN_FLOOR = ofColor(187, 230, 16); 
    const ofColor RECURSIVE_LEFT_FLOOR = ofColor(23, 65, 226); 
    const ofColor RECURSIVE_RIGHT_FLOOR = ofColor(206, 16, 230); 
    const ofColor WALKABLE_BONUS_DUNGEON_FLOOR = ofColor(5, 91, 148); 
    const ofColor BONUS_DUNGEON_ONE = ofColor(5, 148, 29); ////     one
    const ofColor BONUS_DUNGEON_TWO = ofColor(144, 5, 148); ////   two
    const ofColor BONUS_DUNGEON_TREE = ofColor(171, 208, 22); ////  three
    const ofColor BONUS_DUNGEON_FOUR = ofColor(61, 229, 255); ////    four



};

struct EntityPixelColors{

    // Doors
    const ofColor OLD_MANS_CAVE_ENTRANCE = ofColor(0, 0, 1);
    const ofColor OVERWORLD_ENTRANCE = ofColor(0, 0, 2);
    const ofColor OVERWORLD_ENTRANCE2 = ofColor(155, 149, 149);
    const ofColor OVERWORLD_ENTRANCE3 = ofColor(103, 99, 99); 


    //For consistency and ease, overworld pixel Map already has this door 
    //with this color in it, but it does not send you anywhere, 
    //that is where you come in :D
    const ofColor DUNGEON_ENTRANCE = ofColor(0, 0, 3);
    const ofColor BONUS_DUNGEON_ENTRANCE = ofColor(0, 0, 0);   
    // StaticEntities
    const ofColor FIRE = ofColor(250, 134, 107);

    // DynamicEntities
    const ofColor LINK = ofColor(25, 255, 0);
};
