#include "node.h"

Node::Node(
  const std::pair<double, double>& location,
  const std::pair<double, double>& dimension,
  const std::string& object){
    Node::location = location;
    Node::dimension = dimension;
    Node::object = object;
};

void Node::setLoc(const std::pair<double, double>& newLocation) {
    location = newLocation;
};

std::pair<double, double> Node::getLoc() const {
    return location;
};

std::pair<double, double> Node::getDim() const {
    return dimension;
};

std::string Node::getObj() const {
    return object;
};
