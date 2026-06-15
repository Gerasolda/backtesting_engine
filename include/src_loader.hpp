#pragma once

#include <vector>
#include <string>

#include "market_event.hpp"

std::vector<MarketEvent> load_csv(const std::string &filename);
