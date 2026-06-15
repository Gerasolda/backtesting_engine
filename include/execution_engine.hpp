#pragma once

#include "order.hpp"
#include "market_event.hpp"
#include "position.hpp"

bool shouldExecute (
    const Order& order,
    const MarketEvent& event
);

void execute(const Order& order, Position& pos);
