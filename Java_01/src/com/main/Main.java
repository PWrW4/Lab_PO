package com.main;

public class Main {

    public static void main(String[] args) {
        LiczbaZespolona Z = new LiczbaZespolona(1,2);
        LiczbaZespolona X = new LiczbaZespolona(2,4);

        System.out.println(kalkulator.dodaj(Z,X).toString());
        System.out.println(kalkulator.odejmij(Z,X).toString());
        System.out.println(kalkulator.pomnorz(Z,X).toString());
        System.out.println(kalkulator.podziel(Z,X).toString());

        }
}
