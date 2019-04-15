#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Altunian");
MODULE_DESCRIPTION("An introductory 'Hello World' module.");

static int hello_init(void)
{
    printk(KERN_INFO "Hello, World!\n");

    return 0;
}

static void hello_exit(void)
{
    printk(KERN_INFO "Exiting the module...\n");
}

module_init(hello_init);
module_exit(hello_exit);
