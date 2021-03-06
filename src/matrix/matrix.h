#ifndef __MATRIX_H__
#define __MATRIX_H__
#include"../types.h"
typedef	struct	{
		unsigned int	m, n;
		float **me;	
} MAT;

MAT	*m_get(int m, int n);
MAT	*m_zero(MAT *A);
MAT	*m_mlt(const MAT *A, const MAT *B, MAT *OUT);
MAT *m_mlt_self_left(MAT *A, const MAT *B); 
MAT *m_get_ident(int m);
MAT *m_copy(MAT* A);
MAT *vec_to_mat(vec4_t vec);
void print_mat(MAT *obj);
void M_FREE(MAT* A);
#endif


