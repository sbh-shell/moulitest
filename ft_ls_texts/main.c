#include <testframework.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <unistd.h>
#include <malloc/malloc.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>

<TEST_DEF_BLOCK>

int	main(void)
{
<MAIN_TEST_BLOCK>

	UT_RUN_ALL_TESTS();
	return (0);
}
