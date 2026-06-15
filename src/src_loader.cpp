#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <src_loader.hpp>


std::vector<MarketEvent> load_data() {
    std::ifstream file("data/sample.csv");
    std::vector<MarketEvent> res;
    if (file.is_open()) {
        std::string line;
        int cnt = 0;
        while (getline(file, line)) {
            if (cnt) {
                std::stringstream ss(line);
                std::string val;
                MarketEvent ne;
                auto& [timestamp, bid, ask, bid_volume, ask_volume] = ne;
                std::getline(ss, val, ',');
                timestamp = stoll(val);
                std::getline(ss, val, ',');
                bid = stod(val);
                std::getline(ss, val, ',');
                ask = stod(val);
                std::getline(ss, val, ',');
                bid_volume = stod(val);
                std::getline(ss, val, ',');
                ask_volume = stod(val);
                res.push_back(ne);
            }
            cnt++;
        }
        file.close();
    }
    return res;
}




