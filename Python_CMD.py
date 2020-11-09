  # -*- coding: utf-8 -*-
import serial
import time
serialPort = "COM4"  # 串列埠
baudRate = 9600  # 波特率
ser = serial.Serial(serialPort, baudRate, timeout=0.5)
print("引數設定：串列埠=%s ，波特率=%d" % (serialPort, baudRate))
  
demo1=b"0"#將0轉換為ASCII碼方便傳送
demo2=b"1"#同理
demo3=b"2"
while 1:
    c=input('請輸入指令:')
    c=ord(c)#將c轉換為UTF-8標準數字
    if(c==48):
        ser.write(demo1)#ser.write在於向串列埠中寫入資料
    if(c==49):
         ser.write(demo2)
    if (c==50):
         ser.write(demo3)
         rd=ser.readline()
         print(rd)
         
