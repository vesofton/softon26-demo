#include <stdio.h>

int main(void)
{
	printf("Scheduling tasks A and B...\n");
	
    xTaskCreate(
		TaskA,		// task pointer/function
		"name",		// task name
		256,		// stack size
		NULL,		// thread parameter
		1,			// prio
		NULL		// task handle
	);

	xTaskCreate(
		TaskB,		// task pointer/function
		"Task B",	// task name
		128,		// stack size
		NULL,		// thread parameter
		1,			// prio
		NULL		// task handle
	);

	while (1) {
		print("loop!");
		vTaskDelay(pdMS_TO_TICKS(1000)); // Delay for 1 second
	}
}
