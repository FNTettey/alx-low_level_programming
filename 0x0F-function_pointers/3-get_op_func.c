#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - searchs for an integer
 *@s:string
 *
 * Return: no return
 */
int (*get_op_func(char *s))(int a, int b)
{
op_t ops[] = {{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
i = 0;
while (i < 5)
{
if (s[0] == ops[i].op[0])
{
return ((ops[i].f));
break;
}
i++;
}
if (i == 5)
{
printf("Error\n");
exit(99);
}
return (NULL);
}

