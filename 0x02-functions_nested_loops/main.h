#include <unistd.h>



/**
 *
 * _putchar function prints _putchar
 *
 *return 0 upon success
 */

int _putchar(char)

{

	write(1, "_putchar\n", 8);
	
	return(0);
}
