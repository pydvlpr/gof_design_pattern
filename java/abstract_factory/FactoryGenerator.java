package abstract_factory;

public class FactoryGenerator{
	
	public static AbstractDeviceFactory getFactory(FactoryType factoryType) {
		switch (factoryType) {
		case MOBILEFACTORY:
			return new MobileFactory();
		case LAPTOPFACTORY:
			return new LaptopFactory();
		}
		return null;
	}
}
