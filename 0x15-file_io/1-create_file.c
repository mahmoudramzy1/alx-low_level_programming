#include "main.h"
/**
 * _strlen - count the chars in array
 * @s: the array
 * Return: the number of chars
 */
int _strlen(char *s)
{
	int i = 0;
	
	if (!s)
		return (0);
	while (*s++)
	{
		i++;
	}
	return (i);

}
/**
 * create_file - creats file
 * @filename: pointer to file name
 * @text_content: content will be in file
 * Return: 1 if succes -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!text_content)
		return (-1);
	fd = open(filename , O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (len)
	{
		bytes = write(fd, text_content, _strlen(text_content));
	}
	close(fd);
	if (bytes == len)
		return (1);
	else
		return (-1);

}
