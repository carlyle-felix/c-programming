#include <stdio.h>
#include "queue.h"

struct queue_type {
    int pos;
    int next;
    int num_items;
    int size;
    Item queue[];
};

static void terminate(const char *s);
static void check(Queue q);
static bool is_full(Queue q);

Queue create(int size) {

    Queue q = malloc(sizeof(struct queue_type) + (sizeof(Item) * size));
    if (q == NULL) {
        terminate("Unable to allocate memory for queue.");
    }
    q->size = size;
    q->pos = 0;
    q->next = 0;
    q->num_items = 0;
}

void destroy(Queue q) {

    while (q->num_items > 0) {
        remove_next(q);
    }
    free(q);
}

void insert(Queue q, const Item s) {

    if (is_full(q)) {
        terminate("Error: Queue reached max length.");
    }
    
    q->queue[q->pos] = malloc((sizeof(char) * strlen(s)) + 1);
    if (q->queue[q->pos] == NULL) {
        terminate("Error: Failed to create space for new item.");
    }

    strcpy(q->queue[q->pos++], s);
    q->num_items++;
    check(q);
}

void remove_next(Queue q) {

    if (!is_empty(q)) {
        free(q->queue[q->next++]);
        q->num_items--;
        check(q);
    } else {
        terminate("Error: Queue is empty.");
    }
}

Item return_first(Queue q) {

    if (!is_empty(q)) {
        return q->queue[q->next];
    } else {
        terminate("Error: Queue is empty.");
    }
}

Item return_last(Queue q) {

    if (!is_empty(q)) {
        if (q->pos == 0 && q->num_items > 0) {
            return q->queue[q->size - 1];
        } else {
            return q->queue[q->pos - 1];
        }
    } else {
        terminate("Error: Queue is empty.");
    }
}

static bool is_full(Queue q) {

    return (q->num_items == q->size);
}

bool is_empty(Queue q) {

    return (q->num_items == 0);
}

static void check(Queue q) {
    
    if (q->pos > q->size - 1) {
        q->pos = 0;
    } else if (q->next > q->size - 1) {
        q->next = 0;
    }   
}

static void terminate(const char *s) {

    printf("%s\n", s);
    exit(EXIT_FAILURE);
}