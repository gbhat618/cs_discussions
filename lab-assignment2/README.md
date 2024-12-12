# Executing

Compile job.c first, naming the executable as `job` (because it is used in the `mgmr.c` source code)
```bash
gcc job.c -o job
```

Then, compile `mgmr.c` and execute it,
```bash
gcc mgmr.c -o mgmr
./mgrm
```

## Demo
```bash
gbhat@gbhat:~/cs_discussions/lab-assignment2$ gcc mgmr.c -o mgmr
gbhat@gbhat:~/cs_discussions/lab-assignment2$ gcc job.c -o job
gbhat@gbhat:~/cs_discussions/lab-assignment2$
gbhat@gbhat:~/cs_discussions/lab-assignment2$ ./mgmr
h
Command : Action
c : Continue a suspended job
h : Print this help message
gbhat@gbhat:~/cs_discussions/lab-assignment2$ ./mgmr
r
Starting new job: L
Child pid is: 2590
This is parent: 0
This is your job; sleeping for 5 minutes, arg is: L

^C
gbhat@gbhat:~/cs_discussions/lab-assignment2$
```