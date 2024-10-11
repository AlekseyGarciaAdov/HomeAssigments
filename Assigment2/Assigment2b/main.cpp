/* Garcia Adov Aleksey    st135738@student.spbu.ru     "Assigment2b"*/

#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>

class Stack {
private:
    int* data;
    int top;
    int capacity;

public:
    Stack(int size) : capacity(size), top(-1) {
        data = new int[capacity];
    }

    ~Stack() {
        delete[] data;
    }

    void push(int value) {
        if (top < capacity - 1) {
            data[++top] = value;
        } else {
            std::cerr << "Стек переполнен!" << std::endl;
        }
    }

    int pop() {
        if (top >= 0) {
            return data[top--];
        } else {
            std::cerr << "Стек пуст!" << std::endl;
            return 0; // или выбросить исключение
        }
    }

    int peek() const {
        if (top >= 0) {
            return data[top];
        }
        return 0; // или выбросить исключение
    }

    bool isEmpty() const {
        return top == -1;
    }
};

int evaluateRPN(const char* expression) {
    Stack stack(100); // Размер стека

    const char* token = strtok(const_cast<char*>(expression), " ");

    while (token != nullptr) {
        if (isdigit(token[0])) {
            // Если это число, добавляем его в стек
            stack.push(atoi(token));
        } else {
            // Если это оператор, извлекаем два числа из стека
            int b = stack.pop();
            int a = stack.pop();

            switch (token[0]) {
                case '+':
                    stack.push(a + b);
                    break;
                case '-':
                    stack.push(a - b);
                    break;
                case '*':
                    stack.push(a * b);
                    break;
                case '/':
                    if (b != 0) {
                        stack.push(a / b);
                    } else {
                        std::cerr << "Ошибка: деление на ноль!" << std::endl;
                        return 0;
                    }
                    break;
                default:
                    std::cerr << "Неизвестный оператор: " << token << std::endl;
                    return 0;
            }
        }
        token = strtok(nullptr, " ");
    }

    return stack.peek();
}

int main() {
    const char* expression = "3 4 + 2 * 7 /"; // Пример выражения в RPN
    int result = evaluateRPN(expression);
    std::cout << "Результат: " << result << std::endl;

    return 0;
}
