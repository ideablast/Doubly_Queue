#pragma once
#include"ALL.h"

#ifndef __FUNC_H__
#define __FUNC_H__

/*BASIC_QUEUE*/
Queue* Add_new_queue();
void L_enQueue(int item);
void R_enQueue(int item);
int L_deQueue();
int R_deQueue();
int IsEmpty();
int Count_Queue();

#endif

