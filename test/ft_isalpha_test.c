#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(ft_isalpha_test);

TEST_SETUP(ft_isalpha_test)
{
}

TEST_TEAR_DOWN(ft_isalpha_test)
{
}

TEST(ft_isalpha_test, should_return_0_when_is_not_alpha_character)
{
	TEST_ASSERT_EQUAL_INT(ft_isalpha('*'), 0);
}

TEST(ft_isalpha_test, should_return_1_when_is_alpha_character)
{
	TEST_ASSERT_EQUAL_INT(ft_isalpha('a'), 1);
}
