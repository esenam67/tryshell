#include "main.h"
/**
 * _isalpha - check code
 * @c: in function description
 * Description: a function that checks for alphabetic character
 * Return:0 or 1
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
