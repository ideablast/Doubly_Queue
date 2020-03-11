#include"ALL.h"

Queue *front;

Queue *rear;
int main()
{
	front = Add_new_queue();
	rear = Add_new_queue();

	L_enQueue(10);
	L_enQueue(20);
	R_enQueue(40);
	R_enQueue(50);
	printf("%d\n", IsEmpty());
	printf("%d\n", R_deQueue());
	printf("%d\n", R_deQueue());
	printf("%d\n", R_deQueue());
	printf("%d\n", R_deQueue());
	printf("%d\n", R_deQueue());
	printf("%d\n", IsEmpty());
	
	/*Test1
	printf("%d\n", L_deQueue());
	printf("%d\n", R_deQueue());
	*/
	/*Test2
	printf("%d\n", L_deQueue());
	printf("%d\n", L_deQueue());
	printf("%d\n", L_deQueue());
	printf("%d\n", L_deQueue());
	printf("%d\n", IsEmpty());
	*/
	/*Test3
	printf("%d\n", R_deQueue());
	printf("%d\n", R_deQueue());
	printf("%d\n", R_deQueue());
	printf("%d\n", R_deQueue());
	printf("%d\n", R_deQueue());
	printf("%d\n", IsEmpty());
	*/
	
}