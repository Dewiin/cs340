#include "SimOS.h"

/*
The parameters specify number of hard disks in the simulated computer and amount of memory.
Disks enumeration starts from 0.
sizeOfOS specifies the size of the OS process. It has the PID of 1, priority of 0, and resides in the very beginning of memory.
*/
SimOS::SimOS(int numberOfDisks, unsigned long long amountOfRAM, unsigned long long sizeOfOS) {

}

/*
Creates a new process with the specified priority in the simulated system. The new process takes place in the ready-queue or immediately 
starts using the CPU.
Every process in the simulated system has a PID. Your simulation assigns PIDs to new processes starting from 2 (1 is reserved for the OS) and increments it by one for each new process. Do not reuse PIDs of the terminated processes.
For example, the command NewProcess(1000, 5) means that a new process with priority level 5 should be created and it requires 1000 bytes of memory.
NewProcess returns true if a new process was successfully created and false if otherwise. One of the reasons a process wasn’t created is insufficient free memory in the system.
*/
bool SimOS::NewProcess(unsigned long long size, int priority) {

}

/*
The currently running process forks a child. The child's priority and size are inherited from the parent. The child is placed in the end of the ready-queue.
SimFork() returns true if a new process was successfully created and false if otherwise. One of the reasons a process wasn’t created is insufficient free memory in the system.
The OS process (with PID 1) ignores SimFork instruction (does nothing).
*/
bool SimOS::SimFork() {

}

/*
The process that is currently using the CPU. Make sure you release the memory used by this process immediately. If its parent is already waiting, the process terminates immediately and the parent becomes runnable (goes to the ready-queue or CPU). If its parent hasn't called wait yet, the process turns into zombie.
To avoid the appearance of the orphans, the system implements the cascading termination. Cascading termination means that if a process terminates, all its descendants terminate with it. 
The OS process (with PID 1) ignores SimExit instruction (does nothing).
*/
void SimOS::SimExit() {

}

/*
The process wants to pause and wait for any of its child processes to terminate. Once the wait is over, the process goes to the end of the ready-queue or the CPU. If the zombie-child already exists, the process proceeds right away (keeps using the CPU) and the zombie-child disappears. If more then one zombie-child exists, the system uses one of them (any!) to immediately restart the parent and other zombies keep waiting for the next wait from the parent.
The OS process (with PID 1) ignores SimWait instruction (does nothing).
*/
void SimOS::SimWait() {

}

/*
Currently running process requests to read the specified file from the disk with a given number. The process issuing disk reading requests immediately stops using the CPU, even if the ready-queue is empty.
The OS process (with PID 1) ignores DiskReadRequest instruction (does nothing).
*/
void SimOS::DiskReadRequest(int diskNumber, std::string fileName) {

}

/*
A disk with a specified number reports that a single job is completed. The served process should return to the ready-queue or immediately start using the CPU (depending on the priority).
*/
void SimOS::DiskJobCompleted(int diskNumber) {

}

/*
GetCPU returns the PID of the process currently using the CPU.
*/
int SimOS::GetCPU() {

}

/*
GetReadyQueue returns the vector with PIDs of processes in the ready-queue in any order.
*/
std::vector<int> SimOS::GetReadyQueue() {

}

/*
GetMemory returns MemoryUsage vector describing locations of all processes in memory.
Terminated “zombie” processes don’t use memory, so they don’t contribute to memory usage.
Processes appear in the MemoryUsage vector in the same order they appear in memory (from low addresses to high).
*/
MemoryUse SimOS::GetMemory() {

}

/*
GetDisk returns an object with PID of the process served by specified disk and the name of the file read for that process. If the disk is idle, GetDisk returns the default FileReadRequest object (with PID 0 and empty string in fileName)
*/
FileReadRequest SimOS::GetDisk(int diskNumber) {

}

/*
GetDiskQueue returns the I/O-queue of the specified disk starting from the “next to be served” process.
*/
std::queue<FileReadRequest> SimOS::GetDiskQueue(int diskNumber) {

}