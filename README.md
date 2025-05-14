# OSSP-INDIVIDUAL-ASSIGNMENT
   #### NAAME   Fikir Yilkal
   #### ID   1601514
   #### DEPARTEMENT   software enginering
## Debian OS installation
          The document explains the installation process of the Debian operating system in detail.It begins with an introduction to Debian, including its background, 
          motivation, and objectives. Hardware and software requirements are clearly outlined for different use cases. Step-by-step installation instructions are provided 
          using VirtualBox, including VM setup, ISO attachment, and OS configuration. It also addresses common problems like network issues and performance lags, along with 
          their solutions. Various file systems supported by Debian such as ext4, Btrfs, and NTFS are discussed. The advantages and disadvantages of using Debian in a 
          virtualized environment are analyzed. The file concludes with recommendations and future directions for improved Debian deployment.
## VERTUALIZATION
          The document explains the concept of virtualization, its benefits, and how it functions. It defines virtualization as creating virtual versions of physical 
          components like operating systems or servers. The advantages include better resource utilization, cost savings, improved security, and flexibility. It also 
          describes how hypervisors manage virtual machines, distinguishing between Type 1 and Type 2 hypervisors.
## System call implementation          
          The document provides an in-depth explanation of how to implement the munmap() system call, which is used to unmap a region of memory previously mapped with 
          mmap(). It starts with the user-space wrapper function that validates input and makes the system call using low-level assembly instructions. Then it details the 
          kernel-space implementation, covering argument validation, memory management locking, locating virtual memory areas (VMAs), permission checks, and the unmapping 
          process. It explains how the kernel removes page table entries, syncs with files if necessary, and updates memory statistics. Key security concerns and challenges 
          such as concurrency, TLB invalidation, and privilege escalation are addressed. Finally, it outlines how to add a new system call to the Linux kernel, including 
          editing kernel source files, updating syscall tables, recompiling the kernel, and testing.







