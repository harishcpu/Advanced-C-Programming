#ifndef COMMON_H
#define COMMON_H

#include "types.h"
/* Magic string to identify whether stegged or not */
#define MAGIC_STRING "#*"


/* Decoding function prototype */
Status decode(char *argv[]);

/* Encoding function prototype */
Status encode(char *argv[]);
#endif
