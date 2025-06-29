#include <zephyr/kernel.h>

//branch main
int main(void)
{
    while (true)
    {
        printk("Hello!\n");
        k_msleep(1000);
    }
    return 0;
}