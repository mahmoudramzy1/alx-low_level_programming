#include "lists.h"
void ComeFirst(void)__attribute__((constructor));
/**
 * ComeFirst - print before main func
 */
void ComeFirst(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
