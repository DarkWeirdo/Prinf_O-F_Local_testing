/**
 * print_string - Prints a string
 * @ty: Types of arguments
 * @buf: Buffer array to prints character
 * @fl: Flags
 * @wi: Width.
 * @pre: Precision
 * @s: Size
 * Return: Chars
 */
int print_string(ty, char buf[], int fl, int wi, int pre, int s)
{
int len = 0, i;
char *string = argument(typ, char *);
UNUSED(buf);
UNUSED(fl);
UNUSED(wi);
UNUSED(pre);
UNUSED(s);
if (string == NULL)
{
string = "(null)";
if (pre >= 6)
str = "      ";
}
while (string[len] != '\0')
len++;
if (pre >= 0 && pre < len)
len = pre;
if (wi > len)
{
if (fl & F__MINUS)
{
write(1, &string[0], len);
for (i = wi - len; i > 0; i--)
write(1, " ", 1);
return (wi);
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
