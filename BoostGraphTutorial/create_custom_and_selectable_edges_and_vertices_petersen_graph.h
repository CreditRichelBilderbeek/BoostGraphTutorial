#ifndef CREATE_CUSTOM_AND_SELECTABLE_EDGES_AND_VERTICES_PETERSEN_GRAPH_H
#define CREATE_CUSTOM_AND_SELECTABLE_EDGES_AND_VERTICES_PETERSEN_GRAPH_H

#include <boost/graph/adjacency_list.hpp>
#include "install_edge_custom_type.h"
#include "install_edge_is_selected.h"
#include "install_vertex_custom_type.h"
#include "install_vertex_is_selected.h"
#include "my_custom_edge.h"
#include "my_custom_vertex.h"

boost::adjacency_list<
  boost::vecS,
  boost::vecS,
  boost::undirectedS,
  boost::property<
    boost::vertex_custom_type_t, my_custom_vertex,
    boost::property<
      boost::vertex_is_selected_t, bool
    >
  >,
  boost::property<
    boost::edge_custom_type_t, my_custom_edge,
    boost::property<
      boost::edge_is_selected_t, bool
    >
  >
>
create_custom_and_selectable_edges_and_vertices_petersen_graph() noexcept;

#endif // CREATE_CUSTOM_AND_SELECTABLE_EDGES_AND_VERTICES_PETERSEN_GRAPH_H
