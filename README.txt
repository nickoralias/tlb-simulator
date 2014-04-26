These are some optional flags you can use when running the executable:

-v	verbose: print extensive message describing the events occurring while the simulation is running

-tN	set the number of TLB entries. The number of entries must be a power of 2; the program automatically selects the smallest power of 2 no less than N. 

-pN	set the maximum number of virtual pages in the simulated process (also a power of 2)

-fN	set the number of page frames in memory (a power of 2).

-nN	set the number of memory instructions (LOADS and STORES) issued by the CPU to N

For example,

./proj2 -v -t100 -f1000 -p10000 -n100000
