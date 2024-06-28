#ifndef NODE_H
#define NODE_H

#include <string>
#include <utility>

class Node {
public:
    // THE LOCATION SHOULD BE THE CENTER OF THE ITEM
    Node(const std::pair<double, double>& location,
         const std::pair<double, double>& dimension,
         const std::string& object);

    [[nodiscard]] std::pair<double, double> getLoc() const;
    [[nodiscard]] std::pair<double, double> getDim() const;
    [[nodiscard]] std::string getObj() const;
    void setLoc(const std::pair<double, double>& newLocation);
private:
    std::pair<double, double> location;
    std::pair<double, double> dimension;
    std::string object;

};

#endif //NODE_H
