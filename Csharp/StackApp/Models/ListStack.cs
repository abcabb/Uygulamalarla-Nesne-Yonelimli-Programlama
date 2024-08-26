using StackApp.Contract;

namespace StackApp.Models;

public class ListStack<T> : IStack<T>
{
    private List<T> _collection;
    private int _lastIndex => this._collection.Count - 1;

    public ListStack(){
        this._collection = new List<T>();
    }

    public ListStack(IEnumerable<T> collection) : this(){
        foreach(T item in collection){
            Push(item);
        }
    }

    public object Peek()
    {
        return this._collection[_lastIndex];
    }

    public object Pop()
    {
        var temp = this._collection[_lastIndex];
        this._collection.RemoveAt(_lastIndex);
        return temp;
    }

    public void Push(T item)
    {
        this._collection.Add(item);
    }

}