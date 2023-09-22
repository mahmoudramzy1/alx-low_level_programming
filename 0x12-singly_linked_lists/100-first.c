#include "lists.h"
void ComeFirst(void)__attribute__((constructor));
/**
 * ComeFirst - print before main func
 */
void ComeFirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
