# printf
A basic printf program
----------------------------

## Functions

[_printf.c](../master/printf.c)
```c
/* _printf - function that produces output according to format. */
int _printf(const char *format, ...);
```

[conversion.c](../master/conversion.c)
```c
/* conv - passes to case function based on conversion specifiers. */
int conv(va_list args, char position, int dircnt);
```

[c_case](../master/c_case.c)
```c
/* c_case - handle character conversion specifiers. */
void c_case(va_list args);
```

[s_case](../master/s_case.c)
```c
/* s_case - handle string conversion specifiers. */
int s_case(va_list args, int dircnt);
```

[d_case](../master/d_case.c)
```c
/* d_case - handle integer conversion specifiers */
int d_case(va_list args);
```

[i_case](../master/i_case.c)
```c
/* i_case - handle integer conversion specifiers. */
int i_case(va_list args);
```

[putchr](../master/putchar.c)
```c
/* _putchar - function that writes characters to stdout. */
int putchr(char c);
```

[putstr](../master/print_str.c)
```c
/* print_str - writes a string to stdout. */
int putstr(char *str);
```

[putint](../master/print_int.c)
```c
/* print_int - function that prints numbers to stdout. */
int putint(int n);
```
