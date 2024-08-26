namespace StackApp.Contract;

public interface IStack<T>{
    void Push(T item);
    Object Pop();
    Object Peek();
}