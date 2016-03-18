#include "find_first_custom_edge_with_my_edge.h"
#include "find_first_custom_edge_with_my_edge_demo.impl"

#include <boost/test/unit_test.hpp>
#include "create_custom_edges_and_vertices_k3_graph.h"

BOOST_AUTO_TEST_CASE(find_first_custom_edge_with_my_edge_thorough)
{
  {
    const auto g = create_custom_edges_and_vertices_k3_graph();
    const auto ed = find_first_custom_edge_with_my_edge(
      my_custom_edge("AB","first",0.0,0.0),
      g
    );
    BOOST_CHECK(boost::source(ed,g) != boost::target(ed,g));
  }
}

