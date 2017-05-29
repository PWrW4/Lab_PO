package com.main;

/**
 * Created by wojtasiq on 29.05.2017.
 */
public class LiczbaZespolona {
    double Re, Im;

    public double getRe(){
        return Re;
    }

    public double getIm(){
        return Im;
    }

    public LiczbaZespolona(double re, double im){
        Re = re;
        Im = im;
    }

    public String toString(){
        return "Re: " + Re + " Im: " + Im + "i";
    }


}
