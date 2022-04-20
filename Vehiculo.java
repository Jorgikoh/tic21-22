package MiPrim;

public class Vehiculo {
	private String nombre;
	private String medio;
	private double velocidad;
	private int capacidad;
	private int ruedas;
	private int puertas;
	/**
	 * @param nombre
	 * @param medio
	 */
	public Vehiculo(String nombre, String medio) {
		super();
		this.nombre = nombre;
		this.medio = medio;
	}
	/**
	 * @return the nombre
	 */
	public String getNombre() {
		return nombre;
	}
	/**
	 * @param nombre the nombre to set
	 */
	public void setNombre(String nombre) {
		this.nombre = nombre;
	}
	/**
	 * @return the medio
	 */
	public String getMedio() {
		return medio;
	}
	/**
	 * @param medio the medio to set
	 */
	public void setMedio(String medio) {
		this.medio = medio;
	}
	/**
	 * @return the velocidad
	 */
	public double getVelocidad() {
		return velocidad;
	}
	/**
	 * @param velocidad the velocidad to set
	 */
	public void setVelocidad(double velocidad) {
		this.velocidad = velocidad;
	}
	/**
	 * @return the capacidad
	 */
	public int getCapacidad() {
		return capacidad;
	}
	/**
	 * @param capacidad the capacidad to set
	 */
	public void setCapacidad(int capacidad) {
		this.capacidad = capacidad;
	}
	/**
	 * @return the ruedas
	 */
	public int getRuedas() {
		return ruedas;
	}
	/**
	 * @param ruedas the ruedas to set
	 */
	public void setRuedas(int ruedas) {
		this.ruedas = ruedas;
	}
	/**
	 * @return the puertas
	 */
	public int getPuertas() {
		return puertas;
	}
	/**
	 * @param puertas the puertas to set
	 */
	public void setPuertas(int puertas) {
		this.puertas = puertas;
	}
	
}
