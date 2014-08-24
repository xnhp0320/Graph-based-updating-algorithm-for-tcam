#ifndef __UPDATE_H__
#define __UPDATE_H__
#include <vector>

#include "rulesutils.h"


struct node {
    int index;
    int move;
    int min_cost;
    int max_cost;
    int topo_order;
    bool valid;
    int label;
    struct pc_rule *r;
    std::vector<struct node *> in;
    std::vector<struct node *> out;

    node () : index(-1), move(-1), min_cost(-1), max_cost(-1), topo_order(-1), valid(true), label(-1),  r(nullptr)
    {
        
    }

    ~node()
    {
    }

    bool operator < (const node &n) const {
        return index < n.index;
    }
};





#endif
