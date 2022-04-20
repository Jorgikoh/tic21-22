package MiPrim;

public class ManejaFecha {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Fecha fecha1;
		Fecha fecha2;
		fecha1=new Fecha(6,8,2004);
		fecha2=new Fecha(30,6,2004);
				
		if(fecha1.esPosterior(fecha2)==true) {
			System.out.println("La fecha1 es posterior a la fecha 2");
			
		}
		else {
			System.out.println("La fecha1 es posterior a la fecha 2");
			
		}
	}

}
