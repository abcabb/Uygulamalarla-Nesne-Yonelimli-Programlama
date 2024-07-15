using StackApp.Contract;

namespace StackApp.Models;

public class LinkedListStack : IStack
{
    private LinkedList<Object> _collection;

    public LinkedListStack(){
        this._collection = new LinkedList<object>();
    }

    public LinkedListStack(IEnumerable<int> collection) : this(){
        foreach(var item in collection){
            Push(item);
        }
    }

    public object Peek()
    {
        return this._collection.First.Value;
    }

    public object Pop()
    {
        var temp = this._collection.First.Value;
        this._collection.RemoveFirst();
        return temp;
    }

    public void Push(object item)
    {
        this._collection.AddFirst(item);
    }
}