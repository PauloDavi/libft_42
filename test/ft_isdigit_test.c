#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(ft_isdigit_test);

TEST_SETUP(ft_isdigit_test)
{
}

TEST_TEAR_DOWN(ft_isdigit_test)
{
}

TEST(ft_isdigit_test, should_return_0_when_is_not_digit_character)
{
	TEST_ASSERT_EQUAL_INT(ft_isdigit('0' - 1), 0);
	TEST_ASSERT_EQUAL_INT(ft_isdigit('9' + 1), 0);
}

TEST(ft_isdigit_test, should_return_1_when_is_digit_character)
{
	TEST_ASSERT_EQUAL_INT(ft_isdigit('0'), 1);
	TEST_ASSERT_EQUAL_INT(ft_isdigit('9'), 1);
}
