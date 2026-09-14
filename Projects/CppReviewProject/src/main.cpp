#include"task.hpp"
#include<iostream>


int main()
{
    Task task1(1,"Task 1");
    int id = task1.GetId();
    const std::string& str =task1.GetTopic();
    bool com = task1.GetCompleted();
    std::cout << "Task ID: " << id << std::endl;
    std::cout << "Task Topic: " << str << std::endl;
    std::cout << "Task Completed: " << (com ? "Yes" : "No") << std::endl;
    task1.markCompleted();
    std::cout << "Task Completed after marking: " << (task1.GetCompleted() ? "Yes" : "No") << std::endl;
    return 0;
}