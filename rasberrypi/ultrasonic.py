import RPi.GPIO as GPIO                    # RPi.GPIO에 정의된 기능을 GPIO라는 명칭으로 사용
import time                                # time 모듈

GPIO.setmode(GPIO.BCM)                     # GPIO 이름은 BCM 명칭 사용
GPIO.setup(17, GPIO.OUT)                   
GPIO.setup(18, GPIO.IN)   
GPIO.setup(26,GPIO.IN) # start bt
GPIO.setup(21,GPIO.IN) # stop bt                


try:
    while True:
        start_bt = GPIO.input(26)
        stop_bt = GPIO.input(19)
        GPIO.output(17, False)         
        time.sleep(0.5)

        GPIO.output(17, True)          
        time.sleep(0.00001)            
        GPIO.output(17, False)         

        while GPIO.input(18) == 0:     # 18번 핀이 OFF 되는 시점을 시작 시간으로 잡는다
            start = time.time()

        while GPIO.input(18) == 1:     # 18번 핀이 다시 ON 되는 시점을 반사파 수신시간으로 잡는다
            stop = time.time()

        time_interval = stop – start      # 초음파가 수신되는 시간으로 거리를 계산한다
        distance = time_interval * 17000
        distance = round(distance, 2)
        # start_bt 눌렀을때
        if start_bt == False:    
            print(distance, “cm”)
        # stop_bt 눌렀을때
        elif stop_bt == False:


except KeyboardInterrupt:                  # Ctrl-C 입력 시
    GPIO.cleanup()                         # GPIO 관련설정 Clear
    Print("end")
