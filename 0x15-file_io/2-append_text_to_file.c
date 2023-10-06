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
	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);

}
/**
 * append_text_to_file - append on the existing file
 * @filename: file pointer
 * @text_content: the string to added at the end of the string in file
 * Return: 1 if file exist, -1 if not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t s, len = _strlen(text_content);

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	if (len)
		s = write(fd, text_content, len);
	close(fd);
	return (s == len ? 1 : -1);


}
