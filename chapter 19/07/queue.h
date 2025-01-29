#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

typedef struct queue_type *Queue;
typedef char *Item;

void insert(Queue q, const Item s);         // Insert at end of list.
void remove_next(Queue q);                  // Remove item from beginning of the list.
Item return_first(Queue q);                 // Return first item in list without changing the queue.
Item return_last(Queue q);                  // Return last item in list without changing the queue.
bool is_empty(Queue q);                     
Queue create(void);                         
void destroy(Queue q);                      

#endif