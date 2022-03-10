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
    char *strchr_ptr = ft_strchr(strchr_str, 'o');
    printf("strchr test\n");
    while(strchr_ptr != NULL) 
    {
        printf("찾는 문자 : %c, 찾은 문자열 : %s\n", *strchr_ptr, strchr_ptr);
        strchr_ptr = ft_strchr(strchr_ptr + 1, 'o');
	}
	//strrchr
	char *strrchr_str = "BlockDMask Blog is good";
    char *strrchr_ptr = ft_strrchr(strrchr_str, 'o');
    printf("strrchr test\n");
    printf("찾는 문자 : %c, 찾은 문자열 : %s\n", *strrchr_ptr, strrchr_ptr);
	//strncmp
	char *strncmp_s1 = "asdf asdf";
	char *strncmp_s2 = "asdf bsdf";
	printf("strncmp test\n");
	printf("예상결과 : 0 => %d\n", ft_strncmp(strncmp_s1, strncmp_s2, 3));
	printf("예상결과 : 1 => %d\n", ft_strncmp(strncmp_s2, strncmp_s1, 6));
	printf("예상결과 : -1 => %d\n", ft_strncmp(strncmp_s1, strncmp_s2, 9));
	//memchr
	char *memchr_str = "BlockDMask Blog is good";
    char *memchr_ptr = ft_memchr(memchr_str, 'o', 23);
    printf("memchr test\n");
    printf("찾는 문자 : %c, 찾은 문자열 : %s\n", *memchr_ptr, memchr_ptr);
	//memcmp
	char *memcmp_s1 = "asdf asdf";
	char *memcmp_s2 = "asdf csdf";
	printf("memcmp test\n");
	printf("예상결과 : 0 => %d, %d\n", memcmp(memcmp_s1, memcmp_s2, 3), ft_memcmp(memcmp_s1, memcmp_s2, 3));
	printf("예상결과 : 2 => %d, %d\n", memcmp(memcmp_s2, memcmp_s1, 6), ft_memcmp(memcmp_s2, memcmp_s1, 6));
	printf("예상결과 : -2 => %d, %d\n", memcmp(memcmp_s1, memcmp_s2, 9), ft_memcmp(memcmp_s1, memcmp_s2, 9));
	//strnstr
	char *strnstr_str = "BlockDMask Blog is good";
    char *strnstr_ptr = ft_strnstr(strnstr_str, "Blog", 23);
    printf("strnstr test\n");
    printf("찾은 문자열 : %s\n", strnstr_ptr);
	char *atoi_num = "  19221233372036854775807";
	int atoi_output = atoi(atoi_num);
	int ft_atoi_output = ft_atoi(atoi_num);
	printf("atoi    : %d\n", atoi_output);
	printf("ft_atoi : %d\n", ft_atoi_output);
	//calloc
	char *point = (char *)calloc(3, sizeof(char));
    printf("calloc test\n");
	printf("%d %d %d\n", point[0], point[1], point[2]);
	point = (char *)ft_memset(point, 65, 3);
	printf("%d %d %d\n", point[0], point[1], point[2]);
	free(point);
	//strdup
	char *strdup_s1 = "asdf asdf";
	char *strdup_s2 = ft_strdup(strdup_s1);
	printf("strdup test\n");
	printf("%s => %s\n", strdup_s1, strdup_s2);
	free(strdup_s2);
	//substr
	char *substr_s1 = "asdf asdf";
	char *substr_s2 = ft_substr(substr_s1, 1, 6);
	printf("substr test\n");
	printf("%s => %s\n", substr_s1, substr_s2);
	free(substr_s2);
	//strjoin
	char *strjoin_s1 = "HELLO, ";
	char *strjoin_s2 = "World!!";
	char *strjoin_result = ft_strjoin(strjoin_s1, strjoin_s2);
	printf("strjoin test\n");
	printf("%s\n", strjoin_result);
	free(strjoin_result);
	//strtrim
	char *strtrim_s1 = "1a2b3c2b1a";
	char *strtrim_s2 = "1a2";
	char *strtrim_result = ft_strtrim(strtrim_s1, strtrim_s2);
	printf("strtrim test\n");
	printf("%s\n", strtrim_result);
	free(strtrim_result);
	//split
	int idx = 0;
	char *split_test = "  asdf  asdf  asdffdsa  fdsa  ";
	char delimiter = ' ';
	char **split_result = ft_split(split_test, delimiter);
	printf("split test\n");
	while (split_result[idx])
	{
		printf("%s\n", split_result[idx]);
		free(split_result[idx]);
		idx++;
	}
	free(split_result);
	//itoa
	int itoa_num = 2483647;
	char *itoa_arr = ft_itoa(itoa_num);
	printf("itoa : %d = %s\n", itoa_num, itoa_arr);
	return (0);
}
