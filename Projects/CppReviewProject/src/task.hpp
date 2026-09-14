#include<string>

class Task
{
   public:
    Task(int id, const std::string& topic)
        : _id(id), _topic(topic) {}
    int GetId() const
    {
        return _id;
    }

    const std::string& GetTopic() const
    {
        return _topic;
    }    

    bool GetCompleted() const 
    {
        return _completed;
    }
    void markCompleted() 
    {
        _completed = true;
    }


   private:
    int _id;
    std::string _topic;
    bool _completed = false;
};
