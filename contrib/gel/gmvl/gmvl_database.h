#ifndef gmvl_database_h_
#define gmvl_database_h_
#ifdef __GNUC__
#pragma interface "gmvl_database"
#endif
/*
  crossge@crd.ge.com
*/

#include <vcl/vcl_iostream.h>
#include <vcl/vcl_vector.h>
#include <vcl/vcl_string.h>

#include <gmvl/gmvl_node_cache.h>
#include <gmvl/gmvl_connection_cache.h>

class gmvl_database 
{
public:

  // methods on database node to node connections


  // methods on database nodes
  void add_node( const gmvl_node_ref node);
  void remove_node( const gmvl_node_ref node);

  // methods on connections
  void add_connection( const gmvl_node_ref node1, const gmvl_node_ref node2);

  // output
  friend ostream &operator<<( ostream &os, const gmvl_database db);

protected:

  gmvl_node_cache nodecache_;
  gmvl_connection_cache connectioncache_;
};

ostream &operator<<( ostream &os, const gmvl_database db);


#endif
