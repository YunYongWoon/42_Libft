#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

// char check_alpha(unsigned int idx, char c)
// {
// 	if(isalpha(c))
// 		return '0' + idx;
// 	else
// 		return '-';
// }

// void print(unsigned int idx, char *c)
// {
// 	ft_putchar_fd(*c, 1);
// 	idx++;
// }

int	main(void)
{
// 	int		def;
// 	int		result;
// 	char	c;

// 	c = 120;
	
// // is_alpha
// 	def = isalpha(c);
// 	result = ft_isalpha(c);
// 	printf("isalpha => def : %d, result : %d\n", def, result);
	
// // is_digit
// 	def = isdigit(c);
// 	result = ft_isdigit(c);
// 	printf("isdigit => def : %d, result : %d\n", def, result);
	
// // is_alnum
// 	def = isalnum(c);
// 	result = ft_isalnum(c);
// 	printf("isalnum => def : %d, result : %d\n", def, result);
	
// // is_ascii
// 	def = isascii(c);
// 	result = ft_isascii(c);
// 	printf("isascii => def : %d, result : %d\n", def, result);
	
// // is_print
// 	def = isprint(c);
// 	result = ft_isprint(c);
// 	printf("isprint => def : %d, result : %d\n", def, result);
	// printf("strlcat test\n");
	// char dest[30] = "rrrr";
	// char dest2[30] = "rrrr";
	// char *src = "";
	// int test = 8;

	// printf("dest = %s\tsrc = %s\n\n", dest, src);
	// size_t ret = ft_strlcat(dest, src, test);
	// printf("dest = %s\treturn = %zu\n\n", dest, ret);
	// printf("try size 7\n");
	// printf("-----------<end of file>-------------");
	// printf("dest = %s\tsrc = %s\n\n", dest2, src);
	// ret = strlcat(dest2, src, test);
	// printf("dest = %s\treturn = %zu\n\n", dest2, ret);
	// printf("try size 7\n");
	
// // strlen
// 	char	*str;
// 	str = "Hello, World!";
// 	def = strlen(str);
// 	result = ft_strlen(str);
// 	printf("strlen  => def : %u, result : %u\n", def, result);
	
// // memset
// 	char	memset_arr[10] = "memset_str";
// 	printf("memset test\n");
// 	printf("before  => ");
// 	for(int i = 0; i < 10; i++)
// 		printf("%c", memset_arr[i]);
// 	printf("\n");
// 	ft_memset(memset_arr, 'c', 5);
// 	printf("after   => ");
// 	for(int i = 0; i < 10; i++)
// 		printf("%c", memset_arr[i]);
// 	printf("\n");
	
// // bzero
// 	char	bzero_arr[10] = "0123456789";
// 	printf("bzero test\n");
// 	printf("before  => "); 
// 	for (int i = 0; i < 10; i++)
// 		printf("%d", bzero_arr[i]);
// 	printf("\n");
// 	ft_bzero(bzero_arr, sizeof(bzero_arr));
// 	printf("after   => "); 
// 	for (int i = 0; i < 10; i++)
// 		printf("%d", bzero_arr[i]);
// 	printf("\n");
	
// // memcpy
// 	char	*memcpy_src = "0123456789";
// 	char	memcpy_dst[10];
// 	printf("memcpy test\n");
// 	printf("src     => "); 
// 	for (int i = 0; i < 10; i++)
// 		printf("%c", memcpy_src[i]);
// 	printf("\n");
// 	ft_memcpy(memcpy_dst, memcpy_src, 6);
// 	printf("dst     => "); 
// 	for (int i = 0; i < 10; i++)
// 		printf("%c", memcpy_dst[i]);
// 	printf("\n");
	
// // memmove
// 	char	*memmove_src = "0123456789";
// 	char	memmove_dst[10];
// 	printf("memmove test\n");
// 	printf("src     => "); 
// 	for (int i = 0; i < 10; i++)
// 		printf("%c", memmove_src[i]);
// 	printf("\n");
// 	ft_memcpy(memmove_dst, memmove_src, 10);
// 	printf("dst     => "); 
// 	for (int i = 0; i < 10; i++)
// 		printf("%c", memmove_dst[i]);
// 	printf("\n");
	
// //toupper
// 	printf("toupper : %c\n", ft_toupper('c'));
	
// //tolower
// 	printf("tolower : %c\n", ft_tolower('D'));
	
// //strchr
// 	char *strchr_str = "BlockDMask Blog is good";
//     char *strchr_ptr = ft_strchr(strchr_str, 'o');
//     printf("strchr test\n");
//     while(strchr_ptr != NULL) 
//     {
//         printf("찾는 문자 : %c, 찾은 문자열 : %s\n", *strchr_ptr, strchr_ptr);
//         strchr_ptr = ft_strchr(strchr_ptr + 1, 'o');
// 	}
	
// //strrchr
// 	char *strrchr_str = "BlockDMask Blog is good";
//     char *strrchr_ptr = ft_strrchr(strrchr_str, 'o');
//     printf("strrchr test\n");
//     printf("찾는 문자 : %c, 찾은 문자열 : %s\n", *strrchr_ptr, strrchr_ptr);
	
// //strncmp
// 	char *strncmp_s1 = "asdf asdf";
// 	char *strncmp_s2 = "asdf bsdf";
// 	printf("strncmp test\n");
// 	printf("예상결과 : 0 => %d\n", ft_strncmp(strncmp_s1, strncmp_s2, 3));
// 	printf("예상결과 : 1 => %d\n", ft_strncmp(strncmp_s2, strncmp_s1, 6));
// 	printf("예상결과 : -1 => %d\n", ft_strncmp(strncmp_s1, strncmp_s2, 9));
	
// //memchr
// 	char *memchr_str = "BlockDMask Blog is good";
//     char *memchr_ptr = ft_memchr(memchr_str, 'o', 23);
//     printf("memchr test\n");
//     printf("찾는 문자 : %c, 찾은 문자열 : %s\n", *memchr_ptr, memchr_ptr);
	
// //memcmp
// 	char *memcmp_s1 = "asdf asdf";
// 	char *memcmp_s2 = "asdf csdf";
// 	printf("memcmp test\n");
// 	printf("예상결과 : 0 => %d, %d\n", memcmp(memcmp_s1, memcmp_s2, 3), ft_memcmp(memcmp_s1, memcmp_s2, 3));
// 	printf("예상결과 : 2 => %d, %d\n", memcmp(memcmp_s2, memcmp_s1, 6), ft_memcmp(memcmp_s2, memcmp_s1, 6));
// 	printf("예상결과 : -2 => %d, %d\n", memcmp(memcmp_s1, memcmp_s2, 9), ft_memcmp(memcmp_s1, memcmp_s2, 9));
	
// //strnstr
// 	char *strnstr_str = "BlockDMask Blog is good";
//     char *strnstr_ptr = ft_strnstr(strnstr_str, "BlockDMask Blog is good", 23);
//     printf("strnstr test\n");
//     printf("찾은 문자열 : %s\n", strnstr_ptr);

	// char *atoi_num = "  19221233372036854775807";
	// int atoi_output = atoi(atoi_num);
	// int ft_atoi_output = ft_atoi(atoi_num);
	// printf("atoi    : %d\n", atoi_output);
	// printf("ft_atoi : %d\n", ft_atoi_output);
	
// //calloc
// 	char *point = (char *)ft_calloc(3, sizeof(char));
//     printf("calloc test\n");
// 	printf("%d %d %d\n", point[0], point[1], point[2]);
// 	point = (char *)ft_memset(point, 65, 3);
// 	printf("%d %d %d\n", point[0], point[1], point[2]);
// 	free(point);
	
// //strdup
// 	char *strdup_s1 = "asdf asdf";
// 	char *strdup_s2 = ft_strdup(strdup_s1);
// 	printf("strdup test\n");
// 	printf("%s => %s\n", strdup_s1, strdup_s2);
// 	free(strdup_s2);
	
	
// //substr
// 	char *substr_s1 = "asdf asdf";
// 	char *substr_s2 = ft_substr(substr_s1, 1, 6);
// 	printf("substr test\n");
// 	printf("%s => %s\n", substr_s1, substr_s2);
// 	free(substr_s2);
	
	
// //strjoin
// 	char *strjoin_s1 = "HELLO, ";
// 	char *strjoin_s2 = "World!!";
// 	char *strjoin_result = ft_strjoin(strjoin_s1, strjoin_s2);
// 	printf("strjoin test\n");
// 	printf("%s\n", strjoin_result);
// 	free(strjoin_result);
	
	
//strtrim
	char *strtrim_s1 = "";
	char *strtrim_s2 = "1a2";
	char *strtrim_result = ft_strtrim(strtrim_s1, strtrim_s2);
	printf("strtrim test\n");
	printf("%s\n", strtrim_result);
	free(strtrim_result);
	
	
// //split
// 	int idx = 0;
// 	char *split_test = "  asdf  asdf  asdffdsa  fdsa  ";
// 	char delimiter = ' ';
// 	char **split_result = ft_split(split_test, delimiter);
// 	printf("split test\n");
// 	while (split_result[idx])
// 	{
// 		printf("%s\n", split_result[idx]);
// 		free(split_result[idx]);
// 		idx++;
// 	}
// 	free(split_result);
	
	
// //itoa
// 	printf("itoa test\n");
// 	int itoa_num = 0;
// 	char *ft_itoa_arr = ft_itoa(itoa_num);
// 	if (ft_itoa_arr)
// 	{
// 		printf("ft_itoa : %s\n", ft_itoa_arr);
// 		free(ft_itoa_arr);
// 	}
	
	
// //strmapi
// 	printf("strmapi test\n");
// 	char	*strmapi_str = "123abc345";
// 	char	*strmapi_result;
// 	char (*f)(unsigned int, char) = check_alpha;
// 	strmapi_result = ft_strmapi(strmapi_str, f);
// 	printf("%s => %s\n", strmapi_str, strmapi_result);
// 	free(strmapi_result);


// //striteri
// 	printf("striteri test\n");
// 	char	*striteri_str = "123abc345";
// 	printf("%s => ", striteri_str);
// 	void (*ff)(unsigned int, char *) = print;
// 	ft_striteri(striteri_str, ff);
// 	printf("\n");

	
// //putchar
// 	char putc = 'a';
// 	printf("ft_putchar_fd\n");
// 	ft_putchar_fd(putc, 1);
// 	printf("\n");

	
// //putstr
// 	printf("ft_putstr_fd\n");
// 	char *puts = "test code";
// 	ft_putstr_fd(puts, 1);
// 	printf("\n");

	
// //putendl
// 	printf("ft_putendl_fd\n");
// 	ft_putendl_fd(puts, 1);
	
	
// //putnbr
// 	printf("ft_putnbr_fd\n");
// 	ft_putnbr_fd(-2147483648, 1);
// 	printf("\n");
// 	ft_putnbr_fd(-10, 1);
// 	printf("\n");
// 	ft_putnbr_fd(-1, 1);
// 	printf("\n");
// 	ft_putnbr_fd(0, 1);
// 	printf("\n");
// 	ft_putnbr_fd(1, 1);
// 	printf("\n");
// 	ft_putnbr_fd(10, 1);
// 	printf("\n");
// 	ft_putnbr_fd(2147483647, 1);
// 	printf("\n");
// 	return (0);
}
