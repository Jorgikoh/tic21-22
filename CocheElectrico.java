package MiPrim;

public class CocheElectrico extends Coche{
	private double potencia;
	public CocheElectrico(String nombre, String medio) {
		super(nombre, medio);
		// TODO Auto-generated constructor stub
	}
	/**
	 * @return the potencia
	 */
	public double getPotencia() {
		return potencia;
	}
	/**
	 * @param potencia the potencia to set
	 */
	public void setPotencia(double potencia) {
		this.potencia = potencia;
	}

}
