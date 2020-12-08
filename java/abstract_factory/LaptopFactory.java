package abstract_factory;

public class LaptopFactory implements AbstractDeviceFactory{

	@Override
	public Device getGadget(DeviceType deviceType) {
		switch (deviceType) {
		case HP: 
			return new HP("8gb", "Intel", "Nvidia");
		case DELL:
			return new Dell("8gb","Intel","Nvidia");
		default:
			return new DeviceNotAvailable("null","null");
		}
	}
	
}
