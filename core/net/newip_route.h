#include "sys/stimer.h"
#include "lib/list.h"
#include "net/rpl/rpl.h"

/* Needed for the extended route entry state when using ContikiRPL */
typedef struct newip_route_entry {
  uint32_t lifetime;
  void *dag;
  uint8_t learned_from;
  uint8_t nopath_received;
} newip_route_entry_t;


/** \brief The neighbor routes hold a list of routing table entries
    that are attached to a specific neihbor. */
struct newip_route_neighbor_routes {
  LIST_STRUCT(route_list);
};

/** \brief An entry in the routing table */
typedef struct newip_route {
  struct newip_route *next;
  /* Each route entry belongs to a specific neighbor. That neighbor
     holds a list of all routing entries that go through it. The
     routes field point to the uip_ds6_route_neighbor_routes that
     belong to the neighbor table entry that this routing table entry
     uses. */
  struct newip_route_neighbor_routes *routes;
  //uip_ipaddr_t ipaddr;
  newip_addr_t newipaddr;
#ifdef UIP_DS6_ROUTE_STATE_TYPE
  UIP_DS6_ROUTE_STATE_TYPE state;
#endif
  //最大匹配的长度
  uint8_t length;
} newip_route_t;




newip_route_t *newip_route_lookup(newip_addr_t *destipaddr);
newip_route_t *newip_route_add(newip_addr_t *newipaddr, uint8_t length,
                                   newip_addr_t *next_hop);
void newip_route_rm(newip_route_t *route);
void newip_route_rm_by_nexthop(newip_addr_t *nexthop);

newip_addr_t *newip_route_nexthop(newip_route_t *);
int newip_route_num_routes(void);
newip_route_t *newip_route_head(void);
newip_route_t *newip_route_next(newip_route_t *);