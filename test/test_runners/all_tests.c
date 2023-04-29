#include "unity_fixture.h"

TEST_GROUP_RUNNER(ft_atoi_test)
{
	RUN_TEST_CASE(ft_atoi_test, should_return_int_max);
	RUN_TEST_CASE(ft_atoi_test, should_return_int_min);
	RUN_TEST_CASE(ft_atoi_test, should_return_zero_for_invalid_number);
}

TEST_GROUP_RUNNER(ft_bzero_test)
{
	RUN_TEST_CASE(ft_bzero_test, should_be_equal_empty_array);
}

TEST_GROUP_RUNNER(ft_calloc_test)
{
	RUN_TEST_CASE(ft_calloc_test, should_be_equal_empty_array);
}

TEST_GROUP_RUNNER(ft_isalnum_test)
{
	RUN_TEST_CASE(ft_isalnum_test, should_return_0_when_is_not_lnum_character);
	RUN_TEST_CASE(ft_isalnum_test, should_return_1_when_is_lnum_character);
}

TEST_GROUP_RUNNER(ft_isalpha_test)
{
	RUN_TEST_CASE(ft_isalpha_test, should_return_0_when_is_not_alpha_character);
	RUN_TEST_CASE(ft_isalpha_test, should_return_1_when_is_alpha_character);
}

TEST_GROUP_RUNNER(ft_isascii_test)
{
	RUN_TEST_CASE(ft_isascii_test, should_return_0_when_is_not_ascii_character);
	RUN_TEST_CASE(ft_isascii_test, should_return_1_when_is_ascii_character);
}

TEST_GROUP_RUNNER(ft_isdigit_test)
{
	RUN_TEST_CASE(ft_isdigit_test, should_return_0_when_is_not_digit_character);
	RUN_TEST_CASE(ft_isdigit_test, should_return_1_when_is_digit_character);
}

TEST_GROUP_RUNNER(ft_isprint_test)
{
	RUN_TEST_CASE(ft_isprint_test, should_return_0_when_is_not_print_character);
	RUN_TEST_CASE(ft_isprint_test, should_return_1_when_is_print_character);
}

TEST_GROUP_RUNNER(ft_memchr_test)
{
	RUN_TEST_CASE(ft_memchr_test, should_return_pointer_when_str_has_char);
	RUN_TEST_CASE(ft_memchr_test, should_return_null_when_str_not_has_char);
}

TEST_GROUP_RUNNER(ft_strdup_test)
{
	RUN_TEST_CASE(ft_strdup_test, should_test_all_possibilities_of_returns);
}

TEST_GROUP_RUNNER(ft_strnstr_test)
{
	RUN_TEST_CASE(ft_strnstr_test, should_find_sub_string);
	RUN_TEST_CASE(ft_strnstr_test, should_not_find_sub_string);
}

TEST_GROUP_RUNNER(ft_strlen_test)
{
	RUN_TEST_CASE(ft_strlen_test, should_return_correct_string_lenght);
}

static void	run_all_tests(void)
{
	RUN_TEST_GROUP(ft_atoi_test);
	RUN_TEST_GROUP(ft_bzero_test);
	RUN_TEST_GROUP(ft_calloc_test);
	RUN_TEST_GROUP(ft_isalnum_test);
	RUN_TEST_GROUP(ft_isalpha_test);
	RUN_TEST_GROUP(ft_isascii_test);
	RUN_TEST_GROUP(ft_isdigit_test);
	RUN_TEST_GROUP(ft_isprint_test);
	RUN_TEST_GROUP(ft_memchr_test);
	RUN_TEST_GROUP(ft_strdup_test);
	RUN_TEST_GROUP(ft_strnstr_test);
	RUN_TEST_GROUP(ft_strlen_test);
}

int	main(int argc, const char *argv[])
{
	return (UnityMain(argc, argv, run_all_tests));
}
