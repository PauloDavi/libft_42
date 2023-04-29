#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(ft_strlen_test);

TEST_SETUP(ft_strlen_test)
{
}

TEST_TEAR_DOWN(ft_strlen_test)
{
}

TEST(ft_strlen_test, should_return_correct_string_lenght)
{
	char	*str;

	str = ft_strdup("Hello, world!");
	TEST_ASSERT_EQUAL(ft_strlen(str), 13);
}
