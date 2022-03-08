#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include "../includes/libft.h"

int	main(void)
{
	int		def;
	int		result;
	char	c;

	c = 120;
	// is_alpha
	def = isalpha(c);
	result = ft_isalpha(c);
	printf("isalpha => def : %d, result : %d\n", def, result);
	// is_digit
	def = isdigit(c);
	result = ft_isdigit(c);
	printf("isdigit => def : %d, result : %d\n", def, result);
	// is_alnum
	def = isalnum(c);
	result = ft_isalnum(c);
	printf("isalnum => def : %d, result : %d\n", def, result);
	// is_ascii
	def = isascii(c);
	result = ft_isascii(c);
	printf("isascii => def : %d, result : %d\n", def, result);
	// is_print
	def = isprint(c);
	result = ft_isprint(c);
	printf("isprint => def : %d, result : %d\n", def, result);
	// strlen
	char	*str;
	str = "Hello, World!";
	def = strlen(str);
	result = ft_strlen(str);
	printf("strlen  => def : %u, result : %u\n", def, result);
	// memset
	char	*memset_arr = "memset_str";
	printf("memset test\n");
	printf("before  => "); 
	for (int i = 0; i < 10; i++)
		printf("%c", memset_arr[i]);
	printf("\n");
	ft_memset(memset_arr, 'c', sizeof(memset_arr));
	printf("after   => ");
	for (int i = 0; i < 10; i++)
		printf("%c", memset_arr[i]);
	printf("\n");
	// bzero
	char	bzero_arr[10] = "0123456789";
	printf("bzero test\n");
	printf("before  => "); 
	for (int i = 0; i < 10; i++)
		printf("%d", bzero_arr[i]);
	printf("\n");
	ft_bzero(bzero_arr, sizeof(bzero_arr));
	printf("after   => "); 
	for (int i = 0; i < 10; i++)
		printf("%d", bzero_arr[i]);
	printf("\n");
	// memcpy
	char	memcpy_src[10] = "0123456789";
	char	memcpy_dst[10];
	printf("memcpy test\n");
	printf("src     => "); 
	for (int i = 0; i < 10; i++)
		printf("%c", memcpy_src[i]);
	printf("\n");
	ft_memcpy(memcpy_dst, memcpy_src, sizeof(memcpy_src));
	printf("dst     => "); 
	for (int i = 0; i < 10; i++)
		printf("%c", memcpy_dst[i]);
	printf("\n");
	return (0);
}
