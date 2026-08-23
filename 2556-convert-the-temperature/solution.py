class Solution:
    def convertTemperature(self, celsius: float) -> List[float]:
        converted = []
        Kelvin = celsius + 273.15
        Fahrenheit = celsius * 1.80 + 32.00
        converted.append(Kelvin)
        converted.append(Fahrenheit)
        return converted

 
        
