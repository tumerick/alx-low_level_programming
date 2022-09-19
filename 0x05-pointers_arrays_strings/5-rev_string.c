#include "main.h"
#include <string.h>

/**
 * rev_string - given a point to a string
 * reverses that string in place.
 *
 * @s: <char> pointer
 *
 * Return: void
 */

void rev_string(char *s)
{
	/* 
	 * create an intermediate 
	 * pointer to s: *end
	 * 
	 * -- based on this: (incoming link)
	 * https://stackoverflow.com/questions/72630711/iterate-over-str-vs-str-in-while-loop-in-c
	 * 
	 * *end == end[0]
	 */
	char *end = s;
	char tmp = 0;

	/* base case */
	if (!s)
		return;
	
	/* 
	 * Get the pointer to the end
	 * of the string
	 */
	while (*end)
	{
		/* s[0], s[1]... s[i++] */
		end++;
	}
	/* not the "\0" */
	end--;

	/*
	 * at this point 
	 * end == s[-1]
	 */
	while (end > s)
	{
		/* swap */
		tmp = *end;
		/* some */
		*end-- = *s;
		/* stuff */
		*s++ = tmp;
		/* around */
	}
}
