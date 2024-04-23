public class Piano implements Instrument, KeyboardInstrument{

    @Override
    public void start() {
        System.out.println("Playing piano...");
    }

    @Override
    public void press() {
        System.out.println("Buttons has been cleaned.");
    }
    
}
