# Introduction

In CPU scheduling, there are many criterias to check when considering the best scheduling algorithm such as throughput, turnaround time, waiting time, load average, and response time. In this project, we have chosen 3 different scheduling algorithms and the performance of each algorithm will be determined. It is best to choose the most effective algorithms out of all 3 to save resources.

Our chosen algorithms are  First Come First Serve (FCFS), Priority, and Shortest Job First (SJF) scheduling.<br>
•FCFS scheduling executes processes that arrive first in the queue and the first data that have been executed will leave the queue first.<br>
•Priority scheduling executes processes that have a higher priority first.<br>
•SJF scheduling executes processes that have a shorter burst time or duration.

# Consideration

We have considered a few scenarios that would provide more clarity for each scheduling algorithm and made our input accordingly.<br>
•In FCFS scheduling, it only depends on which class comes first in the array.<br>
•In priority scheduling, classes that have the same priority need to be considered.<br>
•In SJF scheduling, classes that have the same duration need to be considered.

The array to represent the courses and initialize it is as follows:
| Process | Arrival Time | Priority | Duration
| ------------- | ------------- | ------------- | ------------- |
| 2201 | 1 | 2 | 3 |
| 3401 | 2 | 3 | 2 |
| 1103 | 3 | 1 | 1 |


# Analysis

## FCFS Scheduling

First Come First Serve (FCFS) is a scheduling algorithm that actually plans the workers by the time they arrive. The job that comes first in the prepared queue will first get the CPU. The less time the job arrives, the sooner the CPU gets the job. FCFS scheduling will cause hunger problems if the first process's burst period is the longest of all the workers.

The data for FCFS scheduling is as follows:
| Process | Burst Time | Waiting Time | Turn Around Time
| ------------- | ------------- | ------------- | ------------- |
| 2201 | 3 | 0 | 3 |
| 3401 | 2 | 3 | 5 |
| 1103 | 1 | 5 | 6 |

•Average waiting time = 2.67<br>
•Average turnaround time = 4.67

First Come First Serve (FCFS) is where jobs are executed on a first come, first serve basis. Based on the result, it showed that it is poor in performance as average wait time is the highest. Its implementation is based on the FIFO queue, so the CPU is allocated to the processes in the order they are queued in the ready queue. Some processes have shorter durations than others but have to wait a long time for execution if a long process arrives first in the queue. So, FCFS is not a productive algorithm.

## Priority Scheduling(Non-Preemptive)

In Non-Preemptive Priority Scheduling there is a priority assigned to each process and processes are executed according to their priority and since it is non-preemptive so a process can't be preempted by another process in the midst of execution of a process. 

The data for priority scheduling is as follows:
| Process | Burst Time | Waiting Time | Turn Around Time
| ------------- | ------------- | ------------- | ------------- |
| 3401 | 2 | 0 | 2 |
| 2201 | 3 | 2 | 5 |
| 1103 | 1 | 5 | 6 |

•Average waiting time = 2.33<br>
•Average turnaround time = 4.33

Based on the result, it shows that priority scheduling is faster than fcfs, but slower than sjf. The program executes based on the number of priority assigned to them. In these cases, the classes that have the same priority, the program will execute according to which classes come first, so it is less efficient if longer duration classes come in the front which may slow down the process.

## Shortest Job First(SJF) scheduling (Non-preemptive)

In a non-preemptive SJF scheduling, the scheduler selects the process from the waiting queue with the least completion time and allocates the CPU to that job or process. Shortest Job First is more desirable than FIFO algorithm because SJF is more optimal as it reduces average wait time which will increase the throughput.

The data for SJF scheduling is as follows:
| Process | Arrival Time | Burst Time | Waiting Time | Turn Around Time
| ------------- | ------------- | ------------- | ------------- | ------------- |
| 2201 | 1 | 3 | 0 | 3 |
| 1103 | 3 | 1 | 1 | 2 |
| 3401 | 2 | 2 | 3 | 5 |

•Average waiting time = 1.33<br>
•Average turnaround time = 3.33

Based on the result, the average waiting time for the processes are the shortest. It can be said that this is the most efficient algorithm compared to the other two. It is considered as that due to the execution of processes according to its duration or burst time. Thus, reduces average waiting time and increases throughput.

# Conclusion

Based on the algorithm used, it shows that Shortest Job First(SJF) is the best way to execute class scheduling because of its efficiency and time-wise. It is an algorithm where it minimises average waiting and turnaround time while giving maximum throughput. In these cases, it is the best to use because the duration of the classes is already known in advance which makes it applicable. 
