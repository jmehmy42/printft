/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy < jmehmy@student.42lisboa.com >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 12:50:01 by jmehmy            #+#    #+#             */
/*   Updated: 2024/12/07 16:38:57 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int main() {
    char e = 'A';
    char *s = "Hello, World!";
    void *p = (void *)0xDEADBEEF; // Example pointer
    unsigned int u = 4294967295 ;  // Max value for a 32-bit unsigned int
    int d = -2147483648;
    
    // Test cases for each specifier
    ft_printf("Character: %c\n", e);
    	printf("Character: %c\n", e);
    ft_printf("String: %s\n", s);
    	printf("String: %s\n", s);
    ft_printf("Pointer: %p\n", p);
    	printf("Pointer: %p\n", p);
    ft_printf("Unsigned int: %u\n", u);
    	printf("Unsigned int: %u\n", u);
    ft_printf("Hexadecimal (lowercase): %x\n", u);
    	printf("Hexadecimal (lowercase): %x\n", u);
    ft_printf("Hexadecimal (uppercase): %X\n", u);
    	printf("Hexadecimal (uppercase): %X\n", u);
    ft_printf("Signed int:  %  d\n", d);
    	printf("Signed int:  %  d\n", d);
    ft_printf("Signed int (as %i): %i\n", d, d);
    	printf("Signed int (as %i): %i\n", d, d);
    ft_printf("Percentage: %%\n");
    	printf("Percentage: %%\n");

    int len;
    int len2;
    unsigned int ui;
    void *addr;
    int a = 25;
    char c = 'b';

    ft_printf ( "%X\n", a);
    printf ( "%X\n", a);
	ft_printf("%p\n", &c);
    len = ft_printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    ft_printf("Length:[%d, %i]\n", len, len);
    	printf("Length:[%d, %i]\n", len2, len2);
    ft_printf("Negative:[%d]\n", -762534);
    	printf("Negative:[%d]\n", -762534);
    ft_printf("Unsigned:[%u]\n", ui);
    	printf("Unsigned:[%u]\n", ui);
    ft_printf("Unsigned octal:[%o]\n", ui);
    	printf("Unsigned octal:[%o]\n", ui);
    ft_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    ft_printf("Character:[%c]\n", 'H');
    	printf("Character:[%c]\n", 'H');
    ft_printf("String:[%s]\n", "I am a string !");
    	printf("String:[%s]\n", "I am a string !");
    ft_printf("Address:[%p]\n", addr);
    	printf("Address:[%p]\n", addr);
    len = ft_printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    ft_printf("Len:[%d]\n", len);
    	printf("Len:[%d]\n", len2);
    	
    char f = 'A';
    char str[] = "Hello, World!";
    int num = 42;
    unsigned int unum = 3000000000U;
    void *ptr1 = str;

    ft_printf("Character (%%c): %c\n", f);
    	printf("Character (%%c): %c\n", f);
    ft_printf("String (%%s): %s\n", str);
    	printf("String (%%s): %s\n", str);
    ft_printf("Pointer (%%p): %p\n", ptr1);
    	printf("Pointer (%%p): %p\n", ptr1);
    ft_printf("Signed Decimal (%%d): %d\n", num);
    	 printf("Signed Decimal (%%d): %d\n", num);
    ft_printf("Signed Integer (%%i): %i\n", num);
    	printf("Signed Integer (%%i): %i\n", num);
    ft_printf("Unsigned Integer (%%u): %u\n", unum);
    	 printf("Unsigned Integer (%%u): %u\n", unum);
    ft_printf("Hexadecimal (lowercase %%x): %x\n", unum);
    	printf("Hexadecimal (lowercase %%x): %x\n", unum);
    ft_printf("Hexadecimal (uppercase %%X): %X\n", unum);
    	printf("Hexadecimal (uppercase %%X): %X\n", unum);
    ft_printf("Percent Sign (%%%%): %%\n");
    	printf("Percent Sign (%%%%): %%\n");

    	
 	int result = 0;
	int result1 = 0;
	
	ft_printf("Integer: %d\n", 12345);
		printf("Integer: %d\n", 12345);
	ft_printf("Negative integer: %d\n", -6789);
		printf("Negative integer: %d\n", -6789);
	ft_printf("%d\n", 99);
		printf("%d\n", 99);
	ft_printf("Large integer: %d\n", 2147483647);
		printf("Large integer: %d\n", 2147483647);
	ft_printf("Small integer: %d\n", -2147483648);
		printf("Small integer: %ld\n", -2147483648);
	
	ft_printf("%d\n",ft_printf("%d\n",42));
		printf("%d\n",ft_printf("%d\n",42));

	ft_printf("%d\n", ft_printf(NULL));
		printf("%d\n", printf(NULL));
	char *ptr= NULL;
	ft_printf("%s\n", ptr);
		printf("%s\n", ptr);
	ft_printf("check here\n");
	ft_printf("Signed int:  %  d\n", d);
    		printf("Signed int:  %  d\n", d);
	ft_printf("int:%d\n", result1 = ft_printf("%    d", 25));
		printf("int:%d\n", result = printf("%    d", 25));
 return (0);
}

