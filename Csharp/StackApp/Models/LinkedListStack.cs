using StackApp.Contract;

namespace StackApp.Models;

public class LinkedListStack<T> : IStack<T>
{
    private LinkedList<T> _collection;

    public LinkedListStack(){
        this._collection = new LinkedList<T>();
    }

    public LinkedListStack(IEnumerable<T> collection) : this(){
        foreach(T item in collection){
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

    public void Push(T item)
    {
        this._collection.AddFirst(item);
    }
}