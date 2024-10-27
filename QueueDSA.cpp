#include <iostream>
#include <queue>
#include <string>

void displayQueue(std::queue<std::string> q) 
{
    if (q.empty()) 
    {
        std::cout << "Walang nakapila.\n";
        return;
    }
    
    std::cout << "Laman ng pila: \n";
    while (!q.empty()) 
    {
        std::cout << q.front() << std::endl;
        q.pop();
    }
}

int main() 
{
    std::queue<std::string> nameQueue;
    int choice;
    std::string name;

    do 
    {
        std::cout << "1. Add name\n";
        std::cout << "2. Pop name\n";
        std::cout << "3. Display contents\n";
        std::cout << "4. Exit program\n";
        std::cout << "Choose: ";
        std::cin >> choice;
        std::cin.ignore();

        switch (choice) 
        {
            case 1:
                std::cout << "Enter name to line up: ";
                std::getline(std::cin, name);
                nameQueue.push(name);
                std::cout << name << " added to queue.\n";
                break;

            case 2:
                if (!nameQueue.empty()) 
                {
                    std::cout << "Popped! " << nameQueue.front() << std::endl;
                    nameQueue.pop();
                } 
                else 
                {
                    std::cout << "How can you pop stuff if its empty?\n";
                }
                break;

            case 3:
                displayQueue(nameQueue);
                break;

            case 4:
                std::cout << "Exiting program...\n";
                break;

            default:
                std::cout << "wdym?\n";
        }
    } while (choice != 4);

    return 0;
}
