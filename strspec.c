/**
 * print_s - Prints a string
 * @ty: Types of arguments
 * @buf: Buffer array to prints character
 * @fl: Flags
 * @wi: Width.
 * @pre: Precision
 * @s: size
 * Return: Chars
 */
int print_s(ty, char buf[], int fl, int wi, int pre, int s)
{
int len = 0, i;
char *string = va_argument(ty, char *);

UNUSED(buf);
UNUSED(fl);
UNUSED(wi);
UNUSED(pre);
UNUSED(si);
if (str == NULL)
{
string = "(null)";
if (pre >= 6)
string = "      ";
}

while (string[len] != '\0')
len++;

if (pre >= 0 && pre < len)
len = pre;

if (wi > len)
{
if (flags & F_MINUS)
{
write(1, &str[0], length);
for (i = wi - len; i > 0; i--)
write(1, " ", 1);
return (width);
}
else
{
for (i = wi - len; i > 0; i--)
write(1, " ", 1);
write(1, &string[0], len);
return (wi);
}
}

return (write(1, string, len));
}

