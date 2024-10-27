#include <iostream>
#include <stack>
#include <string>

void displayStack(std::stack<std::string> s) 
{
    if (s.empty()) 
    {
        std::cout << "Empty stack\n";
        return;
    }
    
    std::cout << "Here's the contents of this specific stack.\n";
    while (!s.empty()) 
    {
        std::cout << s.top() << std::endl;
        s.pop();
    }
}

int main() 
{
    std::stack<std::string> nameStack;
    int choice;
    std::string name;

    do 
    {
        std::cout << "\n--- Stack Menu ---\n";
        std::cout << "1. Add name\n";
        std::cout << "2. Pop name\n";
        std::cout << "3. Display contents\n";
        std::cout << "4. Exit\n";
        std::cout << "Choose 1: ";
        std::cin >> choice;
        std::cin.ignore();

        switch (choice) 
        {
            case 1:
                std::cout << "Enter name to push on stack: ";
                std::getline(std::cin, name);
                nameStack.push(name);
                std::cout << name << " added to stack.\n";
                break;

            case 2:
                if (!nameStack.empty()) 
                {
                    std::cout << "Popped! " << nameStack.top() << std::endl;
                    nameStack.pop();
                } 
                else 
                {
                    std::cout << "How can you pop if stack is empty?\n";
                }
                break;

            case 3:
                displayStack(nameStack);
                break;

            case 4:
                std::cout << "Exiting program...\n";
                break;

            default:
                std::cout << "wdym?\n";
        }
    } 
    while (choice != 4);
  
    return 0;
}
