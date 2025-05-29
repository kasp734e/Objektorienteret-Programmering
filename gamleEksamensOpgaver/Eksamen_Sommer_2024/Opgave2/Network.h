#pragma once
#include <vector>
#include <stdexcept>
//Opgave 2 a)
template<typename T>
class Network
{
public:
	void addNode(const T& param1) {
    nodes_.push_back(param1);
  }

	void addConnection(const T& first, const T& second) {
    const T* first_p = findNode(first);
    const T* second_p = findNode(second);

    if (first_p == nullptr || second_p == nullptr)
    {
      throw std::invalid_argument("Node does not exist");
    }

    if (first == second)
    {
      throw std::invalid_argument("Self connection not allowed");
    }
    for (const auto& connection : connections_)
    {
      if (connection.first == first_p && connection.second == second_p || connection.first == second_p && connection.second
        == first_p)
      {
        throw std::invalid_argument("Connection is already established");
      }
    }
    connections_.emplace_back(first_p, second_p);
}

	std::vector<T> getAllNeighbours(const T& param1) const {
    const auto node_p = findNode(param1);

    std::vector<T> neighbours;

    for (const auto& connection : connections_)
    {
      if (node_p == connection.first)
      {
        neighbours.push_back(*connection.second);
      }
      if (node_p == connection.second)
      {
        neighbours.push_back(*connection.first);
      }
    }
	return neighbours;
}
	

private:
	const T* findNode(const T& to_find) const {
	for (const auto& location : nodes_)
	{
		if (location == to_find)
		{
			return &location;
		}
	}
	return nullptr;
}
	std::vector<T> nodes_;
	std::vector<std::pair<const T*, const T*>> connections_;
};
