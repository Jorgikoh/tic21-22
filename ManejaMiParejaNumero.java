package MiPrim;

public class ManejaMiParejaNumero {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int suma;
		MiParejaNumeros objeto1;
		objeto1= new MiParejaNumeros(5,8);//Instancio
		MiParejaNumeros objeto2;
		objeto2=new MiParejaNumeros(1,4);
		
		objeto1.setNum1(6);
		objeto1.setNum2(4);
		suma=objeto1.devuelveSuma();
		objeto2.setNum1(4);
		objeto2.setNum2(1);
		System.out.println("suma de la pareja 1: ");
		System.out.println(suma);
		System.out.println("suma de la pareja 1");
		System.out.println();
	}

}
