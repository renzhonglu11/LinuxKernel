#include <linux/module.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("rz");

static int __init ModuleInit(void){
  printk("hello kernel\n");
  return 0;
}


static void __exit ModuleExit(void){
  printk("kernel exit...\n");
}

module_init(ModuleInit);
module_exit(ModuleExit);