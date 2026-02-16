#include <iostream>

class id {
    private:
        int id;

    public:
        char name;
        void setId(int id) {
            this->id = id;
        }

        int getId() {
            return id;
        }
};

int main() {
    id me = id();
    me.name = 'J';
    me.setId(123);

    std::cout << "Hello, World!" << std::endl;
    std::cout << me.name << ", " << me.getId() << std::endl; 
    return 0;
}