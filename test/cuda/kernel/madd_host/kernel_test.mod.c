#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xee2e33c4, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x16588c0c, __VMLINUX_SYMBOL_STR(cuModuleUnload) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x598ff9a8, __VMLINUX_SYMBOL_STR(cuParamSetSize) },
	{ 0x2d748af5, __VMLINUX_SYMBOL_STR(cuLaunchGrid) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xeb0d4d1b, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xbe8c3fb, __VMLINUX_SYMBOL_STR(cuMemHostGetDevicePointer) },
	{ 0x3dfa3e6a, __VMLINUX_SYMBOL_STR(cuInit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe6df3210, __VMLINUX_SYMBOL_STR(cuModuleGetFunction) },
	{ 0xec989250, __VMLINUX_SYMBOL_STR(cuMemHostAlloc) },
	{ 0xa4ea1e21, __VMLINUX_SYMBOL_STR(cuCtxSynchronize) },
	{ 0x5044c80d, __VMLINUX_SYMBOL_STR(cuParamSeti) },
	{ 0x246ccba8, __VMLINUX_SYMBOL_STR(cuCtxCreate) },
	{ 0xd1638f02, __VMLINUX_SYMBOL_STR(cuCtxDestroy) },
	{ 0x833d4ba9, __VMLINUX_SYMBOL_STR(cuFuncSetBlockShape) },
	{ 0xfa281870, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3356326f, __VMLINUX_SYMBOL_STR(cuMemFreeHost) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0x77531ce4, __VMLINUX_SYMBOL_STR(cuDeviceGet) },
	{ 0xd9075df3, __VMLINUX_SYMBOL_STR(cuModuleLoad) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=kcuda";


MODULE_INFO(srcversion, "EFA323353AB4D00B86CDBE2");
