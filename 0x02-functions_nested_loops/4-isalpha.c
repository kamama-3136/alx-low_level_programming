#include "main.h"


/**
* _isalpha - check if char is alphabetic
* @c: is the char to be checked
* Return: 1 if char is lowercase, otherwise 0.
*/


int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
