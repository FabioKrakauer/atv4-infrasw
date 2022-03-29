#include <iostream>
#include <queue>

using namespace std;

void readCin(int qntdProcess);
struct Process { 
    int arrivalTime;
    int durationTime;
};

queue<Process> processQueue;
int main() {
    int qntProcess = 0;
    int quantum = 0;
    
    cin >> qntProcess;
    cin >> quantum;

    readCin(qntProcess);
    for(int i = 0; i < qntProcess; i++) {
        cout << processQueue.front().arrivalTime;
        processQueue.pop();
    }

}
void readCin(int qntdProcess) {
    for(int i = 0; i < qntdProcess; i++) {
        int arrivalTime = 0;
        int duration = 0;

        cin >> arrivalTime;
        cin >> duration;

        Process process;
        process.arrivalTime = arrivalTime;
        process.durationTime = duration;

        processQueue.push(process);

    }
}
void roundRobin(queue<Process> list, int quantum) {

}