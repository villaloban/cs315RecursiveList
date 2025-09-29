#ifndef __MY_SOLUTION_HPP__
#define __MY_SOLUTION_HPP__

#include<iostream>
#include"reclists.hpp"

int numNodesAtTheTopLevel(list p); //check
list append(list p, list q); //check
list reverseTopLevel(list p); //check
bool is_lat(list p); //check
bool member(list p, list q);  //check
bool member_equal(list p, list q);  //check
list last(list p);  //check
list list_pair(list p, list q);  //check
list firsts(list p);
list flat(list p);
bool two_the_same(list p, list q);
bool equal(list p, list q);
list total_reverse(list p);
list shape(list p);
list intersection(list p, list q);
list list_union(list p, list q);
list substitute(list old, list neww, list p);
list remove(list p, list a);
bool subset(list p, list q);
list permute(list p);

#endif
