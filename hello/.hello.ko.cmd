cmd_/home/inhoinno/kernel/hello/hello.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000 -T ./scripts/module-common.lds --build-id  -o /home/inhoinno/kernel/hello/hello.ko /home/inhoinno/kernel/hello/hello.o /home/inhoinno/kernel/hello/hello.mod.o ;  true
