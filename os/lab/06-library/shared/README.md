# Execution

```bash
➜  shared git:(main) ✗ ls
ctest1.c  ctest2.c  prog.c
➜  shared git:(main) ✗ gcc -Wall -fPIC -c *.c
➜  shared git:(main) ✗ ls
ctest1.c  ctest1.o  ctest2.c  ctest2.o  prog.c  prog.o
➜  shared git:(main) ✗ gcc -shared -o libctest.so *.o 
➜  shared git:(main) ✗ 
➜  shared git:(main) ✗ ls
ctest1.c  ctest1.o  ctest2.c  ctest2.o  libctest.so  prog.c  prog.o
➜  shared git:(main) ✗ 
➜  shared git:(main) ✗ export LD_LIBRARY_PATH=.:LD_LIBRARY_PATH
➜  shared git:(main) ✗ 
➜  shared git:(main) ✗ gcc -L . prog.c -l ctest -o prog
➜  shared git:(main) ✗ 
➜  shared git:(main) ✗ ls
ctest1.c  ctest1.o  ctest2.c  ctest2.o  libctest.so  prog  prog.c  prog.o
➜  shared git:(main) ✗ 
➜  shared git:(main) ✗ ./prog 
This is from ctest1.c
This is from ctest2.c
➜  shared git:(main) ✗ 
➜  shared git:(main) ✗ size prog
   text	   data	    bss	    dec	    hex	filename
   1500	    624	      8	   2132	    854	prog
```