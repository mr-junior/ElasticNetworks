#pragma once

#include "point.h"

#include <boost/dynamic_bitset.hpp>

#include <vector>

class network
{
public:
  typedef std::vector<point_type> node_positions_type;
  typedef std::vector<std::pair<std::size_t, std::size_t>> links_type;

public:
  network();
  network(const std::size_t size);
  network(const node_positions_type& node_positions, const long double l0);
  network(const node_positions_type& node_positions, const links_type& links);

  void add_link(const std::size_t node1, const std::size_t node2);
  const node_positions_type& node_positions() const;
  node_positions_type& node_positions();

  const point_type& node_position(const std::size_t node) const;
  void set_node_position(const std::size_t node, const point_type& p);

  bool are_connected(const std::size_t node1, const std::size_t node2);

  void setSize(const std::size_t size);
  const std::size_t size() const;

private:
  node_positions_type nodes_;
  boost::dynamic_bitset<> links_;
};

void setup_links(network& net, const long double l0);

