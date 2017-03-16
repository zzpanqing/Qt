#ifndef ARIZONAMEMORIAL_H
#define ARIZONAMEMORIAL_H

class Battleship
{};

class Shop {};

class Exhibit; // declaration only


class ArizonaMemorial : private Battleship
{
    Shop d_giftShop;
    Exhibit *d_current_p;
    Exhibit& d_default;
    //...
};

#endif // ARIZONAMEMORIAL_H
