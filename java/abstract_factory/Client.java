// example adapted from CodeSpace at https://www.youtube.com/watch?v=j50FusMmUMw
package abstract_factory;

public class Client {
	public static void main(String[] args) {
		Device dell = FactoryGenerator.getFactory(FactoryType.LAPTOPFACTORY).getGadget(DeviceType.DELL);
		System.out.println(dell.getDetails());
		
		Device nokia = FactoryGenerator.getFactory(FactoryType.MOBILEFACTORY).getGadget(DeviceType.NOKIA);
		System.out.println(nokia.getDetails());
	
		Device oneplus = FactoryGenerator.getFactory(FactoryType.MOBILEFACTORY).getGadget(DeviceType.ONEPLUS);
		System.out.println(oneplus.getDetails());
		
		Device nil = FactoryGenerator.getFactory(FactoryType.MOBILEFACTORY).getGadget(DeviceType.DELL);
		System.out.println(nil.getDetails());
		}
}

