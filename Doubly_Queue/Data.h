#ifndef __Data_H__
#define __Data_H__

typedef struct _Queue {
	int nData;
	struct _Queue *L_Link;
	struct _Queue *R_Link;
}Queue;

#endif

#define TRUE 1
#define FALSE 0
#define FAIL -1


