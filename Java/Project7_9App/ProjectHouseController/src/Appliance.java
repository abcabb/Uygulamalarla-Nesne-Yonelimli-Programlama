public class Appliance implements Controllable {

    @Override
    public void open() {
        System.out.println("Opened.");
    }

    @Override
    public void close() {
        System.out.println("Closed.");
    }

    @Override
    public void investigateSituation() {
        System.out.println("investigating.");
    }
    
}
