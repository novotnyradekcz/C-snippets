#ifndef STACK_H
#define STACK_H

#include <stddef.h>
#include <stdlib.h>

typedef int s_data_t;
struct stack;

// constructs a new (empty) stack
struct stack *stack_create(void);

// counts the items on a stack
size_t stack_count(const struct stack *stack);

// push item onto the top of a stack
void stack_push(struct stack *stack, s_data_t item_data);

// removes item from the top of a stack
s_data_t stack_pop(struct stack *stack);

// peeks at item at the top of a stack (without removing it)
s_data_t stack_peek(struct stack *stack);

// destroys an entire stack
// stack will be a dangling pointer after calling this method on it
void list_destroy(struct list *list);

#endif
