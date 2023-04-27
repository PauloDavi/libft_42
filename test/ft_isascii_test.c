#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(ft_isascii_test);

TEST_SETUP(ft_isascii_test)
{
}

TEST_TEAR_DOWN(ft_isascii_test)
{
}

TEST(ft_isascii_test, should_return_0_when_is_not_ascii_character)
{
	TEST_ASSERT_EQUAL_INT(ft_isascii(128), 0);
	TEST_ASSERT_EQUAL_INT(ft_isascii(-1), 0);
}

TEST(ft_isascii_test, should_return_1_when_is_ascii_character)
{
	TEST_ASSERT_EQUAL_INT(ft_isascii(0), 1);
	TEST_ASSERT_EQUAL_INT(ft_isascii(127), 1);
	TEST_ASSERT_EQUAL_INT(ft_isascii('a'), 1);
	TEST_ASSERT_EQUAL_INT(ft_isascii('D'), 1);
}
