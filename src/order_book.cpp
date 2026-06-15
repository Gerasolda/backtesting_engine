#include "order_book.hpp"
#include <iostream>


void OrderBook::addOrder(const Order& order) {
    orders.push_back(order);
}

void OrderBook::cancelOrder(int id) {
    std::erase_if(orders, [id](const Order& order) {
        return order.id == id;
    });
}

void OrderBook::printOrders() const {
    for (const Order& ord : orders) {
        std::cout << ord.id << " " << ord.price << "\n";
    }
}

int OrderBook::size() const {
    return orders.size();
}
