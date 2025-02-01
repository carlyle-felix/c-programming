#include <stdio.h>
#include "queue.h"

struct node {
    Item item;
    struct node *next;
};

struct queue_type {
    struct node *first;
    struct node *last;
};

static void terminate(const char *s);
static bool is_full(Queue q);

Queue create(void) {

    Queue q = malloc(sizeof(struct node));
    if (q == NULL) {
        terminate("Unable to allocate memory for queue.");
    }
    
    q->first = NULL;
    q->last = NULL;
}

void destroy(Queue q) {

    while (q->last->next != NULL) {
        remove_next(q);
    }
    free(q->last);
    free(q);
}

void insert(Queue q, const Item s) {

    if (is_full(q)) {
        terminate("Error: Queue reached max length.");
    }
    
    struct node *temp = malloc(sizeof(struct node));
    if (temp == NULL) {
        terminate("Error: failed to allocate space for new item.");
    }
    temp->item = malloc(sizeof(Item) * (strlen(s) + 1));
    if (temp->item == NULL) {
        terminate("Error: failed to allocate space for new item.");
    }

    strcpy(temp->item, s);
    temp->next = q->last;
    if (q->first != NULL) {
        q->last = temp;
    } else {
        q->first = temp;
        q->last = q->first;
    }
}

void remove_next(Queue q) {

    if (!is_empty(q)) {

        struct node *temp = malloc(sizeof(struct node));
        if (temp == NULL) {
            terminate("Error: failed to create temp item.");
        }

        for (temp = q->last, q->first = NULL; temp->next != NULL; q->first = temp, temp = temp->next);
        free(temp->item);
        free(temp);
        q->first->next = NULL;
    } else {
        terminate("Error: Queue is empty.");
    }
}

Item return_first(Queue q) {

    if (!is_empty(q)) {
        return q->first->item;
    } else {
        terminate("Error: Queue is empty.");
    }
}

Item return_last(Queue q) {

    if (!is_empty(q)) {
        return q->last->item;
    } else {
        terminate("Error: Queue is empty.");
    }
}

static bool is_full(Queue q) {

    return false;
}

bool is_empty(Queue q) {

    return q->first == NULL;
}

static void terminate(const char *s) {

    printf("%s\n", s);
    exit(EXIT_FAILURE);
}