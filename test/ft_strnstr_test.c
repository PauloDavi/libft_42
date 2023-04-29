#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(ft_strnstr_test);

TEST_SETUP(ft_strnstr_test)
{
}

TEST_TEAR_DOWN(ft_strnstr_test)
{
}

TEST(ft_strnstr_test, should_find_sub_string)
{
	char	*big;
	char	*little;
	char	*result;

	little = ft_strdup("wor");
	big = ft_strdup("Hello world!");
	result = ft_strnstr(big, little, ft_strlen(big));
	TEST_ASSERT_EQUAL_STRING("world!", result);
}

TEST(ft_strnstr_test, should_not_find_sub_string)
{
	char	*big;
	char	*little;
	char	*result;

	little = ft_strdup("wor");
	big = ft_strdup("Hello world!");
	result = ft_strnstr(big, little, 8);
	TEST_ASSERT_NULL(result);
}
