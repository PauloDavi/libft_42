#include "unity_fixture.h"

TEST_GROUP_RUNNER(ft_atoi_test)
{
	RUN_TEST_CASE(ft_atoi_test, should_return_int_max);
	RUN_TEST_CASE(ft_atoi_test, should_return_int_min);
	RUN_TEST_CASE(ft_atoi_test, should_return_zero_for_invalid_number);
}

TEST_GROUP_RUNNER(ft_isalpha_test)
{
	RUN_TEST_CASE(ft_isalpha_test, should_return_0_when_is_not_alpha_character);
	RUN_TEST_CASE(ft_isalpha_test, should_return_1_when_is_alpha_character);
}

TEST_GROUP_RUNNER(ft_bzero_test)
{
	RUN_TEST_CASE(ft_bzero_test, should_be_equal_empty_array);
}

TEST_GROUP_RUNNER(ft_calloc_test)
{
	RUN_TEST_CASE(ft_calloc_test, should_be_equal_empty_array);
}

static void	run_all_tests(void)
{
	RUN_TEST_GROUP(ft_atoi_test);
	RUN_TEST_GROUP(ft_isalpha_test);
	RUN_TEST_GROUP(ft_bzero_test);
	RUN_TEST_GROUP(ft_calloc_test);
}

int	main(int argc, const char *argv[])
{
	return (UnityMain(argc, argv, run_all_tests));
}
