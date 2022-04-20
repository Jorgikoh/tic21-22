package MiPrim;

public class ManejaCircunferencias {
	
	public static void main(String[] args) {
		
		Circunferencia miCirculito;
		Circunferencia Circulito;
		miCirculito=new Circunferencia(4.5, 7, 9);
		System.out.println("miCirculito: ");
		System.out.println("cordenada x del centro; "+miCirculito.getCentro_x());
		System.out.println("cordenada y del centro; "+miCirculito.getCentro_y());
		System.out.println("Radio; "+miCirculito.getRadio());
		System.out.println("area; "+miCirculito.devuelveArea());
		System.out.println("longitud; "+miCirculito.devuelveLongitud());
	}
	
}