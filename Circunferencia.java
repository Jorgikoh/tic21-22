package MiPrim;

public class Circunferencia{
	 private double radio;
	 private MiParejaNumeros centroCirculo;
	/**
	 * @param d
	 * @param centro_x
	 * @param centro_y
	 */
	public Circunferencia(double d, int centro_x, int centro_y) {
		super();
		centroCirculo=new MiParejaNumeros(centro_x,centro_y);
		this.radio = d;
		
	}
	/**
	 * @return the radio
	 */
	public double getRadio() {
		return radio;
	}
	/**
	 * @param radio the radio to set
	 */
	public void setRadio(double radio) {
		this.radio = radio;
	}
	/**
	 * @return the centro_x
	 */
	public int getCentro_x() {
		return(centroCirculo.getNum1());
	}
	/**
	 * @param centro_x the centro_x to set
	 */
	public void setCentro_x(int centro_x) {
		centroCirculo.setNum1(centro_x);
	}
	/**
	 * @return the centro_y
	 */
	public int getCentro_y() {
		return (centroCirculo.getNum2());
	}
	/**
	 * @param centro_y the centro_y to set
	 */
	public void setCentro_y(int centro_y) {
		centroCirculo.setNum2(centro_y);
	}
	public double devuelveArea(){
		double area;
		area=Math.PI*Math.pow(radio, 2);
		
		return area;
	
	}
	public double devuelveLongitud(){
		double longitud;
		longitud=2*Math.PI*radio;
		return longitud;
	}
	
}