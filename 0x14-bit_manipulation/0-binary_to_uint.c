#include <stddef.h>
#include "main.h"

/*@b is pointing to 0 and 1
 *Return: the converted number, or 0 if there is one or more chars in the string b that is not 0 or 1 b is NULL
*/

unsigned int binary_to_uint(const char *b) {
    	if (b == NULL)
        return 0;
	int = i;
   	unsigned int count = 0;

    	for (int i = 0; b[i] != '\0'; i++) {
        	if (b[i] != '0' && b[i] != '1')
            return 0;

        count = count * 2 + (b[i] - '0');
    	}	

    	return count;
}