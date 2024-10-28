//#include <iostream>
//
//using namespace std;
//
//struct Car {
//    int id;             
//    int engineCapacity; 
//
//    Car() : id(0), engineCapacity(0) {} 
//    Car(int id, int engineCapacity) : id(id), engineCapacity(engineCapacity) {}
//};
//
//class TaxiStand {
//private:
//    static const int MAX_SIZE = 10; 
//    Car departureQueue[MAX_SIZE];   
//    int size;                      
//
//public:
//    TaxiStand() : size(0) {}
//
//    void addCarToQueue(int id, int engineCapacity) {
//        if (id % 2 != 0) { 
//            cout << "Car with ID " << id << " is not ready for departure." << endl;
//            return;
//        }
//
//        if (size == MAX_SIZE) {
//            cout << "Queue is full. Cannot add more cars." << endl;
//            return;
//        }
//
//        int i;
//        for (i = size - 1; i >= 0 && departureQueue[i].engineCapacity > engineCapacity; i--) {
//            departureQueue[i + 1] = departureQueue[i];
//        }
//        departureQueue[i + 1] = Car(id, engineCapacity);
//        size++;
//
//        cout << "Car with ID " << id << " and engine capacity " << engineCapacity << " cc added to the queue." << endl;
//    }
//
//    void departCar() {
//        if (size == 0) {
//            cout << "No cars ready for departure." << endl;
//            return;
//        }
//
//        Car departingCar = departureQueue[0];
//        cout << "Departing car with ID " << departingCar.id << " and engine capacity " << departingCar.engineCapacity << " cc." << endl;
//
//        
//        for (int i = 1; i < size; i++) {
//            departureQueue[i - 1] = departureQueue[i];
//        }
//        size--;
//    }
//
//    void displayQueueSize() const {
//        cout << "Number of cars in the departure queue: " << size << endl;
//    }
//};
//
//int main() {
//    TaxiStand taxiStand;
//
//    
//    taxiStand.addCarToQueue(1024, 1600);
//    taxiStand.addCarToQueue(1025, 1800); 
//    taxiStand.addCarToQueue(1030, 1500);
//    taxiStand.addCarToQueue(1042, 1400);
//
//    int choice;
//    do {
//        cout << "Press 1 to depart a car, 2 to display queue size, 0 to exit: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            taxiStand.departCar();
//            break;
//        case 2:
//            taxiStand.displayQueueSize();
//            break;
//        case 0:
//            cout << "Exiting..." << endl;
//            break;
//        default:
//            cout << "Invalid choice. Try again." << endl;
//        }
//    } while (choice != 0);
//
//    return 0;
//}
