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
  * 1.1 Introduction
  * 1.2 UNIX Architecture
  * 1.3 Logging In
  * 1.4 Files and Directories
  * 1.5 Input and Output
  * 1.6 Programs and Processes
  * 1.7 Error Handling
  * 1.8 User Identification
  * 1.9 Signals
  * 1.10 Time Values
  * 1.11 System Calls and Library Functions
  * 1.12 Summary
- Chapter 2. UNIX Standardization and Implementations
  * 2.1 Introduction
  * 2.2 UNIX Standardization
  * 2.3 UNIX System Implementations
  * 2.4 Relationship of Standards and Implementations
  * 2.5 Limits
  * 2.6 Options
  * 2.7 Feature Test Macros
  * 2.8 Primitive System Data Types
  * 2.9 Differences Between Standards
  * 2.10 Summary
- Chapter 3. File I/O
  * 3.1 Introduction
  * 3.2 File Descriptors
  * 3.3 open and openat Functions
  * 3.4 creat Function
  * 3.5 close Function
  * 3.6 lseek Function
  * 3.7 read Function
  * 3.8 write Function
  * 3.9 I/O Efficiency
  * 3.10 File Sharing
  * 3.11 Atomic Operations
  * 3.12 dup and dup2 Functions
  * 3.13 sync, fsync, and fdatasync Functions
  * 3.14 fcntl Function
  * 3.15 ioctl Function
  * 3.16 /dev/fd
  * 3.17 Summary
- Chapter 4. Files and Directories
  * 4.1 Introduction
  * 4.2 stat, fstat, fstatat, and lstat Functions
  * 4.3 File Types
  * 4.4 Set-User-ID and Set-Group-ID
  * 4.5 File Access Permissions
  * 4.6 Ownership of New Files and Directories
  * 4.7 access and faccessat Functions
  * 4.8 umask Function
  * 4.9 chmod, fchmod, and fchmodat Functions
  * 4.10 Sticky Bit
  * 4.11 chown, fchown, fchownat, and lchown Functions
  * 4.12 File Size
  * 4.13 File Truncation
  * 4.14 File Systems
  * 4.15 link, linkat, unlink, unlinkat, and remove Functions
  * 4.16 rename and renameat Functions
  * 4.17 Symbolic Links
  * 4.18 Creating and Reading Symbolic Links
  * 4.19 File Times
  * 4.20 futimens, utimensat, and utimes Functions
  * 4.21 mkdir, mkdirat, and rmdir Functions
  * 4.22 Reading Directories
  * 4.23 chdir, fchdir, and getcwd Functions
  * 4.24 Device Special Files
  * 4.25 Summary of File Access Permission Bits
  * 4.26 Summary
- Chapter 5. Standard I/O Library
  * 5.1 Introduction
  * 5.2 Streams and FILE Objects
  * 5.3 Standard Input, Standard Output, and Standard Error
  * 5.4 Buffering
  * 5.5 Opening a Stream
  * 5.6 Reading and Writing a Stream
  * 5.7 Line-at-a-Time I/O
  * 5.8 Standard I/O Efficiency
  * 5.9 Binary I/O
  * 5.10 Positioning a Stream
  * 5.11 Formatted I/O
  * 5.12 Implementation Details
  * 5.13 Temporary Files
  * 5.14 Memory Streams
  * 5.15 Alternatives to Standard I/O
  * 5.16 Summary
- Chapter 6. System Data Files and Information
  * 6.1 Introduction
  * 6.2 Password File
  * 6.3 Shadow Passwords
  * 6.4 Group File
  * 6.5 Supplementary Group IDs
  * 6.6 Implementation Differences
  * 6.7 Other Data Files
  * 6.8 Login Accounting
  * 6.9 System Identification
  * 6.10 Time and Date Routines
  * 6.11 Summary
- Chapter 7. Process Environment
  * 7.1 Introduction
  * 7.2 main Function
  * 7.3 Process Termination
  * 7.4 Command-Line Arguments
  * 7.5 Environment List
  * 7.6 Memory Layout of a C Program
  * 7.7 Shared Libraries
  * 7.8 Memory Allocation
  * 7.9 Environment Variables
  * 7.10 setjmp and longjmp Functions
  * 7.11 getrlimit and setrlimit Functions
  * 7.12 Summary
- Chapter 8. Process Control
  * 8.1 Introduction
  * 8.2 Process Identifiers
  * 8.3 fork Function
  * 8.4 vfork Function
  * 8.5 exit Functions
  * 8.6 wait and waitpid Functions
  * 8.7 waitid Function
  * 8.8 wait3 and wait4 Functions
  * 8.9 Race Conditions
  * 8.10 exec Functions
  * 8.11 Changing User IDs and Group IDs
  * 8.12 Interpreter Files
  * 8.13 system Function
  * 8.14 Process Accounting
  * 8.15 User Identification
  * 8.16 Process Scheduling
  * 8.17 Process Times
  * 8.18 Summary
- Chapter 9. Process Relationships
  * 9.1 Introduction
  * 9.2 Terminal Logins
  * 9.3 Network Logins
  * 9.4 Process Groups
  * 9.5 Sessions
  * 9.6 Controlling Terminal
  * 9.7 tcgetpgrp, tcsetpgrp, and tcgetsid Functions
  * 9.8 Job Control
  * 9.9 Shell Execution of Programs
  * 9.10 Orphaned Process Groups
  * 9.11 FreeBSD Implementation
  * 9.12 Summary
- Chapter 10. Signals
  * 10.1 Introduction
  * 10.2 Signal Concepts
  * 10.3 signal Function
  * 10.4 Unreliable Signals
  * 10.5 Interrupted System Calls
  * 10.6 Reentrant Functions
  * 10.7 SIGCLD Semantics
  * 10.8 Reliable-Signal Terminology and Semantics
  * 10.9 kill and raise Functions
  * 10.10 alarm and pause Functions
  * 10.11 Signal Sets
  * 10.12 sigprocmask Function
  * 10.13 sigpending Function
  * 10.14 sigaction Function
  * 10.15 sigsetjmp and siglongjmp Functions
  * 10.16 sigsuspend Function
  * 10.17 abort Function
  * 10.18 system Function
  * 10.19 sleep, nanosleep, and clock_nanosleep Functions
  * 10.20 sigqueue Function
  * 10.21 Job-Control Signals
  * 10.22 Signal Names and Numbers
  * 10.23 Summary
- Chapter 11. Threads
  * 11.1 Introduction
  * 11.2 Thread Concepts
  * 11.3 Thread Identification
  * 11.4 Thread Creation
  * 11.5 Thread Termination
  * 11.6 Thread Synchronization
  * 11.7 Summary
- Chapter 12. Thread Control
  * 12.1 Introduction
  * 12.2 Thread Limits
  * 12.3 Thread Attributes
  * 12.4 Synchronization Attributes
  * 12.5 Reentrancy
  * 12.6 Thread-Specific Data
  * 12.7 Cancel Options
  * 12.8 Threads and Signals
  * 12.9 Threads and fork
  * 12.10 Threads and I/O
  * 12.11 Summary
- Chapter 13. Daemon Processes
  * 13.1 Introduction
  * 13.2 Daemon Characteristics
  * 13.3 Coding Rules
  * 13.4 Error Logging
  * 13.5 Single-Instance Daemons
  * 13.6 Daemon Conventions
  * 13.7 Client–Server Model
  * 13.8 Summary
- Chapter 14. Advanced I/O
  * 14.1 Introduction
  * 14.2 Nonblocking I/O
  * 14.3 Record Locking
  * 14.4 I/O Multiplexing
  * 14.5 Asynchronous I/O
  * 14.6 readv and writev Functions
  * 14.7 readn and writen Functions
  * 14.8 Memory-Mapped I/O
  * 14.9 Summary
- Chapter 15. Interprocess Communication
  * 15.1 Introduction
  * 15.2 Pipes
  * 15.3 popen and pclose Functions
  * 15.4 Coprocesses
  * 15.5 FIFOs
  * 15.6 XSI IPC
  * 15.7 Message Queues
  * 15.8 Semaphores
  * 15.9 Shared Memory
  * 15.10 POSIX Semaphores
  * 15.11 Client–Server Properties
  * 15.12 Summary
- Chapter 16. Network IPC: Sockets
  * 16.1 Introduction
  * 16.2 Socket Descriptors
  * 16.3 Addressing
  * 16.4 Connection Establishment
  * 16.5 Data Transfer
  * 16.6 Socket Options
  * 16.7 Out-of-Band Data
  * 16.8 Nonblocking and Asynchronous I/O
  * 16.9 Summary
- Chapter 17. Advanced IPC
  * 17.1 Introduction
  * 17.2 UNIX Domain Sockets
  * 17.3 Unique Connections
  * 17.4 Passing File Descriptors
  * 17.5 An Open Server, Version 1
  * 17.6 An Open Server, Version 2
  * 17.7 Summary
- Chapter 18. Terminal I/O
  * 18.1 Introduction
  * 18.2 Overview
  * 18.3 Special Input Characters
  * 18.4 Getting and Setting Terminal Attributes
  * 18.5 Terminal Option Flags
  * 18.6 stty Command
  * 18.7 Baud Rate Functions
  * 18.8 Line Control Functions
  * 18.9 Terminal Identification
  * 18.10 Canonical Mode
  * 18.11 Noncanonical Mode
  * 18.12 Terminal Window Size
  * 18.13 termcap, terminfo, and curses
  * 18.14 Summary
- Chapter 19. Pseudo Terminals
  * 19.1 Introduction
  * 19.2 Overview
  * 19.3 Opening Pseudo-Terminal Devices
  * 19.4 pty_fork Function
  * 19.5 pty Program
  * 19.6 Using the pty Program
  * 19.7 Advanced Features
  * 19.8 Summary
- Chapter 20. A Database Library
  * 20.1 Introduction
  * 20.2 History
  * 20.3 The Library
  * 20.4 Implementation Overview
  * 20.5 Centralized or Decentralized?
  * 20.6 Concurrency
  * 20.7 Building the Library
  * 20.8 Source Code
  * 20.9 Performance
  * 20.10 Summary
- Chapter 21. Communicating with a Network Printer
  * 21.1 Introduction
  * 21.2 The Internet Printing Protocol
  * 21.3 The Hypertext Transfer Protocol
  * 21.4 Printer Spooling
  * 21.5 Source Code
  * 21.6 Summary
- Appendix A. Function Prototypes
- Appendix B. Miscellaneous Source Code
  * B.1 Our Header File
  * B.2 Standard Error Routines
- Appendix C. Solutions to Selected Exercises

Product information
- Title: Advanced Programming in the UNIX® Environment, Third Edition
- Author(s): W. Richard Stevens, Stephen A. Rago
- Release date: May 2013
- Publisher(s): Addison-Wesley Professional
- ISBN: 9780321638014
