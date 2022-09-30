# CSC139 - Chapter 3 & 4 - Handout 3

- [CSC139 - Chapter 3 & 4 - Handout 3](#csc139---chapter-3--4---handout-3)
  - [1. Including the initial parent process, how many processes are created by the program shown in Figure 3.31 in your textbook?](#1-including-the-initial-parent-process-how-many-processes-are-created-by-the-program-shown-in-figure-331-in-your-textbook)
  - [2. When a process creates a new process using the `fork()` operation, which of the following state is shared between the parent process and the child process?](#2-when-a-process-creates-a-new-process-using-the-fork-operation-which-of-the-following-state-is-shared-between-the-parent-process-and-the-child-process)
  - [3. Describe the actions taken by a kernel to context-switch between processes](#3-describe-the-actions-taken-by-a-kernel-to-context-switch-between-processes)
  - [4. What is the difference between ordinary pipes and named pipes?](#4-what-is-the-difference-between-ordinary-pipes-and-named-pipes)
  - [5. Give an example of a situation in which ordinary pipes are more suitable than named pipes and an example of a situation in which named pipes are more suitable than ordinary pipes](#5-give-an-example-of-a-situation-in-which-ordinary-pipes-are-more-suitable-than-named-pipes-and-an-example-of-a-situation-in-which-named-pipes-are-more-suitable-than-ordinary-pipes)
  - [6. What are the benefits and the disadvantages of Synchronous and asynchronous communication? (Consider both the system level and the programmer level.)](#6-what-are-the-benefits-and-the-disadvantages-of-synchronous-and-asynchronous-communication-consider-both-the-system-level-and-the-programmer-level)
  - [7. What are the outputs of the following code? Please test them on Linux](#7-what-are-the-outputs-of-the-following-code-please-test-them-on-linux)
  - [8. What is a zombie?  Why does the zombie problem arise? Why must `wait()` be called on children?](#8-what-is-a-zombie--why-does-the-zombie-problem-arise-why-must-wait-be-called-on-children)
  - [9. What is the difference between an orphan and zombie processes?](#9-what-is-the-difference-between-an-orphan-and-zombie-processes)
  - [10. What is a thread?](#10-what-is-a-thread)
  - [11. What is the difference between a thread and a process?](#11-what-is-the-difference-between-a-thread-and-a-process)
  - [12. What resources are used when a thread created? How do they differ from those when a process is created?](#12-what-resources-are-used-when-a-thread-created-how-do-they-differ-from-those-when-a-process-is-created)
  - [13. What is multithreading? What are its benefits?](#13-what-is-multithreading-what-are-its-benefits)
  - [14. In a multi-threaded process, if one thread is busy on I/O will the entire process be blocked?](#14-in-a-multi-threaded-process-if-one-thread-is-busy-on-io-will-the-entire-process-be-blocked)
  - [15. What is better (why and how): multi processes OR single process with multiple threads?](#15-what-is-better-why-and-how-multi-processes-or-single-process-with-multiple-threads)

## 1. Including the initial parent process, how many processes are created by the program shown in Figure 3.31 in your textbook?

>

## 2. When a process creates a new process using the `fork()` operation, which of the following state is shared between the parent process and the child process?

- [ ] Stack
- [ ] Heap
- [ ] Shared memory segments

## 3. Describe the actions taken by a kernel to context-switch between processes

>

## 4. What is the difference between ordinary pipes and named pipes?

>

## 5. Give an example of a situation in which ordinary pipes are more suitable than named pipes and an example of a situation in which named pipes are more suitable than ordinary pipes

>

## 6. What are the benefits and the disadvantages of Synchronous and asynchronous communication? (Consider both the system level and the programmer level.)

>

## 7. What are the outputs of the following code? Please test them on Linux

Fork system call use for creates a new process, which is called child process,
which runs concurrently with process (which process called system call fork)
and this process is called parent process. After a new child process created,
both processes will execute the next instruction following the `fork()`
system call. A child process uses the same pc(program counter), same CPU
registers, same open files which use in the parent process.

```c
int  main ( ) {
    fork ( ) ;
    fprintf ( stderr , "Hello/ n");
}
```

> OUTPUT:

```c
int  main ( ) {
    fork ( );
    f ork ( );
    fprintf ( stderr , "Hello/ n");
}
```

> OUTPUT:

```c
int  main ( ) {
    fork ( ) ;
    fork ( ) ;
    f ork ( ) ;
    fprintf ( stderr , "Hello/ n");
}
```

> OUTPUT:

## 8. What is a zombie?  Why does the zombie problem arise? Why must `wait()` be called on children?

>

## 9. What is the difference between an orphan and zombie processes?

>

## 10. What is a thread?

>

## 11. What is the difference between a thread and a process?

>

## 12. What resources are used when a thread created? How do they differ from those when a process is created?

>

## 13. What is multithreading? What are its benefits?

>

## 14. In a multi-threaded process, if one thread is busy on I/O will the entire process be blocked?

>

## 15. What is better (why and how): multi processes OR single process with multiple threads?

>
