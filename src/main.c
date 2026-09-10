/*Initialize ESP32

Initialize:
    EMG sensors
    FSR sensors
    Servos
    OLED
    Buttons

Run system validity check

IF validity check fails:
    Display error
    Prevent hand movement

Perform EMG calibration

WHILE system is powered ON:

    Read EMG Channel 1
    Read EMG Channel 2
    Determine muscle activation

    IF valid command detected:
        Identify intended grip
        Command appropriate finger positions
    ELSE: Maintain previous position

    Read FSR sensors
    Determine current grip force

    IF force is too low:
        Increase grip
    ELSE IF force is too high:
        Decrease grip
    ELSE:
        Maintain current grip

    IF button pressed:
        Execute button function
        
    Update OLED
    Check battery/system status
    Check other features implemented

    IF fault detected:
        Stop servos
        Display warning

END
*/