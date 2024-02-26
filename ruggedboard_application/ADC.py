import mraa
import time
print(mraa.getVersion())
 
while True:

    x = mraa.Aio(6)
 
    print(x.read())
 
    print("%.5f" % x.readFloat())
    time.sleep(1)


