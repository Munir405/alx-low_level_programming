#include "lists.h"
/**
  *free_list - frees a list_t
  *@head: pointer to head of list.
  *
  *Return: 0.
  */
void free_list(list_t *head)
{
	list_t *ptr;
 
 	if (head == NULL) /* account for no linked list*/
 		return;
 
 	while (head != NULL) /* have ptr keep track of head node and free*/
 	{
 		ptr = head;
 		head = head->next; /* move to next node while ptr frees prior*/
 		free(ptr->str); /* free malloced strings*/
 		free(ptr);
 	}	
}
