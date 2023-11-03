#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * count_words - function that splits a string into words.
 * @str: argument of strings
 * Return: if fails return NULL, else NULL if str == NULL or str == ""
 */
int count_words(const char *str)
{
int count, in_word, i;
count = 0;
in_word = 0;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
{
in_word = 0;
}
else if (in_word == 0)
{
count++;
in_word = 1;
}
}
return (count);
}
/**
 * strtow - helper function
 * @str: pointer to string
 * Return: NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
int num_words, word_count, i;
char **word_array, *token;
if (str == NULL || *str == '\0')
{
return (NULL);
}
num_words = count_words(str);
word_array = (char **)malloc((num_words + 1) * sizeof(char *));
if (word_array == NULL)
{
return (NULL);
}
word_count = 0;
token = strtok(str, " \t\n");
while (token != NULL)
{
word_array[word_count] = (char *)malloc(strlen(token) + 1);
if (word_array[word_count] == NULL)
{
for (i = 0; i < word_count; i++)
{
free(word_array[i]);
}
free(word_array);
return (NULL);
}
strcpy(word_array[word_count], token);
word_count++;
token = strtok(NULL, " \t\n");
}
word_array[word_count] = NULL;
return (word_array);
}
