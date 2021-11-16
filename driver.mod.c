#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe09a23a6, "module_layout" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x600ab2aa, "cdev_del" },
	{ 0x9f95103f, "class_destroy" },
	{ 0x247907d6, "device_destroy" },
	{ 0xfe990052, "gpio_free" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x52a013b6, "gpiod_to_irq" },
	{ 0x6c66e039, "gpiod_direction_input" },
	{ 0x63af60c0, "gpiod_direction_output_raw" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xdca0b809, "device_create" },
	{ 0xfcff42d, "__class_create" },
	{ 0x27900d89, "cdev_add" },
	{ 0x97823d2e, "cdev_init" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xf9a482f9, "msleep" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x56470118, "__warn_printk" },
	{ 0xbdf66e56, "gpiod_set_raw_value" },
	{ 0xf43e904a, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x154bdf03, "gpiod_get_raw_value" },
	{ 0x6ace5cfa, "gpio_to_desc" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A775F2A5B1B943DE9EFF661");
