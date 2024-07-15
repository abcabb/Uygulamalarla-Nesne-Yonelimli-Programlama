using StackApp.Contract;

namespace StackApp.Models;

public class ListStack : IStack
{
    private List<Object> _collection;
    private int _lastIndex => this._collection.Count - 1;

    public ListStack(){
        this._collection = new List<object>();
    }

    public ListStack(IEnumerable<String> collection) : this(){
        foreach(String item in collection){
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

    public void Push(object item)
    {
        this._collection.Add(item);
    }

}