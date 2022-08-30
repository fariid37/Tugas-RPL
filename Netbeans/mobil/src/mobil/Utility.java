/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package mobil;

/**
 *
 * @author Singgih17
 */
public class Utility {
  public String produsen;
  public String model;
  public int tahun_produksi;
  public int kubikasi;
  public double tangki;

  public void wm(String nama, int absen) {
    System.out.println("===================================");
    System.out.print("Nama         : " + nama + "\nAbsen        : " + absen);
    System.out.print("\nModel        : " + this.model + "\nProdusen     : " + this.produsen + "\nThn Produksi : "
        + this.tahun_produksi + "\nKubikasi     : " + this.kubikasi + "\nIsi Tangki   : " + (int) this.tangki);
    System.out.println("\n===================================\n");
  }

  public void maju(double jarak) {
    System.out.println(this.model + " Berjalan sejauh " + jarak + " meter");
  }

  public void isiBensin(double isi) {
    System.out.println(this.model + " Bensin bertambah " + isi + " Liter");
    System.out.println(this.model + " Sisa bensin sat ini " + (this.tangki + isi) + " Liter");
    this.tangki = this.tangki + isi;
  }

  // public double getSisaBensin() {
  // return this.tangki; //gak tau gunane lurr
  // }

  public void bensinTerpakai(double terpakai) {
    System.out.println(this.model + " Bensin terpakai " + terpakai + " Liter");
    System.out.println(this.model + " Sisa bensin saat ini " + (this.tangki - terpakai) + " Liter");
  }
}
