**Student Info:** 
Name: Anthony Villalobos
Student ID: 008394627
Repo Link: https://github.com/villaloban/cs315RecursiveList.git

Collaboration & Sources: The sources that I mainly used to help me with this project were looking at past labs, and using the debugger. Durring this project I found that the debugger and stack tracing were very helpful when I was stuck on a function and wasn't getting the logic correct. Trial and error then understanding was something that was a pattern to me in this project. Durring the subset problem I also faced challenges and collaberated with my friend Gemma on our understanding of the problem. When we were still stuck on it I asked chat gpt on why my function wasnt correct and it told me that my member function might not be working as intended. That lead me to realize my member function is only comparing atoms and not sublists so therefore we use equal instead of eq to check the whole list. 


Implementation & Details: This program uses reccursive lists in order to solve different kinds of problems using car, cdr, eq, is_atom, is_null, cons, and append. These functions help us solve problems such as 
    list reverseTopLevel(list p); //reverses the atoms at the top level 
    bool is_lat(list p); //returns true if the whole list is made up of atoms
    bool member(list p, list q);  //Returns true if p appears anywhere in q
    bool member_equal(list p, list q);  //checks if the list is equal instead of just atoms
    list last(list p);  //Takes a non-empty list (not an atom) and returns its last element
    list list_pair(list p, list q);  //returns a list of pairs, where each pair contains corresponding atoms from p and q.
    list firsts(list p);  //returns a list of the first element from each sublist
    list flat(list p);    //returns a list in which all nested parentheses are removed
    bool two_the_same(list p, list q);    //returns true if p and q contain at least one atom in common.
    bool equal(list p, list q);  //Takes two recursive lists and determines if they are identical:
    list total_reverse(list p);  //Takes a recursive list and returns its mirror image.
    list shape(list p);  //returns a recursive list that consists only of the parentheses structure of the original.
    list intersection(list p, list q);  //returns a list of atoms that appear in both p and q.
    list list_union(list p, list q);  //returns a list of the union of p and q, without repetition.
    list substitute(list old, list neww, list p);  //returns a copy of p with every occurrence of atom old replaced by atom new
    list remove(list p, list a);  //Takes a list of atoms and an atom a, and returns a list that does not contain a
    bool subset(list p, list q);  //returns true if every atom in p also appears in q (

Testing & Status: 
Shape: Input; ( ( b ) (c d) ( e (f (g))) (h i ))
       Output ( ( ) () ( ( ())) ( ))

Total Reverse: Input; ( ( ( j k ) ( l ) ) ( m ( n o ) ( p ) ) ( ( q r ) ( s ) ) ( t ( jj kk ) ( ll ( nn ( oo ( zx ) ) ) ) ) )
               Output: ( ( ( ( ( ( zx ) oo ) nn ) ll ) ( kk jj ) t ) ( ( s ) ( r q ) ) ( ( p ) ( o n ) m ) ( ( l ) ( k j ) ) )

Substitute: For sub since we are working with lists and there no datatype known as atoms we have to do our input a little different
Enter a list for test remove a : (a)
Echoing the list that you entered below.
 ( a )
Enter a list for test remove a : (x)
Echoing the list that you entered below.
 ( x )
Enter a list for test remove p: (a b a c)
Echoing the list that you entered below.
 ( a b a c )

 Output: ( x b x c )
