#include <stdio.h>
#include <string.h>
int main(void)
{
    /*
     * Fill memory immediately before and after the target array with
     * 'x' and 'y' characters.  There is no guarantee that this will do
     * anything meaningful.
     */
    char before[5] = "xxxxx";
    char target[5];
    char after[5] = "yyyyy";
    char source[] = "hello, world";

    /*
     * This strncpy() call copies 5 bytes ('h', 'e', 'l', 'l', 'o')
     * in to the target array.  It does *not* copy a terminating null
     * character.
     */
    strncpy(target, source, 5);
    /*
     * Now the target array contains 5 non-null characters, and nothing
     * else.  That's perfectly valid, but due to the lack of a terminating
     * null character, the target array does *not* contain a string.
     */

    /*
     * WARNING: The following statement's behavior is undefined.
     * Since printf with a "%s" format assumes that the corresponding
     * argument points to a string, it will search for a terminating
     * null character until it finds one -- or until something goes horribly
     * wrong.
     */
    printf("target = \"%s\"\n", target);
    return 0;
}
