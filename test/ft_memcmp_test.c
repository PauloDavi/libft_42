#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"
#include <string.h>

TEST_GROUP(ft_strdup_test);

TEST_SETUP(ft_strdup_test)
{
}

TEST_TEAR_DOWN(ft_strdup_test)
{
}

TEST(ft_strdup_test, should_test_all_possibilities_of_returns)
{
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	char	*str5;

	str1 = ft_strdup("Hello, World!");
	str2 = ft_strdup("Hello, World!");
	str3 = ft_strdup("Goodbye, World!");
	str4 = ft_strdup("Hello");
	str5 = ft_strdup("Hello, 42!");
	TEST_ASSERT_EQUAL_INT(memcmp(str1, str2, ft_strlen(str1)), ft_memcmp(str1,
				str2, ft_strlen(str1)));
	TEST_ASSERT_EQUAL_INT(memcmp(str1, str3, ft_strlen(str1)), ft_memcmp(str1,
				str3, ft_strlen(str1)));
	TEST_ASSERT_EQUAL_INT(memcmp(str1, str4, ft_strlen(str4)), ft_memcmp(str1,
				str4, ft_strlen(str4)));
	TEST_ASSERT_EQUAL_INT(memcmp(str1, str5, ft_strlen(str5)), ft_memcmp(str1,
				str5, ft_strlen(str5)));
}
