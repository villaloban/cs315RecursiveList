#include<iostream>
#include"reclists.hpp"
#include"solutions.hpp"

list get_list(std::string purpose);
void test_equal();
void test_two_the_same();
void test_member();
void test_flat();
void test_firsts();
void test_list_pair();
void test_is_lat();
void test_reverseTopLevel();
void test_total_reverse();
void test_shape();
void test_intersection();
void test_union();
void test_substitute();
void test_subset();
void test_remove();





int main()
{
    // test_is_lat();
    // test_list_pair();
    // test_firsts();
    // test_flat();
    // test_member();
    // test_two_the_same();
    // test_equal();
    // test_reverseTopLevel();
    // test_total_reverse();
    // test_shape();
    // test_intersection();
    // test_union();
    // test_subset();
    // test_substitute();
    // test_remove();
}


list get_list(std::string purpose) {
    std::cout << "Enter a list for " << purpose << ": ";
    list p = read_list();
    std::cout << "Echoing the list that you entered below." << std::endl;
    write_list(p);
    return p;
}

void test_is_lat() {
    list p = get_list("is lat");
    std::cout << (is_lat(p));
}

void test_list_pair() {
    list p = get_list("test pair p");
    list q = get_list("test pair q ");
    write_list(list_pair(p, q));
}

void test_firsts() {
    list p = get_list("firsts");
    write_list(firsts(p));
}

void test_flat() {
    list p = get_list("flat");
    write_list(flat(p));
}

void test_member() {
    list p = get_list("test memeber p");
    list q = get_list("test member q ");
    std::cout << member(p, q);
}

void test_two_the_same() {
    list p = get_list("test two the same p");
    list q = get_list("test two the same q ");
    std::cout << two_the_same(p, q);
}

void test_equal() {
    list p = get_list("test equal p");
    list q = get_list("test equal q ");
    std::cout << equal(p, q);
}


void test_reverseTopLevel() {
    // Write your 3 test cases in this comment:
    // 1. p = (a b c d)
    //    result should be: (d c b a)
    // 2. p = ((a)(b c d) e)
    //    result should be: ( e (b c d) ( a) )
    // 3. p = ((a b c d e f))
    //    result should be: ((a b c d e f))

    // Remove this comment when you're ready
    list p = get_list("reverse top level");
    write_list(reverseTopLevel(p));

}

void test_total_reverse() {
    list p = get_list("total reverse");
    write_list(total_reverse(p));
}

void test_shape() {
    list p = get_list("test shape");
    write_list(shape(p));
}

void test_intersection() {
    list p = get_list("test interestection p");
    list q = get_list("test intersection q ");
    write_list(intersection(p, q));
}

void test_union() {
    list p = get_list("test union p");
    list q = get_list("test union q ");
    write_list(list_union(p, q));
}

void test_substitute() {
    list old_list = get_list("test remove a ");
    list new_list = get_list("test remove a ");
    list p = get_list("test remove p");

    list old = car(old_list);
    list newer_list = car(new_list);
    write_list(substitute(old, newer_list, p));
}


void test_subset() {
    list p = get_list("test sub p");
    list q = get_list("test sub q ");
    std::cout << subset(p, q);
}



void test_remove() {
    list p = get_list("test remove p");
    list a_list = get_list("test remove a ");
    list a = car(a_list);
    write_list(remove(p, a));
}
