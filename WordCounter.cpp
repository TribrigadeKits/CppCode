#include <iostream>


unsigned long string_counter(std :: string str) {
    unsigned long count = 0;
    for (unsigned long i = 0; i < str.length(); i++)
    {
        if (str == "")
            return 0;
        if (str[i] == ' ')
        {
            count++;
        }    
    }
    return count + 1;
}

int main() {
    std :: string str = "";
    //std :: getline(std::cin, str);
    // int count = string_counter(str);
    // std :: cout << count << std :: endl;
    for (int i = 1; i < 100; i++)
    {
        std :: cout << (char)i << " " << std :: endl;
    }
    
    return 0;
}