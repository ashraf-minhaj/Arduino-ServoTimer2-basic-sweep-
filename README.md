I've been trying to make a humanoid robot recently [ https://www.youtube.com/watch?v=CdclcoZlOCw ]- which means dealing with Servo motors. Everything worked just as fine just before I tried to make the robot TALK. When I needed to use the TMRpcm library. But there's some libraries like

    #TMRpcm.h
    #VirtualWire.h
are libraries that use the Timer1 of Arduino. It appears that you can't use two devices simultaneously where both use the same timer...So, if my robot talks- the servos don't work. Because The Servo.h and the TMRpcm both works on Arduino TImer1. Which is a mess. If you want to make both of them work you have to use another library for servos. Which is ServoTimer2 library? This uses the Timer2 on Arduino...Unfortunately on internet I haven't found any tutorials to understand how this ServoTimer2 library actually works, and how to use it in code. So, I've decided to make a tutorial so that people like me can understand better. We'll be using one servo motor with this library and make a simple Servo sweep code

You may watch the video to understand better
See full tutorial https://create.arduino.cc/projecthub/ashraf_minhaj/how-to-use-servotimer2-library-simple-explain-servo-sweep-512fd9?ref=user&ref_id=507819&offset=5

