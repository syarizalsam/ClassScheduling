#include<bits/stdc++.h>
using namespace std;

struct Process {
    int ccode;     // course code   
    int duration;      // class duration
   int priority; // Priority of this process

};
// sorting the Process acc. to the priority
bool compare(Process a, Process b) {
   return (a.priority > b.priority);
}
void waitingtime(Process pro[], int n, int wt[]) {
   // Initial waiting time for a process is 0
   wt[0] = 0;
   // calculating waiting time
   for (int i = 1; i < n ; i++ )
      wt[i] = pro[i-1].duration + wt[i-1] ;
}
 // Function to calculate turn around time
void turnarround( Process pro[], int n, int wt[], int tat[]) {
   for (int i = 0; i < n ; i++)
      tat[i] = pro[i].duration + wt[i];
}
//Function to calculate average time
void avgtime(Process pro[], int n) {
   int wt[n], tat[n], total_wt = 0, total_tat = 0;
   waitingtime(pro, n, wt);
   turnarround(pro, n, wt, tat);
   cout << "\nProcesses "<< " Burst time " << " Waiting time " << " Turn around time\n";
 
   for (int i=0; i<n; i++) {
      total_wt = total_wt + wt[i];
      total_tat = total_tat + tat[i];
      cout << " " << pro[i].ccode << "\t\t" << pro[i].duration << "\t " << wt[i] << "\t\t " << tat[i] <<endl;
   }
   cout << "\nAverage waiting time = " << (float)total_wt / (float)n;
   cout << "\nAverage turn around time = " << (float)total_tat / (float)n;
}
void scheduling(Process pro[], int n) {

   sort(pro, pro + n, compare);
   cout<< "Order in which processes gets executed \n";
   for (int i = 0 ; i < n; i++)
      cout << pro[i].ccode <<" " ;
   avgtime(pro, n);
}
// main function
int main() {
   Process pro[] = {{2201,3,2}, {3401,2,3}, {1103,1,1}};
   int n = sizeof pro / sizeof pro[0];
   scheduling(pro, n);
   return 0;
}
