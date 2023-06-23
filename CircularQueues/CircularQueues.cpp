#include <iostream>
using namespace std;

class queues {
    int FRONT, REAR, MAX = 5; // elment di ganti menjadi MAX
    int queues_array[5];
public:
    queues() {
        FRONT = -1;
        REAR = -1;
    }
    void insert() {
        int num;
        cout << "enter a number";
        cin >> num;
        cout << endl;

        // cek apakh antrian penuh
        if ((FRONT == 0 && REAR == MAX - 1) || (FRONT == REAR + 1)) {
            cout << "\nQueue overFlow\n";
            return;
        }
        // cek apakah antrain kosong 
        if (FRONT == 0) {
            FRONT == 0;
            REAR == 0;
        }
        else {
            // jika Rear berada di posisi terakhir array, kemabali ke awal array
            if (REAR == MAX - 1)
                REAR = 0;
            else
                REAR = REAR + 1;
        }
        queues_array[REAR] = num;
    }
    void remove() {
        //cek apakah antrian ksong
        if (FRONT == -1) {
            cout << " Queue underFlow\n";
            return;
        }
        cout << "\n The element deleted from ithe queue is: " << queues_array[FRONT] << "\n";
        //jika antrian hanya memiliki satu element
        if (FRONT == -1) {
            FRONT == 0;
            REAR == 0;
        }
        else {
            //JIka elemnt yang di hapsu posisi terakhir kemabli ke array awal
            if (FRONT == -1)
                REAR == 0;
            else
                FRONT = FRONT + 1;
        }
    }
void display() {
        int FRONT_position = FRONT;
        int REAR_position = REAR;

        //Cek apkaah antrian kosong
        if (FRONT == -1) {
            cout << "Queue is empty\n";
            return;
        }

        cout << "/nElement in the queue are....\n";

  
};

int main()
{
    std::cout << "Hello World!\n";
}

