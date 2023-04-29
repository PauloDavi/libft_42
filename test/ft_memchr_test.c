#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(ft_memchr_test);

TEST_SETUP(ft_memchr_test)
{
}

TEST_TEAR_DOWN(ft_memchr_test)
{
}

TEST(ft_memchr_test, should_return_pointer_when_str_has_char)
{
	char	*str;
	char	*ptr;

	str = (char *)ft_strdup("Hello, World!");
	ptr = (char *)ft_memchr(str, 'W', ft_strlen(str));
	TEST_ASSERT_EQUAL_PTR((str + sizeof(char) * 7), ptr);
	TEST_ASSERT_NOT_NULL(ptr);
}

TEST(ft_memchr_test, should_return_null_when_str_not_has_char)
{
	char	*str;
	char	*ptr;

	str = (char *)ft_strdup("Hello, World!");
	ptr = (char *)ft_memchr(str, 'z', ft_strlen(str));
	TEST_ASSERT_NULL(ptr);
}
