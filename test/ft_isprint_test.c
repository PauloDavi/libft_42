#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(ft_isprint_test);

TEST_SETUP(ft_isprint_test)
{
}

TEST_TEAR_DOWN(ft_isprint_test)
{
}

TEST(ft_isprint_test, should_return_0_when_is_not_print_character)
{
	TEST_ASSERT_EQUAL_INT(ft_isprint(31), 0);
	TEST_ASSERT_EQUAL_INT(ft_isprint(127), 0);
}

TEST(ft_isprint_test, should_return_1_when_is_print_character)
{
	TEST_ASSERT_EQUAL_INT(ft_isprint('0'), 1);
	TEST_ASSERT_EQUAL_INT(ft_isprint('D'), 1);
	TEST_ASSERT_EQUAL_INT(ft_isprint('*'), 1);
}
