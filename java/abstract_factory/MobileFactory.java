package abstract_factory;

public class MobileFactory implements AbstractDeviceFactory{

	@Override
	public Device getGadget(DeviceType deviceType) {
		switch (deviceType) {
		case NOKIA: 
			return new Nokia("8gb", "Intel");
		case ONEPLUS:
			return new OnePlus("8gb","qualcom");
		default:
			return new DeviceNotAvailable("null","null");		
		}
	}
	
}
