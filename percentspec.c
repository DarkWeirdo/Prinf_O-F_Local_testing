/**
 * print_percent - Prints a percentage
 * @ty: Types of arguments
 * @buf: Buffer array to prints character
 * @fl: Flags
 * @wi: Width.
 * @pre: Precision
 * @s: size
 * Return: Chars
 */
int print_percent(ty, char buf[], int fl, int wi, int pre, int s)
{
UNUSED(ty);
UNUSED(buf);
UNUSED(fl);
UNUSED(wi);
UNUSED(pre);
UNUSED(s);
return (write(1, "%%", 1));
}

