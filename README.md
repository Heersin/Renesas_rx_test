# Renesas_rx_test
contains renesas rx assembly instruction set

# assembly
Download gcc toolchain from Renesas Official Site
```
./rx-elf-gcc -c asm_v1.s
```

# disassembly
```
./rx-elf-objdump -d bin/asm_v1.o
```

# compile
./rx-elf-gcc -mcpu=rx610 morse.c -o morse

