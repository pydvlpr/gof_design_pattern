package abstract_factory;

public interface AbstractDeviceFactory {
	
	abstract Device getGadget(DeviceType deviceType);
	 
}
