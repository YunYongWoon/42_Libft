#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

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
	char	memset_arr[10] = "memset_str";
	printf("memset test\n");
	printf("before  => ");
	for(int i = 0; i < 10; i++)
		printf("%c", memset_arr[i]);
	printf("\n");
	ft_memset(memset_arr, 'c', 5);
	printf("after   => ");
	for(int i = 0; i < 10; i++)
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
	char	*memcpy_src = "0123456789";
	char	memcpy_dst[10];
	printf("memcpy test\n");
	printf("src     => "); 
	for (int i = 0; i < 10; i++)
		printf("%c", memcpy_src[i]);
	printf("\n");
	ft_memcpy(memcpy_dst, memcpy_src, 6);
	printf("dst     => "); 
	for (int i = 0; i < 10; i++)
		printf("%c", memcpy_dst[i]);
	printf("\n");
	// memmove
	char	*memmove_src = "0123456789";
	char	memmove_dst[10];
	printf("memmove test\n");
	printf("src     => "); 
	for (int i = 0; i < 10; i++)
		printf("%c", memmove_src[i]);
	printf("\n");
	ft_memcpy(memmove_dst, memmove_src, 10);
	printf("dst     => "); 
	for (int i = 0; i < 10; i++)
		printf("%c", memmove_dst[i]);
	printf("\n");
	//toupper
	printf("toupper : %c\n", ft_toupper('c'));
	//tolower
	printf("tolower : %c\n", ft_tolower('D'));
	//strchr
	char *strchr_str = "BlockDMask Blog is good";
    char *strchr_ptr = strchr(strchr_str, 'o');
    printf("strchr test\n");
    while(strchr_ptr != NULL) 
    {
        printf("찾는 문자 : %c, 찾은 문자열 : %s\n", *strchr_ptr, strchr_ptr);
        strchr_ptr = strchr(strchr_ptr + 1, 'o');
	}
	//strrchr
	char *strrchr_str = "BlockDMask Blog is good";
    char *strrchr_ptr = strrchr(strrchr_str, 'o');
    printf("strrchr test\n");
    printf("찾는 문자 : %c, 찾은 문자열 : %s\n", *strrchr_ptr, strrchr_ptr);
	return (0);
}
