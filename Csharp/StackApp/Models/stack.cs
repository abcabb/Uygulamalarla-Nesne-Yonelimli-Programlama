using System.Diagnostics.Contracts;
using StackApp.Contract;

namespace StackApp.Models;

//ABSTRACTİON (SOYUTLAMA)
public class Stack<T> : IStack<T>
{
    private IStack<T> _stack;

    public Stack()
    {
        _stack = new StackApp.Models.LinkedListStack<T>();
    }

    public Stack(IEnumerable<T> collection){
        _stack = new StackApp.Models.LinkedListStack<T>(collection);
    }

    public object Peek()
    {
        return _stack.Peek();
    }

    public object Pop()
    {
        return _stack.Pop();
    }

    public void Push(T item)
    {
        _stack.Push(item);
    }
}