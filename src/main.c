/* Standard includes. */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

/* FreeRTOS kernel includes. */
#include "FreeRTOS.h"
#include "task.h"

TaskHandle_t myTask1Handle = NULL;

void myTask1(void *p)
{
    int count = 0;
    while (1)
    {
        printf("Bissmi Allah : %d\r\n", count++);
        vTaskDelay(1000);
    }
}

int main(void)
{
    xTaskCreate(myTask1, "Task 1", 200, (void *)0, tskIDLE_PRIORITY, myTask1Handle);

    vTaskStartScheduler();

    while (1)
    {
        //here code to execute
    }

    return 0;
}
