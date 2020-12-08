package abstract_factory;

public class DeviceNotAvailable extends Device{
	private String ram;
	private String processor;
	
	public DeviceNotAvailable(String ramSize, String processorType) {
		this.ram = ramSize;
		this.processor = processorType;
	}

	@Override
	public String getDetails() {
		return "This kind of device is not available."; 
	}
	
	@Override
	public String toString() {
		return "Device not available.";
	}
}
