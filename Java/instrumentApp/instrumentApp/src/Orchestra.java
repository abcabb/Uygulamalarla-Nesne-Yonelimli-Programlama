public class Orchestra {
    private Instrument[] instruments = {new Guitar(), new Piano()};

    public void playAll(){
        for(Instrument inst : instruments){
            inst.start();
        }
    }
}
