#include "git-compat-util.h"
#include "common-init.h"
#include "thread-utils.h"

int main(int argc, const char **argv)
{
	int result;

	init_thread_utils();
	init_git(argv);
	result = cmd_main(argc, argv);

	/* Not exit(3), but a wrapper calling our common_exit() */
	exit(result);
}
