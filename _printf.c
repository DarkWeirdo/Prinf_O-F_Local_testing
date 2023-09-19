#include "maintest.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _printf - a custom printing function with proper formatting.
 * @format: specifier to print arguments using specific formats.
 * Return: returnes no of characters.
 */
int _printf(const char *format, ...)
{
    int NChars = 0;
    va_list list_args;
    if (format == NULL)
        return (-1);
    va_start(list_args, format);
    while (*format)
    {
        if (*format != '%')
        {
            _putchar(*format + '0');
            NChars++;
        }
        else
        {
            format++;
            if (*format == '\0')
            {
                break;
            }
            NChars += FormSpec(*format, list_args);
        }
        NChars++;
    }
    va_end(list_args);
    return (NChars);
}
