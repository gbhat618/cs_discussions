# Execution

```bash
➜  static git:(main) ✗ ls
ctest1.c  ctest2.c  prog.c
➜  static git:(main) ✗ cc -Wall -c ctest1.c ctest2.c
➜  static git:(main) ✗ ls
ctest1.c  ctest1.o  ctest2.c  ctest2.o  prog.c
➜  static git:(main) ✗ ar -cvq libctest.a ctest1.o ctest2.o
a - ctest1.o
a - ctest2.o
➜  static git:(main) ✗ ls
ctest1.c  ctest1.o  ctest2.c  ctest2.o  libctest.a  prog.c
➜  static git:(main) ✗ 
➜  static git:(main) ✗ ar -t libctest.a
ctest1.o
ctest2.o
➜  static git:(main) ✗ 
➜  static git:(main) ✗ cc -o myprog prog.c libctest.a
➜  static git:(main) ✗ 
➜  static git:(main) ✗ ls
ctest1.c  ctest1.o  ctest2.c  ctest2.o  libctest.a  myprog  prog.c
➜  static git:(main) ✗ 
➜  static git:(main) ✗ ./myprog 
This is from ctest1.c
This is from ctest2.c
➜  static git:(main) ✗ 
➜  static git:(main) ✗ size myprog 
   text	   data	    bss	    dec	    hex	filename
   1543	    600	      8	   2151	    867	myprog
➜  static git:(main) ✗ 
➜  static git:(main) ✗ 
```