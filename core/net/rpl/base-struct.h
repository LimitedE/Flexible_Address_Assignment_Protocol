#include <stdio.h>
#include "net/rpl/rpl.h"
#define BITSPERWORD 32
#define SHIFT 5
#define MASK 0x1F
#define MAP_N 256
#define MAX_ADDRL 10


int conv_map[1 + MAP_N/BITSPERWORD],leaf_map[1 + MAP_N/BITSPERWORD];

void set(int a[],int i);
void clr(int a[],int i);
int test(int a[],int i);
// void newip_addr_cpy(newip_addr_t *des , newip_addr_t *src);