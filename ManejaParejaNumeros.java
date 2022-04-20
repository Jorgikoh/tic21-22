package MiPrim;

public class ManejaParejaNumeros {
	
	public static void main(String[]args) {
		//Todo Aunto-generated method stub
		ParejaNumeros MisNumeros;
		int num1=3;
		int num2=5;
		MisNumeros= new ParejaNumeros(num1,num2);
		System.out.println("La suma vale ");
		System.out.print(MisNumeros.devuelveSuma());
		System.out.println("\nLa resta vale ");
		System.out.print(MisNumeros.devuelveResta());
		System.out.println("\nLa multiplicacion vale ");
		System.out.print(MisNumeros.devuelveMultiplicacion());
		System.out.println("\nLa division vale ");
		System.out.print(MisNumeros.devuelveDivision());
	
	}
	
		
	
			
	

	

}
