package com.main;

public class kalkulator {
	public double dodaj(double x,double y){
		return x+y;
	}
	
	public double odejmij(double x,double y){
		return x-y;
	}
	
	public double podziel(double x,double y){
		if(y==0){
			System.out.println("nie dziel prosz� przez 0");
			return 0;
		}
		return x/y;
	}
	
	public double pomnorz(double x,double y){
		return x*y;
	}
}
