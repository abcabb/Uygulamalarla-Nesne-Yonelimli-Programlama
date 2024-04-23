public class MathHelper {
    public static Double add(double x, double y){
        return x+y;
    }
    public static Double substract(double x, double y){
        return x-y;
    }
    public static Double multiply(double x, double y){
        return x*y;
    }
    public static Double divide(double x, double y){
        if(y==0) throw new ArithmeticException(x + " cannot divided by zero.");
        else return x/y; 
    }
}
