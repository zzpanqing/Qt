#ifndef BATTLESHIP_H
#define BATTLESHIP_H

class Tower {};

class Cannon;


class BattleShip
{
    Tower d_controlTower;
    Cannon *d_replaceableForwardBattery_p;
    Cannon& d_fixedAftBattery;
public:
    BattleShip();
};

#endif // BATTLESHIP_H
