#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * strtow - function that splits a string into words
 * @str: string
 * Return: NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
int num_words, word_index, i;
char *token, **words;
if (str == NULL || strlen(str) == 0)
{
return (NULL);
}
num_words = 0;
token = strtok(str, " ");
while (token != NULL)
{
num_words++;
token = strtok(NULL, " ");
}
words = (char **)malloc((num_words + 1) * sizeof(char *));
if (words == NULL)
{
return (NULL);
}
word_index = 0;
token = strtok(str, " ");
while (token != NULL)
{
words[word_index] = strdup(token);
if (words[word_index] == NULL)
{
for (i = 0; i < word_index; i++)
{
free(words[i]);
}
free(words);
return (NULL);
}
word_index++;
token = strtok(NULL, " ");
}
words[word_index] = NULL;
return (words);
}
