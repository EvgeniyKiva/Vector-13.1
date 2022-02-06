#include <iostream>
#include <vector>


int main() {
    std::vector <int> vec{};
    int number_of_elements;
    int element;
    std:: cin >> number_of_elements;
    for (int i=0; i<number_of_elements; i++){
        std:: cin>> element;
        vec.push_back(element);
    }
    std:: cout << " Which element is superfluous" << std::endl;
    std::cin >> element;
    for (int i=0; i<number_of_elements; i++){
        if (vec[i]==element){
            vec.resize (i);
        }
        else{
            std::cout << vec [i] << " ";
        }

    }

}
