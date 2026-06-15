#pragma once

#include "order.hpp"
#include <vector>

class OrderBook {
private:
    std::vector<Order> orders;

public:
    void addOrder(const Order& order);

    void cancelOrder(int id);
    void printOrders() const;
    int size() const;

};

