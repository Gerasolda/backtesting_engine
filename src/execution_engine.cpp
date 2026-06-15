#include "execution_engine.hpp"
#include "position.hpp"

bool shouldExecute(
    const Order& order,
    const MarketEvent& event
) {
    if (order.side == Side::Buy) {
        return event.ask <= order.price;
    }
    return event.bid >= order.price;
}

void execute(const Order& order, Position& pos) {
    if (order.side == Side::Buy) {
        pos.inventory += order.quantity;
    } else {
        pos.inventory -= order.quantity;
    }
}
