#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(ft_calloc_test);

TEST_SETUP(ft_calloc_test)
{
}

TEST_TEAR_DOWN(ft_calloc_test)
{
}

TEST(ft_calloc_test, should_be_equal_empty_array)
{
	int		expected[5];
	size_t	n;

	for (size_t i = 0; i < 5; i++)
		expected[i] = 0;
	n = 5;
	TEST_ASSERT_EQUAL_INT_ARRAY(ft_calloc(n, sizeof(int)), expected, n);
}
