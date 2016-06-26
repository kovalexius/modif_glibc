#include <string.h>
#include <string>
#include <vector>

/* Define our magic string to mark salt for MD5 "encryption"
   replacement.  This is meant to be the same as for other MD5 based
   encryption implementations.  */
static const char simple_salt_prefix[] = "$ba$";


/* Prototypes for local functions.  */
extern char *__simple_crypt_r (const char *key, const char *salt, char *buffer, int buflen);

extern char *__simple_crypt (const char *key, const char *salt);

char *__simple_crypt_r (const char *key, const char *salt, char *buffer, int buflen)
{
    int len = MIN(strlen(key), strlen(salt));
}

#ifndef _LIBC
# define libc_freeres_ptr(decl) decl
#endif
libc_freeres_ptr (static char *buffer);

char *__simple_crypt(const char *key, const char *salt)
{
    static int buflen;
    int needed = strlen (salt);
    
    if( buflen < needed )
    {
        char *new_buffer = (char *) realloc (buffer, needed);
        if (new_buffer == NULL)
            return NULL;

        buffer = new_buffer;
        buflen = needed;
    }
    
    return __simple_crypt_r (key, salt, buffer, buflen);
}