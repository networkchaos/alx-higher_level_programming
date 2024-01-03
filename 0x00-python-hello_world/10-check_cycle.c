#include <stdlib.h>
#include "lists.h"
// typedef struct listint_s {
    // int n;
    // struct listint_s *next;
// } listint_t;

void free_listint(listint_t *head)
{
}

int check_cycle(listint_t *list)
{
  listint_t *slow = list;
  listint_t *fast = list;

  while (fast != NULL && fast->next != NULL)
  {
    slow = slow->next;
    fast = fast->next->next;

    if (slow == fast)
    {
      return 1;
    }
  }

  return 0;
}
