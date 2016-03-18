#include "find_first_edge_with_name.h"
#include "find_first_edge_with_name_demo.impl"

#include <boost/test/unit_test.hpp>
#include "create_named_edges_and_vertices_k3_graph.h"

BOOST_AUTO_TEST_CASE(find_first_edge_with_name_thorough)
{
  {
    const auto g = create_named_edges_and_vertices_k3_graph();
    const auto ed = find_first_edge_with_name("AB", g);
    BOOST_CHECK(boost::source(ed,g) != boost::target(ed,g));
  }
}

