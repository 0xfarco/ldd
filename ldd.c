#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("0xfarco <0xfarco@gmail.com>");
MODULE_DESCRIPTION("First dynamically loadable kernel module");

static int farco_module_init(void) {
  printk("Hello, World!\n");
  return 0;
}

static void farco_module_exit(void) {
  printk("Good, Bye!\n");
}

module_init(farco_module_init);
module_exit(farco_module_exit);

