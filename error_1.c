#include "monty.h"

/**
 * pint_error - Prints pint error messages for empty stacks.
 * @linenumber: Line number in Monty bytecodes file where error occurred.
 *
 * Return: (EXIT_FAILURE) always.
 */
int pint_error(unsigned int linenumber)
{
fprintf(stderr, "L%u: can't pint, stack empty\n", linenumber);
return (EXIT_FAILURE);
}
/**
 * pop_error - Prints pop error messages for empty stacks.
 * @linenumber: Line number in script where error occured.
 *
 * Return: (EXIT_FAILURE) always.
 */
int pop_error(unsigned int linenumber)
{
fprintf(stderr, "L%u: can't pop an empty stack", linenumber);
return (EXIT_FAILURE);
}
/**
 * short_stack_error - Prints monty math function error messages
 *                     for stacks/queues smaller than two nodes.
 * @linenumber: Line number in Monty bytecodes file where error occurred.
 * @op: Operation where the error occurred.
 *
 * Return: (EXIT_FAILURE) always.
 */
int short_stack_error(unsigned int linenumber, char *op)
{
fprintf(stderr, "L%u: can't %s, stack too short\n", linenumber, op);
return (EXIT_FAILURE);
}
/**
 * no_int_error - error for not providing integer during the push command
 * @line_number: line number where the error occured
 * Return: integer
 */
int no_int_error(unsigned int line_number)
{
fprintf(stderr, "L%u: usage: push integer\n", line_number);
return (EXIT_FAILURE);
}
