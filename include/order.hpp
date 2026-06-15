#pragma once

enum class Side {
    Buy,
    Sell
};

struct Order {
    int id;
    Side side;

    double price;
    double quantity;

};


