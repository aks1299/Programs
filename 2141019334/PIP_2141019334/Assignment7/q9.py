vehicles = {"Bicycle", "Scooter", "Car", "Bike", "Truck", "Bus", "Rickshaw"}
heavyVehicles = {"Truck", "Bus"}
lightVehicles = {"Rickshaw", "Scooter", "Bike", "Bicycle"}
#1
lytVehicles = vehicles - heavyVehicles
print(lytVehicles)
#2
hvyVehicles = vehicles - lightVehicles
print(hvyVehicles)
#3
averageWeightVehicles = lytVehicles & hvyVehicles
print(averageWeightVehicles)
#4
transport = lightVehicles | heavyVehicles
print(transport)
#5
transport.add("Car")
print(transport)
#6
for i in vehicles:
    print(i)
#7
len(vehicles)
#8
min(vehicles)
#10
set.union(vehicles, lightVehicles, heavyVehicles)