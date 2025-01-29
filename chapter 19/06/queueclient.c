// Test ADT queue (dynamically allocated)

#include <stdio.h>
#include "queue.h"

int main(void) {

    Queue q1, q2;
    Item str;

    q1 = create(2);
    q2 = create(2);

    insert(q1, "bad");
    insert(q1, "foo");
    insert(q2, "baz");
    insert(q2, "bar");


    // Print Queues in order
    printf("\nQueue 1:\n%s %s\n", return_first(q1), return_last(q1));
    printf("\nQueue 2:\n%s %s\n", return_first(q2), return_last(q2));

    if (!is_empty(q1) && !is_empty(q2)) {

        printf("\nRemove first item from Queue 1, %s.\n", return_first(q1));
        remove_next(q1);

        printf("\nRemove first item in Queue 2, %s.\n", return_first(q2));
        remove_next(q2);

        // Use different functions to return the same string.
        printf("\nInsert first item from Queue 2 , %s, into Queue 1.\n", return_last(q2));
        insert(q1, return_first(q2));
    }

    printf("\nDestroy Queue 2\n");
    destroy(q2);

    // Print Queue 1 in order
    printf("\nQueue 1:\n%s %s\n", return_first(q1), return_last(q1));

    // Print first string in list then remove and print new (current) first string.
    printf("\nRemove first item: %s\n", return_first(q1));
    remove_next(q1);
    printf("New (current) first item: %s\n", return_first(q1));

    destroy(q1);

    return 0;
}