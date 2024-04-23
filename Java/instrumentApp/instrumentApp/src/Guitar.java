public class Guitar implements Instrument, ElectronicInstrument{

    @Override
    public void start() {
        System.out.println("Playing guitar.");
    }

    public void adjustTrim(){
        System.out.println("The trim has been adjusted.");
    }

    @Override
    public void tune() {
        System.out.println("Tune adjusted");
    }
}