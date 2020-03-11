#include"ALL.h"

extern Queue *front;
extern Queue *rear;

Queue* Add_new_queue()
{
	Queue *temp = (Queue*)malloc(sizeof(Queue));
	temp->nData = 0;
	temp->L_Link = NULL;
	temp->R_Link = NULL;

	return temp;
}

//front, rear의 링크중 L_Link만 사용
void L_enQueue(int item)//front로 추가된다.
{
	Queue *temp = Add_new_queue();
	temp->nData = item;

	if (front->L_Link == NULL)
	{
		front->L_Link = temp;
		rear->L_Link = temp;
	}

	else
	{
		front->L_Link->L_Link = temp;
		temp->R_Link = front->L_Link;
		front->L_Link = temp;

	}

}

void R_enQueue(int item)//rear로 추가된다.
{
	Queue *temp = Add_new_queue();
	temp->nData = item;

	if (rear->L_Link == NULL)
	{
		front->L_Link = temp;
		rear->L_Link = temp;
	}
	else
	{
		rear->L_Link->R_Link = temp;
		temp->L_Link = rear->L_Link;
		rear->L_Link = temp;
	}

}

int R_deQueue()//rear부터 나간다.
//아무것도 없을때 하나일때 여러개일때.
{
	Queue *deQueue_mem;
	int deQueue_nData;
	int result;

	if (rear->L_Link == NULL)
		result = FAIL;
	else
	{
		deQueue_mem = rear->L_Link;
		deQueue_nData = rear->L_Link->nData;
		result = deQueue_nData;

		if (rear->L_Link != front->L_Link)
		{
			rear->L_Link = deQueue_mem->L_Link;
			rear->L_Link->R_Link = deQueue_mem->R_Link;
			free(deQueue_mem);
		}
		else
		{
			front->L_Link = deQueue_mem->L_Link;
			rear->L_Link = deQueue_mem->L_Link;
			free(deQueue_mem);
		}
		
	}
	
	return result;
}

int L_deQueue()//front부터 나간다. 

			   //아무것도 없을때 하나일때 여러개일때.
{
	Queue *deQueue_mem;
	int deQueue_nData;
	int result;

	if (front->L_Link == NULL)
		result = FAIL;
	else
	{
		deQueue_mem = front->L_Link;
		deQueue_nData = front->L_Link->nData;
		result = deQueue_nData;

		if (front->L_Link != rear->L_Link)
		{
			front->L_Link = deQueue_mem->R_Link;
			front->L_Link->L_Link = deQueue_mem->L_Link;//deQueue_mem->L_Link이거 대신 NULL???
			free(deQueue_mem);
		}
		else
		{
			front->L_Link = deQueue_mem->R_Link;
			rear->L_Link = deQueue_mem->R_Link;
			free(deQueue_mem);
		}
	}

	return result;
}

int IsEmpty()
{
	return (front->L_Link == NULL) && (rear->L_Link == NULL);
}

int Count_Queue()
{
	int cnt = 0;
	Queue *Count = front->L_Link;

	while (Count->R_Link != NULL)
	{
		cnt++;
		Count = Count->R_Link;
	}
	cnt++;

	return cnt;
}
