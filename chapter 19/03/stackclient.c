#include <stdio.h>
#include "stackADT.h"

void print_len(Stack s, char *stackname);

int main(void) {

    Stack s1, s2;
    int n;

    s1 = create();
    s2 = create();

    push(s1, 1);
    print_len(s1, "Stack 1");
    push(s1, 2);
    print_len(s1, "Stack 1");

    n = pop(s1);
    print_len(s1, "Stack 1");
    printf("Popped %d from s1\n", n);
    push(s2, n);
    print_len(s2, "Stack 2");
    n = pop(s1);
    print_len(s1, "Stack 1");
    printf("Popped %d from s1\n", n);
    push(s2, n);
    print_len(s2, "Stack 2");

    destroy(s1);

    while (!is_empty(s2)) {
        printf("Popped %d from s2\n", pop(s2));
        print_len(s2, "Stack 2");
    }

    push(s2, 3);
    print_len(s2, "Stack 2");
    make_empty(s2);
    print_len(s2, "Stack 2");
    if (is_empty(s2)) {
        printf("s2 is empty\n");
    } else {
        printf("s2 is not empty\n");
    }

    destroy(s2);

    return 0;
}

void print_len(Stack s, char *stackname) { 

    printf("Length of %s: %d\n", stackname, length(s));
}