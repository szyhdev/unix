For more than twenty years, serious C programmers have relied on one book for practical, in-depth knowledge of the programming interfaces that drive the UNIX and Linux kernels: W. Richard Stevens’ Advanced Programming in the UNIX® Environment. Now, once again, Rich’s colleague Steve Rago has thoroughly updated this classic work. The new third edition supports today’s leading platforms, reflects new technical advances and best practices, and aligns with Version 4 of the Single UNIX Specification.

Steve carefully retains the spirit and approach that have made this book so valuable. Building on Rich’s pioneering work, he begins with files, directories, and processes, carefully laying the groundwork for more advanced techniques, such as signal handling and terminal I/O. He also thoroughly covers threads and multithreaded programming, and socket-based IPC.

This edition covers more than seventy new interfaces, including POSIX asynchronous I/O, spin locks, barriers, and POSIX semaphores. Most obsolete interfaces have been removed, except for a few that are ubiquitous. Nearly all examples have been tested on four modern platforms: Solaris 10, Mac OS X version 10.6.8 (Darwin 10.8.0), FreeBSD 8.0, and Ubuntu version 12.04 (based on Linux 3.2).

As in previous editions, you’ll learn through examples, including more than ten thousand lines of downloadable, ISO C source code. More than four hundred system calls and functions are demonstrated with concise, complete programs that clearly illustrate their usage, arguments, and return values. To tie together what you’ve learned, the book presents several chapter-length case studies, each reflecting contemporary environments.

Advanced Programming in the UNIX® Environment has helped generations of programmers write code with exceptional power, performance, and reliability. Now updated for today’s systems, this third edition will be even more valuable.

Contents
- Foreword to the Second Edition
- Preface
  * Introduction
  * Changes from the Second Edition
  * Acknowledgments
- Preface to the Second Edition
  * Introduction
  * Changes from the First Edition
  * Acknowledgments
- Preface to the First Edition
  * Introduction
  * Unix Standards
  * Organization of the Book
  * Examples in the Text
  * Systems Used to Test the Examples
  * Acknowledgments
- Chapter 1. UNIX System Overview
  * 1 Introduction
  * 2 UNIX Architecture
  * 3 Logging In
  * 4 Files and Directories
  * 5 Input and Output
  * 6 Programs and Processes
  * 7 Error Handling
  * 8 User Identification
  * 9 Signals
  * 10 Time Values
  * 11 System Calls and Library Functions
  * 12 Summary
- Chapter 2. UNIX Standardization and Implementations
  * 1 Introduction
  * 2 UNIX Standardization
  * 3 UNIX System Implementations
  * 4 Relationship of Standards and Implementations
  * 5 Limits
  * 6 Options
  * 7 Feature Test Macros
  * 8 Primitive System Data Types
  * 9 Differences Between Standards
  * 10 Summary
- Chapter 3. File I/O
  * 1 Introduction
  * 2 File Descriptors
  * 3 open and openat Functions
  * 4 creat Function
  * 5 close Function
  * 6 lseek Function
  * 7 read Function
  * 8 write Function
  * 9 I/O Efficiency
  * 10 File Sharing
  * 11 Atomic Operations
  * 12 dup and dup2 Functions
  * 13 sync, fsync, and fdatasync Functions
  * 14 fcntl Function
  * 15 ioctl Function
  * 16 /dev/fd
  * 17 Summary
- Chapter 4. Files and Directories
  * 1 Introduction
  * 2 stat, fstat, fstatat, and lstat Functions
  * 3 File Types
  * 4 Set-User-ID and Set-Group-ID
  * 5 File Access Permissions
  * 6 Ownership of New Files and Directories
  * 7 access and faccessat Functions
  * 8 umask Function
  * 9 chmod, fchmod, and fchmodat Functions
  * 10 Sticky Bit
  * 11 chown, fchown, fchownat, and lchown Functions
  * 12 File Size
  * 13 File Truncation
  * 14 File Systems
  * 15 link, linkat, unlink, unlinkat, and remove Functions
  * 16 rename and renameat Functions
  * 17 Symbolic Links
  * 18 Creating and Reading Symbolic Links
  * 19 File Times
  * 20 futimens, utimensat, and utimes Functions
  * 21 mkdir, mkdirat, and rmdir Functions
  * 22 Reading Directories
  * 23 chdir, fchdir, and getcwd Functions
  * 24 Device Special Files
  * 25 Summary of File Access Permission Bits
  * 26 Summary
- Chapter 5. Standard I/O Library
  * 1 Introduction
  * 2 Streams and FILE Objects
  * 3 Standard Input, Standard Output, and Standard Error
  * 4 Buffering
  * 5 Opening a Stream
  * 6 Reading and Writing a Stream
  * 7 Line-at-a-Time I/O
  * 8 Standard I/O Efficiency
  * 9 Binary I/O
  * 10 Positioning a Stream
  * 11 Formatted I/O
  * 12 Implementation Details
  * 13 Temporary Files
  * 14 Memory Streams
  * 15 Alternatives to Standard I/O
  * 16 Summary
- Chapter 6. System Data Files and Information
  * 1 Introduction
  * 2 Password File
  * 3 Shadow Passwords
  * 4 Group File
  * 5 Supplementary Group IDs
  * 6 Implementation Differences
  * 7 Other Data Files
  * 8 Login Accounting
  * 9 System Identification
  * 10 Time and Date Routines
  * 11 Summary
- Chapter 7. Process Environment
  * 1 Introduction
  * 2 main Function
  * 3 Process Termination
  * 4 Command-Line Arguments
  * 5 Environment List
  * 6 Memory Layout of a C Program
  * 7 Shared Libraries
  * 8 Memory Allocation
  * 9 Environment Variables
  * 10 setjmp and longjmp Functions
  * 11 getrlimit and setrlimit Functions
  * 12 Summary
- Chapter 8. Process Control
  * 1 Introduction
  * 2 Process Identifiers
  * 3 fork Function
  * 4 vfork Function
  * 5 exit Functions
  * 6 wait and waitpid Functions
  * 7 waitid Function
  * 8 wait3 and wait4 Functions
  * 9 Race Conditions
  * 10 exec Functions
  * 11 Changing User IDs and Group IDs
  * 12 Interpreter Files
  * 13 system Function
  * 14 Process Accounting
  * 15 User Identification
  * 16 Process Scheduling
  * 17 Process Times
  * 18 Summary
- Chapter 9. Process Relationships
  * 1 Introduction
  * 2 Terminal Logins
  * 3 Network Logins
  * 4 Process Groups
  * 5 Sessions
  * 6 Controlling Terminal
  * 7 tcgetpgrp, tcsetpgrp, and tcgetsid Functions
  * 8 Job Control
  * 9 Shell Execution of Programs
  * 10 Orphaned Process Groups
  * 11 FreeBSD Implementation
  * 12 Summary
- Chapter 10. Signals
  * 1 Introduction
  * 2 Signal Concepts
  * 3 signal Function
  * 4 Unreliable Signals
  * 5 Interrupted System Calls
  * 6 Reentrant Functions
  * 7 SIGCLD Semantics
  * 8 Reliable-Signal Terminology and Semantics
  * 9 kill and raise Functions
  * 10 alarm and pause Functions
  * 11 Signal Sets
  * 12 sigprocmask Function
  * 13 sigpending Function
  * 14 sigaction Function
  * 15 sigsetjmp and siglongjmp Functions
  * 16 sigsuspend Function
  * 17 abort Function
  * 18 system Function
  * 19 sleep, nanosleep, and clock_nanosleep Functions
  * 20 sigqueue Function
  * 21 Job-Control Signals
  * 22 Signal Names and Numbers
  * 23 Summary
- Chapter 11. Threads
  * 1 Introduction
  * 2 Thread Concepts
  * 3 Thread Identification
  * 4 Thread Creation
  * 5 Thread Termination
  * 6 Thread Synchronization
  * 7 Summary
- Chapter 12. Thread Control
  * 1 Introduction
  * 2 Thread Limits
  * 3 Thread Attributes
  * 4 Synchronization Attributes
  * 5 Reentrancy
  * 6 Thread-Specific Data
  * 7 Cancel Options
  * 8 Threads and Signals
  * 9 Threads and fork
  * 10 Threads and I/O
  * 11 Summary
- Chapter 13. Daemon Processes
  * 1 Introduction
  * 2 Daemon Characteristics
  * 3 Coding Rules
  * 4 Error Logging
  * 5 Single-Instance Daemons
  * 6 Daemon Conventions
  * 7 Client–Server Model
  * 8 Summary
- Chapter 14. Advanced I/O
  * 1 Introduction
  * 2 Nonblocking I/O
  * 3 Record Locking
  * 4 I/O Multiplexing
  * 5 Asynchronous I/O
  * 6 readv and writev Functions
  * 7 readn and writen Functions
  * 8 Memory-Mapped I/O
  * 9 Summary
- Chapter 15. Interprocess Communication
  * 1 Introduction
  * 2 Pipes
  * 3 popen and pclose Functions
  * 4 Coprocesses
  * 5 FIFOs
  * 6 XSI IPC
  * 7 Message Queues
  * 8 Semaphores
  * 9 Shared Memory
  * 10 POSIX Semaphores
  * 11 Client–Server Properties
  * 12 Summary
- Chapter 16. Network IPC: Sockets
  * 1 Introduction
  * 2 Socket Descriptors
  * 3 Addressing
  * 4 Connection Establishment
  * 5 Data Transfer
  * 6 Socket Options
  * 7 Out-of-Band Data
  * 8 Nonblocking and Asynchronous I/O
  * 9 Summary
- Chapter 17. Advanced IPC
  * 1 Introduction
  * 2 UNIX Domain Sockets
  * 3 Unique Connections
  * 4 Passing File Descriptors
  * 5 An Open Server, Version 1
  * 6 An Open Server, Version 2
  * 7 Summary
- Chapter 18. Terminal I/O
  * 1 Introduction
  * 2 Overview
  * 3 Special Input Characters
  * 4 Getting and Setting Terminal Attributes
  * 5 Terminal Option Flags
  * 6 stty Command
  * 7 Baud Rate Functions
  * 8 Line Control Functions
  * 9 Terminal Identification
  * 10 Canonical Mode
  * 11 Noncanonical Mode
  * 12 Terminal Window Size
  * 13 termcap, terminfo, and curses
  * 14 Summary
- Chapter 19. Pseudo Terminals
  * 1 Introduction
  * 2 Overview
  * 3 Opening Pseudo-Terminal Devices
  * 4 pty_fork Function
  * 5 pty Program
  * 6 Using the pty Program
  * 7 Advanced Features
  * 8 Summary
- Chapter 20. A Database Library
  * 1 Introduction
  * 2 History
  * 3 The Library
  * 4 Implementation Overview
  * 5 Centralized or Decentralized?
  * 6 Concurrency
  * 7 Building the Library
  * 8 Source Code
  * 9 Performance
  * 10 Summary
- Chapter 21. Communicating with a Network Printer
  * 1 Introduction
  * 2 The Internet Printing Protocol
  * 3 The Hypertext Transfer Protocol
  * 4 Printer Spooling
  * 5 Source Code
  * 6 Summary
