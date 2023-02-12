import time
t = time.localtime()
curr_time = (time.strftime("%H",t))
if(int(curr_time)>=0 and int(curr_time) <12):
    print("Good Morning!")
elif(int(curr_time)>=12 and int(curr_time)<16) :
    print("Good Afternoon")
else:
    print("Good Evening")