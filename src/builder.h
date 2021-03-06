#ifndef _MATRIX_BUILDER_H_
#define _MATRIX_BUILDER_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "matrix.h"
#include "net.h"

#define MAXLINELEN 256

/* 
 *
 */
data_set* data_set_from_csv (FILE* fh); 


/*
 *
 */
int free_data_set(data_set* data);

/*
 *
 */
int load_net (net* n, FILE* fh);


/*
 *
 */
int save_net (net* n, FILE* fh);


#endif
