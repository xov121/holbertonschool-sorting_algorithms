#ifndef SORT_H
#define SORT_H

#include <stddef.h> /* For size_t */
#include <stdbool.h> /* For bool */

/* Data Structure */

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;

/* Function prototypes for task 0, 1, 2, 3 */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

/* Helper functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void swap_ints(int *a, int *b);
void quick_sort_helper(int *array, int low, int high, size_t size);
int partition(int *array, int low, int high, size_t size);

#endif /* SORT_H */

