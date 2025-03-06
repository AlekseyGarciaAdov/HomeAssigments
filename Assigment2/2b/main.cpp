#include <iostream>  
#include <sstream>   
#include <string>    

class Stack {
private:
    double* stack; 
    int top;       
    int capacity;  

public:
    Stack(int size) : capacity(size), top(-1) { 
        stack = new double[capacity]; 
    }
    
    ~Stack() { 
        delete[] stack; 
    }
    
    void push(double value) { 
        if (top < capacity - 1) { 
            stack[++top] = value; 
        } else {
            std::cerr << "Ошибка: стек переполнен!" << std::endl;
        }
    }
    
    double pop() { 
        if (top >= 0) { 
            return stack[top--]; 
        } else {
            std::cerr << "Ошибка: стек пуст!" << std::endl;
            return 0.0;
        }
    }
    
    bool isEmpty() const { 
        return top == -1;
    }
};


double evaluateRPN(const std::string& expression) {
    std::istringstream iss(expression); 
    std::string token; 
    Stack stack(100); 
    while (iss >> token) { 
        if (isdigit(token[0]) || (token.length() > 1 && token[0] == '-')) {
            stack.push(std::stod(token)); 
        } else { 
            double b = stack.pop(); 
            double a = stack.pop(); 
            
            if (token == "+") stack.push(a + b); 
            else if (token == "-") stack.push(a - b); 
            else if (token == "*") stack.push(a * b); 
            else if (token == "/") { 
                if (b != 0) stack.push(a / b);
                else {
                    std::cerr << "Ошибка: деление на ноль!" << std::endl;
                    return 0;
                }
            } else {
                std::cerr << "Ошибка: неизвестный оператор " << token << std::endl;
                return 0;
            }
        }
    }
    
    return stack.pop();
}

int main() {
    std::string expression;
    std::cout << "Введите выражение в обратной польской нотации: ";
    std::getline(std::cin, expression); 
    
    double result = evaluateRPN(expression); 
    std::cout << "Результат: " << result << std::endl; 
    
    return 0;
}
