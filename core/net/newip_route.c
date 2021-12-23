#include "net/uip-ds6.h"
#include "net/uip.h"

#include "lib/list.h"
#include "lib/memb.h"
#include "net/nbr-table.h"

#include <string.h>

NBR_TABLE(struct newip_route_neighbor_routes, newip_nbr_routes);


MEMB(routememb, newip_route_t, UIP_DS6_ROUTE_NB);

static int num_routes = 0;