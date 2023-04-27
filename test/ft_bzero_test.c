#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(ft_bzero_test);

TEST_SETUP(ft_bzero_test)
{
}

TEST_TEAR_DOWN(ft_bzero_test)
{
}

TEST(ft_bzero_test, should_be_equal_empty_array)
{
	char	*array;
	char	expected[5];
	size_t	n;

	for (size_t i = 0; i < 5; i++)
		expected[i] = 0;
	n = 5;
	array = malloc(n);
	ft_bzero(array, n);
	TEST_ASSERT_EQUAL_HEX8_ARRAY(array, expected, n);
}
