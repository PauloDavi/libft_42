#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(ft_atoi_test);

TEST_SETUP(ft_atoi_test)
{
}

TEST_TEAR_DOWN(ft_atoi_test)
{
}

TEST(ft_atoi_test, should_return_int_max)
{
	char	*str;

	str = ft_strdup(" \t\n 2147483647");
	TEST_ASSERT_EQUAL_INT(ft_atoi(str), atoi(str));
}

TEST(ft_atoi_test, should_return_int_min)
{
	char	*str;

	str = ft_strdup("  -2147483648");
	TEST_ASSERT_EQUAL_INT(ft_atoi(str), atoi(str));
}

TEST(ft_atoi_test, should_return_zero_for_invalid_number)
{
	char	*str;

	str = ft_strdup("batata");
	TEST_ASSERT_EQUAL_INT(ft_atoi(str), atoi(str));
}
