/* 

STL = containers + algorithms + iterators

containers --> object which stores data
algorithms --> procedure to process data
iterators --> objects which points to an element of a container

----------------------containers------------------------

there are 3 types of containers
    1) sequence container
    2) associative container
    3) derived containers

    1) sequence containers --> stores data in linear fashion,
                               stores data serially

                            example: vector, list, dequeue

    2) associative containers --> designed in such a way that accessing the element is faster,
                                  direct access, stores data in a tree like structure

                                  example: map, multimap, set, multiset

    3) devied containers --> can be derived from sequence containers, can be derived from
                             associative containers, used for real world modelling

                             examples of real world modelling: stack, queue, priority stack

                    general information: stack is LIFO (last in first out)
                                         queue is FIFO (first in first out)


    WHEN TO USE WHICH?

        1) sequence containers:

            Vector:
                RA (random access) --> fast
                insertion and deletion in the middle --> slow
                insertion at the end --> fast
                has contiguous memory location

            List:
                RA (random access) --> slow
                doesn't have contiguous memory location
                insertion in the middle (compared to array) --> fast
                insertion and deletion in the end --> fast

        2) associative containers:
            all operations are fast except RA due to tree data structure


        3) derived containers:
            depends on data structure

*/