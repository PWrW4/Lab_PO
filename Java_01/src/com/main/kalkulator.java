package com.main;

import com.main.LiczbaZespolona;

public class kalkulator {
	public static double dodaj(double x,double y){
		return x+y;
	}

	public static double odejmij(double x,double y){
		return x-y;
	}

	public static double podziel(double x,double y){
		if(y==0){
			System.out.println("nie dziel prosz� przez 0");
			return 0;
		}
		return x/y;
	}
	
	public double pomnorz(double x,double y){
		return x*y;
	}


	public static LiczbaZespolona dodaj(LiczbaZespolona A, LiczbaZespolona B){
		return new LiczbaZespolona(A.getRe()+ B.getRe(),A.getIm()+B.getIm());
	}

	public static LiczbaZespolona odejmij(LiczbaZespolona A, LiczbaZespolona B){
		return new LiczbaZespolona(A.getRe()- B.getRe(),A.getIm() - B.getIm());
	}

	public static LiczbaZespolona pomnorz(LiczbaZespolona A, LiczbaZespolona B){
		return new LiczbaZespolona((A.getRe()* B.getRe())-(A.getIm()*B.getIm()),(A.getRe()*B.getIm())+(A.getIm() * B.getRe()));
	}

	public static LiczbaZespolona podziel(LiczbaZespolona A, LiczbaZespolona B){
		return new LiczbaZespolona(((A.getRe()* B.getRe())+(A.getIm()*B.getIm()))/((B.getRe()*B.getRe())+(B.getIm()*B.getIm())),((A.getIm()* B.getRe())-(A.getRe()*B.getIm()))/((B.getRe()*B.getRe())+(B.getIm()*B.getIm())));
	}
}
