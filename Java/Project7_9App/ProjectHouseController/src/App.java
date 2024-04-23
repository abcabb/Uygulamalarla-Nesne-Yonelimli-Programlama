public class App {
    public static void main(String[] args) throws Exception {
        Appliance app1 = new Appliance();
        app1.open();
        app1.close();
        app1.investigateSituation();

        Light app2 = new Light();
        app2.open();
        app2.specialLights();

        Thermostat app3 = new Thermostat();
        app3.adjustTemparature();

        SecuritySystem app4 = new SecuritySystem();
        app4.alarmAlert();
        app4.checkCameras();
    }
}
