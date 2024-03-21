public class App {
    public static void main(String[] args) throws Exception {
        Tabung tabung = new Tabung("Tabung");
        Kubus kubus = new Kubus("Kubus");
        Balok balok = new Balok("Balok");

        balok.inputNilai();
        balok.luasPermukaan();
        balok.volume();
        System.out.println();

        kubus.inputNilai();
        kubus.luasPermukaan();
        kubus.volume();
        System.out.println();

        tabung.inputNilai();
        tabung.luasPermukaan();
        tabung.volume();
        System.out.println();
    }
}
