#include "monty.h"
/**
 * f_pall - Prints all values on the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: no used 
 */
void f_pall(stack_t **stack, unsigned int line_number)
{
    stack_t *current = *stack;
    (void) line_number;

    /* Iterate through the stack and print each element */
    while (current != NULL)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}
