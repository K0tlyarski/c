//
//  main.cpp
//  peregruzka
//
//  Created by Вадим Котлярский on 19.09.2022.
//

#include <iostream>
#include <string>
using namespace std;

class Point{
private:
    int x,y;
public:
    Point(){
        x = 0;
        y = 0;
        
    }
    Point(int x, int y){
        this->x = x;
        this->y = y;
    }
    
    bool operator == (const Point &other){
        return this->x == other.x && this->y == other.y;
    }
    bool operator !=(const Point &other){
        return !(this->x == other.x && this->y == other.y);
    }
    
    Point operator +(const Point &other){
        Point tmp;
        tmp.x = this->x + other.x;
        tmp.y = this->y + other.y;
        return tmp;
    }
    
    int GetY(){
        return y;
    }
    int GetX(){
        return x;
    }
    void SetY(int y){
        this->y = y;
    }
    void SetX(int y){
        this->y = y;
    }
    void Print(){
        cout<<"x = "<<x<<" "<<"Y = "<<y<<endl;
    }
    
    
    
};

class MyClass{
    int* data;
    int size;
public:
    MyClass(int size){
        data = new int[size];
        for (int i = 0; i<size; i++) {
            data[i] = i;
        }
    }
    MyClass(const MyClass &other){
        this->size = other.size;
        this->data = new int[other.size];
        for (int i =0; i<other.size; i++) {
            this->data[i] = other.data[i];
        }
    }
    
    void operator = (const MyClass &other)
    {
        this->size = other.size;
        if (this->data != nullptr) {
            delete[] this->data;
        }
        this->data = new int[other.size];
        for (int i =0; i < other.size; i++) {
            this->data[i] = other.data[i];
        }
        

    }
    
    ~MyClass(){
        delete[] data;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
