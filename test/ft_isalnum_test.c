#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(ft_isalnum_test);

TEST_SETUP(ft_isalnum_test)
{
}

TEST_TEAR_DOWN(ft_isalnum_test)
{
}

TEST(ft_isalnum_test, should_return_0_when_is_not_lnum_character)
{
	TEST_ASSERT_EQUAL_INT(ft_isalnum('*'), 0);
	TEST_ASSERT_EQUAL_INT(ft_isalnum('*'), 0);
}

TEST(ft_isalnum_test, should_return_1_when_is_lnum_character)
{
	TEST_ASSERT_EQUAL_INT(ft_isalnum('a'), 1);
	TEST_ASSERT_EQUAL_INT(ft_isalnum('F'), 1);
	TEST_ASSERT_EQUAL_INT(ft_isalnum('8'), 1);
}
