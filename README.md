# Stride-Scheduler-in-Linux-Kernel

In this project, Stride Scheduling Algorithm implemented to the Linux Kernel in a Virtual Machine. 

# What is Stride Scheduling Algoritm?

Stride Scheduling Algorithm is a process based algorithm where processes have ticket values. That ticket value determines which process will use the CPU most. If a process has more tickets, it will use more CPU. With the help of a large integer constant and assigned ticket value, a stride value is obtained. That stride value will determine the process to run first.

# Why Stride Algorithm is implemented?

Stride scheduling algorithm is implemented to obtain more fair and predictable results. If we think of small amount of processes, default scheduler behaves very unstable. Default scheduler behaves gradually better as the process count increments but we still can not compare with the stride scheduler's fairness.

# About the project

Two systemcalls defined. One for changing the scheduler to default or stride, the other one is to assign the ticket value to the process. Made changes in files sched.c and fork.c.
