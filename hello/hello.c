
/*
 * mearrong123@gmail.com
 * https://github.com/inhoinno
 * hello.c 
 *
 * */
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

/*
 *
 * hello_init - initial finction ,starts when module inserted
 * SUCCESS : returns 0 , FAILURE : returns value that is not 0
 *
 * */

static int hello_init(void)
{
	printk(KERN_ALERT "Initialize Module name :\"hello\"\n");
	printk(KERN_ALERT "**github.com/inhoinno CONTACT : mearrong123@gmail.com**\n");
	return 0;
}

/*
 * hello_exit - 종료함수, runs when module removed
 * */

static void hello_exit(void)
{
	printk(KERN_ALERT "Now Module \"hello\" say \"Goodbye...\" (Module removed) ");

}

module_init(hello_init);
module_exit(hello_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Inho Song");
MODULE_DESCRIPTION("\"Hello, World!\" Module ");
