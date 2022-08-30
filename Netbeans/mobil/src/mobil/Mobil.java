/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package mobil;

/**
 *
 * @author Singgih17
 */
public class Mobil {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Utility m = new Utility();
        m.produsen = "Toyota";
        m.model = "Agya";
        m.kubikasi = 1500;
        m.tahun_produksi = 2013;
        m.tangki = 100;
        m.wm("Singgih17",16);
        m.maju(100);
        m.isiBensin(10);
        m.bensinTerpakai(30);
    }
    
}
